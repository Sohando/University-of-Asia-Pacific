#include "GL/freeglut.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include "vecmath.h"
using namespace std;

// Globals
int color = 0;
bool c_pressed = false;
GLfloat light_horizontal = 0;
GLfloat light_vertical = 0;
GLfloat rotate_angle = 0;
 
bool motion = false;
int prev_x = 0, prev_y = 0;
int new_x = 0, new_y = 0;

GLfloat look_at = 5;
// This is the list of points (3D vectors)
vector<Vector3f> vecv;

// This is the list of normals (also 3D vectors)
vector<Vector3f> vecn;

// This is the list of faces (indices into vecv and vecn)
vector<vector<unsigned> > vecf;


// You will need more global variables to implement color and position changes


// These are convenience functions which allow us to call OpenGL 
// methods on Vec3d objects
inline void glVertex(const Vector3f &a) 
{ glVertex3fv(a); }

inline void glNormal(const Vector3f &a) 
{ glNormal3fv(a); }
// I M P L E N T I N G Mouse_Input_CAllback
void MouseDrag(int X, int Y) {
    motion = true;
}
void MouseCallback(int Button, int State, int x, int y) {
    if (Button == GLUT_LEFT_BUTTON) {
        if (State == GLUT_DOWN) {
                        // cout << x << " " << y << endl;
            prev_x = x;
        } else {                        
            // cout << "New " << " " << motion << " " << x << endl;
            new_x = x;
            if (motion) {
                if (prev_x > new_x) {
                    rotate_angle -= (prev_x - new_x); 
                    cout << "Roatate left" << endl;
                } else {
                    rotate_angle += (new_x - prev_x);
                    cout << "Rotate right" << endl;
                }
            }
            motion = false;
            glutPostRedisplay();
        }
    } else if (Button == GLUT_RIGHT_BUTTON) {

        if (State == GLUT_DOWN) {
            // cout << x << " right " << y << endl;
            prev_y = y;
        } else {
            new_y = y;
            if (motion) {
                // cout << "hmm" << endl;
                if (prev_y > new_y) {
                    look_at += 1.0;
                    cout << "Zoom out" << endl;
                } else {
                    look_at -= 1.0;
                    cout << "Zoom in" << endl;
                }
            }
            glutPostRedisplay();
            motion = false;
        }
    }
}
// This function is called whenever a "Normal" key press is received.
void keyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 27: // Escape key
        exit(0);
        break;
    case 'c':
        // add code to change color here
        c_pressed = true;
		color++;
        break;
    case 'r':
        rotate_angle++;
        break;
    default:
        cout << "Unhandled key press " << key << "." << endl;        
    }

	// this will refresh the screen so that the user sees the color change
    glutPostRedisplay();
}

// This function is called whenever a "Special" key press is received.
// Right now, it's handling the arrow keys.
void specialFunc( int key, int x, int y )
{
    switch ( key )
    {
    case GLUT_KEY_UP:
        // add code to change light position        
        light_vertical += .5;
		break;
    case GLUT_KEY_DOWN:
        // add code to change light position
        light_vertical -= .5;
		break;
    case GLUT_KEY_LEFT:
        // add code to change light position
        light_horizontal -= .5;    
		break;
    case GLUT_KEY_RIGHT:
        // add code to change light position
        light_horizontal += .5;
		break;
    }

	// this will refresh the screen so that the user sees the light position
    glutPostRedisplay();
}

// This function is responsible for displaying the object.
void drawScene(void)
{
    int i;

    // Clear the rendering window
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // glShadeModel (GL_SMOOTH);
    // Rotate the image
    glMatrixMode( GL_MODELVIEW );  // Current matrix affects objects positions
    glLoadIdentity();              // Initialize to the identity

    // Position the camera at [0,0,5], looking at [0,0,0],
    // with [0,1,0] as the up direction.
    gluLookAt(0.0, 0.0, look_at,
              0.0, 0.0, 0.0,
              0.0, 1.0, 0.0);

    // Set material properties of object

	// Here are some colors you might use - feel free to add more
    GLfloat diffColors[4][4] = { {0.5, 0.5, 0.9, 1.0},
                                 {0.9, 0.5, 0.5, 1.0},
                                 {0.5, 0.9, 0.3, 1.0},
                                 {0.3, 0.8, 0.9, 1.0} };
    
	// Here we use the first color entry as the diffuse color
    color %= 4;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, diffColors[color]); 
	// Define specular color and shininess
    GLfloat specColor[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat shininess[] = {100.0};

	// Note that the specular color and shininess can stay constant
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specColor);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, shininess);
  
    // Set light properties

    // Light color (RGBA)
    GLfloat Lt0diff[] = {1.0,1.0,1.0,1.0};
    // Light position
	GLfloat Lt0pos[] = {light_horizontal, light_vertical, 5.0f, 1.0f};

    glLightfv(GL_LIGHT0, GL_DIFFUSE, Lt0diff);
    glLightfv(GL_LIGHT0, GL_POSITION, Lt0pos);

	// This GLUT method draws a teapot.  You should replace
	// it with code which draws the object you loaded.
    glPushMatrix();
        glRotatef(rotate_angle, 0, 1, 0);
        glutSolidTeapot(1.0);
    glPopMatrix();

    
    // Dump the image to the screen.
    glutSwapBuffers();


}

// Initialize OpenGL's rendering modes
void initRendering()
{
    glEnable(GL_DEPTH_TEST);   // Depth testing must be turned on
    glEnable(GL_LIGHTING);     // Enable lighting calculations
    glEnable(GL_LIGHT0);       // Turn on light #0.
}

// Called when the window is resized
// w, h - width and height of the window in pixels.
void reshapeFunc(int w, int h)
{
    // Always use the largest square viewport possible
    if (w > h) {
        glViewport((w - h) / 2, 0, h, h);
    } else {
        glViewport(0, (h - w) / 2, w, w);
    }

    // Set up a perspective view, with square aspect ratio
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // 50 degree fov, uniform aspect ratio, near = 1, far = 100
    gluPerspective(50.0, 1.0, 1.0, 100.0);
}

void loadInput()
{
	// load the OBJ file here
}

// Main routine.
// Set up OpenGL, define the callbacks and start the main loop
int main( int argc, char** argv )
{
    loadInput();

    glutInit(&argc,argv);

    // We're going to animate it, so double buffer 
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );

    // Initial parameters for window position and size
    glutInitWindowPosition( 60, 60 );
    glutInitWindowSize( 360, 360 );
    glutCreateWindow("Assignment 0");

    // Initialize OpenGL parameters.
    initRendering();

    // Set up callback functions for key presses
    glutKeyboardFunc(keyboardFunc); // Handles "normal" ascii symbols
    glutSpecialFunc(specialFunc);   // Handles "special" keyboard keys
    
    // Set up callback functions for mouse 
    glutMouseFunc(MouseCallback);
    glutMotionFunc(MouseDrag);

    // Set up the callback function for resizing windows
    glutReshapeFunc( reshapeFunc );
    
    // Call this whenever window needs redrawing
    glutDisplayFunc( drawScene );

    // Start the main loop.  glutMainLoop never returns.
    glutMainLoop( );

    return 0;	// This line is never reached.
}
