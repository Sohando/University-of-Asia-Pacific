#include "GL/freeglut.h"
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;
// CLASSES
class Globals {
    public:
        // Variables
        bool motion = false;
        int prev_x = 0, prev_y = 0;
        int new_x = 0, new_y = 0;
        
        float colors[2][3] = {
            {1, 1, 0},
            {0, 1, 1}
        };
        float x_dir[4] = {.2, -.2, -.2, .2};
        float y_dir[4] = {.2, .2, -.2, -.2};
        float x_ratio = 0;
        float y_ratio = 0;
        // Methods
        inline float genColor() {
            return (float(rand() % 256)) / 256.0;
        }
        inline void CanvusSettings() {
            glClearColor(1.0, 1.0, 1.0, 0);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        }
} Gb;
class OPENGL_LAB {
    public:       
        void Points(float x, float y, float z) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            glPointSize(12.0f);
            // glEnable(GL_POINT_SMOOTH);
            glBegin(GL_POINTS); 
                glVertex3f(x, y, z);
            glEnd();
        }
        void Lines2D(float x1, float y1, float x2, float y2) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            glBegin(GL_LINES);
                glVertex2f(x1, y1);
                glVertex2f(x2, y2);
            glEnd();
        }
        void Triangle(vector<vector<float>>& vertex) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            glBegin(GL_POLYGON);
                cout << vertex.size() << endl;
                for (int i = 0; i < vertex.size(); ++i) {
                    cout << vertex[i][0] << " " << vertex[i][1] << " " << vertex[i][2] << endl; 
                    glVertex3f(vertex[i][0], vertex[i][1], vertex[i][2]);
                }
            glEnd();
        }
        void Quads(vector<vector<float>>& vertex) {            
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            glBegin(GL_QUADS);
                cout << vertex.size() << endl;
                for (int i = 0; i < vertex.size(); ++i) {
                    cout << vertex[i][0] << " " << vertex[i][1] << " " << vertex[i][2] << endl; 
                    glVertex3f(vertex[i][0], vertex[i][1], vertex[i][2]);
                }
            glEnd();
        }
        void Polygon(vector<vector<float>>& vertex) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            glBegin(GL_POLYGON);
                cout << vertex.size() << endl;
                for (int i = 0; i < vertex.size(); ++i) {
                    cout << vertex[i][0] << " " << vertex[i][1] << " " << vertex[i][2] << endl; 
                    glVertex3f(vertex[i][0], vertex[i][1], vertex[i][2]);
                }
            glEnd();
        }
        void Circle(float X, float Y, float R) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            // float r = 0.3;
            for(float i = 0; i<360; i = i+0.01) {
                float x = R * cos(i) + X;
                float y = R * sin(i) + Y;
                glPointSize(15.00f);
                glBegin(GL_POINTS);
                glVertex2f(x, y);
                glEnd();
            }
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
            // r = 0.3;
            glBegin(GL_POLYGON);
            for(float i = 0; i<360; i = i+0.01) {
                float x = R * cos(i) + X;
                float y = R * sin(i) + Y;
                glVertex2f(x, y);
            }
            glEnd();
        }
        void Box() {            
            glBegin(GL_QUADS);
            for (int i = 0; i < 4; ++i) {
            glColor3f(Gb.genColor(), Gb.genColor(), Gb.genColor());
                glVertex2f(Gb.x_dir[i] + Gb.x_ratio, Gb.y_dir[i] + Gb.y_ratio);
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
        void circle_pixels(){
           for (int i = 0; i < n; ++i) {
                draw.Points(X[i], Y[i], 0.0);
                for (float angle = 0; angle < 360; angle += 1) {
                    float x = R[i] * cos(angle) + X[i];
                    float y = R[i] * sin(angle) + Y[i];
                    cout << round(x * 10) << " " << round(y * 10) << endl;
                    draw.Points(x, y, 0.0);
                    // draw.Lines2D(X[i], Y[i], x, y);
                }                
           } 
        }
        void Examples() {
            vector<vector<float>> vertex;
            vertex.resize(6, vector<float>(3));
            for (int i = 0; i < vertex.size(); ++i) {
                for (int j = 0; j < vertex[i].size(); ++j) {
                    vertex[i][j] = (float(rand() % 11) / 10);
                }   
            }
            draw.Polygon(vertex);
        }
} hw;
class LineClippingAlgorithom {
    /*
     *  6  |      2       |   7 
     *_____|______________|_______
     *     |              |
     *     |              |
     *     |              |
     *  3  |      1       |   4
     *     |              |   
     *     |              |
     *     |              |
     * ____|______________|_______
     *     |              |   
     *  8  |      5       |   9
     *     |              |
     *
     *  1 --> 6 -- > 7 --> 8 --> 9 --> 2 --> 3 --> 4 --> 5
     * */
    public:
        // Variables
        float x_max, y_max, x_min, y_min;
        float x1, y1, x2, y2;
        vector<vector<float>> vertex;
        // Methods
        LineClippingAlgorithom() {
            cin >> y_max >> y_min >> x_max >> x_min;
            cin >> x1 >> y1 >> x2 >> y2;
            vertex.resize(4, vector<float>(3));
            vertex[0][0] = x_min;
            vertex[0][1] = y_min;
            vertex[0][2] = 0;
            vertex[1][0] = x_max;
            vertex[1][1] = y_min;
            vertex[1][2] = 0;
            vertex[2][0] = x_max;
            vertex[2][1] = y_max;
            vertex[2][2] = 0;
            vertex[3][0] = x_min;
            vertex[3][1] = y_max;
            vertex[3][2] = 0;

            // draw.Polygon(vertex);
        }
        bool region1(float x, float y) {
            return (x < x_max and x > x_min) and (y < y_max and y > y_min);
        }
        bool region2(float x, float y) {
            return (y > y_max);
        }
        bool region3(float x, float y) {
            return (x < x_min); 
        }
        bool region4(float x, float y) {
            return (x > x_max); 
        }
        bool region5(float x, float y) {
            return (y < y_min); 
        }
        bool region6(float x, float y) {
            return (x < x_min) and (y > y_max);
        }
        bool region7(float x, float y) {
            return (x > x_max) and (y > y_max); 
        }
        bool region8(float x, float y) {
            return (x < x_min) and (y < y_min);
        }
        bool region9(float x, float y) {
            return (x > x_max) and (y < y_min);
        }
        void runTheAlgo() {
            // First Point
            if (region1(x1, y1)) {
                cout << "Point inside region 1" << endl;
            } else if (region6(x1, y1)) {
                cout << "Point inside region 6" << endl;
            } else if (region7(x1, y1)) {
                cout << "Point inside region 7" << endl;
            } else if (region8(x1, y1)) {
                cout << "Point inside region 8" << endl;
            } else if (region9(x1, y1)) {
                cout << "Point inside region 9" << endl;
            } else if (region2(x1, y1)) {
                cout << "Point inside region 2" << endl;
            } else if (region3(x1, y1)) {
                cout << "Point inside region 3" << endl;
            } else if (region4(x1, y1)) {
                cout << "Point inside region 4" << endl;
            } else if (region5(x1, y1)) {
                cout << "Point inside region 5" << endl;
            }
            // Second Point
            if (region1(x2, y2)) {
                cout << "Point inside region 1" << endl;
            } else if (region6(x2, y2)) {
                cout << "Point inside region 6" << endl;
            } else if (region7(x2, y2)) {
                cout << "Point inside region 7" << endl;
            } else if (region8(x2, y2)) {
                cout << "Point inside region 8" << endl;
            } else if (region9(x2, y2)) {
                cout << "Point inside region 9" << endl;
            } else if (region2(x2, y2)) {
                cout << "Point inside region 2" << endl;
            } else if (region3(x2, y2)) {
                cout << "Point inside region 3" << endl;
            } else if (region4(x2, y2)) {
                cout << "Point inside region 4" << endl;
            } else if (region5(x2, y2)) {
                cout << "Point inside region 5" << endl;
            }
        }
} lnClip;
class Display {
    public:
        static void displayMe() {
            Gb.CanvusSettings();
            // draw.Triangle();
            draw.Polygon(lnClip.vertex);
            draw.Lines2D(lnClip.x1, lnClip.y1, lnClip.x2, lnClip.y2);
            // draw.Points();
            // draw.Quads();
            // draw.Circle(.2, .2, .7);
            // draw.Circle(-.2, -.2, .7);
            // Gb.x_ratio += .4;
            // draw.Box();
            // hw.circle_pixels();
            // hw.Triangle();
            // hw.Examples();
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
                        Gb.prev_x = x;
                    } else {                        
                        // cout << "New " << " " << motion << " " << x << endl;
                        Gb.new_x = x;
                        Gb.motion = false;
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
            Gb.motion = true;                       
        }
} mouse;
// MAIN FUNCTION
int main(int argc, char** argv) {
    srand((unsigned int)time(NULL));
    glutInit(&argc, argv);
    // hw.inputs();
    lnClip.runTheAlgo();
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
