#include "GL/freeglut.h"
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;
// GLOBALS
bool motion = false;
int prev_x = 0, prev_y = 0;
int new_x = 0, new_y = 0;
// CLASSES
class OPENGL_LAB {
    float colors[2][3] = {
        {1, 1, 0},
        {0, 1, 1}
    };
    float x_dir[4] = {.2, -.2, -.2, .2};
    float y_dir[4] = {.2, .2, -.2, -.2};
    float x_ratio = 0;
    float y_ratio = 0;
    public:       
        inline float genColor() {
            return (rand() % 256) / 256.0;
        }
        inline void CanvusSettings() {
            glClearColor(1.0, 1.0, 1.0, 0);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        }
        void Points() {
            glColor3f(1, 0, 1);
            glPointSize(20.0f);
            glEnable(GL_POINT_SMOOTH);
            glBegin(GL_POINTS); 
                glVertex3f(1.0f,1.0f,0.0f);
                glVertex3f(-1.0f,-1.0f,0.0f);
            glEnd();
        }
        void Lines() {
            glColor3f(1, 0, 1);
            glBegin(GL_LINES);
                glVertex2f(0.9, 0.3);
                glVertex2f(-0.9, 0.3);
            glEnd();
        }
        void Triangle() {
            glColor3f(colors[0][0], colors[0][1], colors[0][2]);
            glBegin(GL_POLYGON);
                glVertex3f(0.5, 0.0, 0.5);
                glVertex3f(0.5, 0.0, 0.0);
                glVertex3f(0.0, 0.5, 0.0);
                glVertex3f(0.0, 0.0, 0.5);
            glEnd();
        }
        void Quads() {
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_QUADS);
            glVertex2f(0.5, 0.0);
            glVertex2f(0.5, -1.0);
            glVertex2f(-0.5, -1.0);
            glVertex2f(-0.5, 0.0);
            glEnd();            
        }
        void Polygon() {
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2f(0,1);
            glVertex2f(-1, 0.5);
            glVertex2f(-1, -0.5);
            glVertex2f(0, -1);
            glVertex2f(1, -0.5);
            glVertex2f(1, 0.5);
            glEnd();
        }
        void Circle() {
            glColor3f(1.0, 1.0, 0.0);
            float r = 0.3;
            for(float i = 0; i<360; i = i+0.01) {
                float x = r * cos(i);
                float y = r * sin(i);
                glPointSize(15.00f);
                glBegin(GL_POINTS);
                glVertex2f(x, y);
                glEnd();
            }
            glColor3f(1.0, 0.0, 0.0);
            r = 0.3;
            glBegin(GL_POLYGON);
            for(float i = 0; i<360; i = i+0.01) {
                float x = r * cos(i);
                float y = r * sin(i);
            
                glVertex2f(x, y);
            
            }
            glEnd();
        }
        void Box() {            
            glBegin(GL_QUADS);
            for (int i = 0; i < 4; ++i) {
                glColor3f(genColor(), genColor(), genColor());
                glVertex2f(x_dir[i] + x_ratio, y_dir[i] + y_ratio);
            }   
            glEnd();
        }   
} draw; 
class Assignments {
    int n;
    float X[100], Y[100], R[100];
    public:
        void inputs() {
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cin >> X[i] >> Y[i] >> R[i];
            }
        }
        void point(float x, float y) {
            glColor3f(draw.genColor(), draw.genColor(), draw.genColor());
            glPointSize(12.0f);
            // glEnable(GL_POINT_SMOOTH);
            glBegin(GL_POINTS);
                glVertex2f(x, y);
            glEnd();
        }
        void circle_pixels(){
           for (int i = 0; i < n; ++i) {
                point(X[i], Y[i]);
                for (float angle = 0; angle < 360; angle += 1) {
                    float x = R[i] * cos(angle) + X[i];
                    float y = R[i] * sin(angle) + Y[i];
                    cout << round(x * 10) << " " << round(y * 10) << endl;
                    point(x, y);
                }                
           } 
        }
} hw;
class Display : OPENGL_LAB {
    public:
        static void displayMe() {
            draw.CanvusSettings();
            // draw.Triangle();
            // draw.Lines();
            // draw.Points();
            // draw.Quads();
            // draw.Polygon();
            // draw.Circle();
            // draw.Box();
            hw.circle_pixels();
            glFlush();
        }
} display;
class Mouse {
    public:    
        static void mouse(int button, int state, int x, int y) {
            switch (button) {
                case GLUT_LEFT_BUTTON:
                    if (state == GLUT_DOWN) {
                        // cout << x << " " << y << endl;
                        prev_x = x;
                    } else {                        
                        // cout << "New " << " " << motion << " " << x << endl;
                        new_x = x;
                        motion = false;
                    }
                    break;
                case GLUT_RIGHT_BUTTON:
                    if (state == GLUT_DOWN) {
                        // cout << x << " " << y << endl;
                    }   
                    break;        
            }
        }
        static void mouseMotion(int x, int y) {
            // cout << x << "MOTION" << y << endl;
            motion = true;
        }
} mouse;
// MAIN FUNCTION
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    hw.inputs();
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OPENGL Canvus");    
    glutMouseFunc(mouse.mouse);
    glutMotionFunc(mouse.mouseMotion);
    glutDisplayFunc(display.displayMe);
    glutMainLoop();
    return 0;
}
