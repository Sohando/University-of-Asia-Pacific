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
        inline float randFloat() {
            return (float(rand() % 11) / 10); 
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
            glLineWidth(3.0f);
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
                // cout << vertex.size() << endl;
                for (int i = 0; i < vertex.size(); ++i) {
                    // cout << vertex[i][0] << " " << vertex[i][1] << " " << vertex[i][2] << endl; 
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
                    vertex[i][j] = Gb.randFloat();
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
        int reg1, reg2;
        vector<vector<float>> vertex;
        // Methods    
        LineClippingAlgorithom() {
            // draw.Polygon(vertex);
        }        
        void input() {
            cin >> y_max >> y_min >> x_max >> x_min;
            cin >> x1 >> y1 >> x2 >> y2;
            vector<float> X = {y_max, y_min, x_max, x_min};        
            sort(X.begin(), X.end());
            y_min = X[0];
            x_min = X[1];
            y_max = X[2];
            x_max = X[3];
        }
        void genVertex() {
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
                reg1 = 1;
            } else if (region6(x1, y1)) {
                reg1 = 6;
                cout << "Point inside region 6" << endl;
            } else if (region7(x1, y1)) {
                reg1 = 7;
                cout << "Point inside region 7" << endl;
            } else if (region8(x1, y1)) {
                reg1 = 8;
                cout << "Point inside region 8" << endl;
            } else if (region9(x1, y1)) {
                reg1 = 9;
                cout << "Point inside region 9" << endl;
            } else if (region2(x1, y1)) {
                reg1 = 2;
                cout << "Point inside region 2" << endl;
            } else if (region3(x1, y1)) {
                reg1 = 3;
                cout << "Point inside region 3" << endl;
            } else if (region4(x1, y1)) {
                reg1 = 4;
                cout << "Point inside region 4" << endl;
            } else if (region5(x1, y1)) {
                reg1 = 5;
                cout << "Point inside region 5" << endl;
            }
            // Second Point
            if (region1(x2, y2)) {
                reg2 = 1;
                cout << "Point 2 inside region 1" << endl;
            } else if (region6(x2, y2)) {
                reg2 = 6;
                cout << "Point 2 inside region 6" << endl;
            } else if (region7(x2, y2)) {
                reg2 = 7;
                cout << "Point 2 inside region 7" << endl;
            } else if (region8(x2, y2)) {
                reg2 = 8;
                cout << "Point 2 inside region 8" << endl;
            } else if (region9(x2, y2)) {
                reg2 = 9;
                cout << "Point 2 inside region 9" << endl;
            } else if (region2(x2, y2)) {
                reg2 = 2;
                cout << "Point 2 inside region 2" << endl;
            } else if (region3(x2, y2)) {
                reg2 = 3;
                cout << "Point 2 inside region 3" << endl;
            } else if (region4(x2, y2)) {
                reg2 = 4;
                cout << "Point 2 inside region 4" << endl;
            } else if (region5(x2, y2)) {
                reg2 = 5;
                cout << "Point 2 inside region 5" << endl;
            }
            // cout << reg1 << " " << reg2 << endl;
            if (reg1 == reg2) {
                cout << "In the same region" << endl;
                if (reg1 == 1) 
                    cout << "No need to clip" << endl;
                else 
                    cout << "visible" << endl;
            }
            // switch(reg1) {
            //     case 1:
            //         if (reg2 != 1) {
            //             // clip
            //             cout << "clip" << endl;
            //         } else {
            //             cout << "Visible" << endl;
            //         }
            //         break;
            //     case 2:
            //         if (reg2 == 4 or reg2 == 9 or reg2 == 7 or reg2 == 6) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 3:
            //         if (reg2 == 6 or reg2 == 8) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 4:
            //         if (reg2 == 2 or reg2 == 9) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 5:
            //         if (reg2 == 8 or reg2 == 9) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 6:
            //         if (reg2 == 7 or reg2 == 2 or reg2 == 8 or reg2 == 3) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 7:
            //         if (reg2 == 2 or reg2 == 6) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 8:
            //         if (reg2 == 6 or reg2 == 3 or reg2 == 5 or reg2 == 9) {
            //             // no clip
            //         } else {
            //             // clip
            //             cout << "clip" << endl;
            //         }
            //         break;
            //     case 9:
            //         if (reg2 == 2 or reg2 == 8 or reg2 == 5 or reg2 == 4) {
            //             // no clip
            //         } else {
            //             // clip                        
            //             cout << "clip" << endl;
            //         }
            //         break;
            // }
        }
} lnClip;
class Display {
    public:
        static void showText(string String, float pos1, float pos2, float pos3) {
            glColor3f(0, 0, 0);
            glRasterPos3f(pos1, pos2, pos3);            
            for (int i = 0; i < (int)String.size(); ++i) {
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, String[i]);  // Updates the position
            }
            /*
            GLUT_BITMAP_8_BY_13
            GLUT_BITMAP_9_BY_15
            GLUT_BITMAP_TIMES_ROMAN_10
            GLUT_BITMAP_TIMES_ROMAN_24
            GLUT_BITMAP_HELVETICA_10
            GLUT_BITMAP_HELVETICA_12
            GLUT_BITMAP_HELVETICA_18
             */
        }
        static string makeString(float pos1, float pos2, float pos3) { 
            string one, two, three;
            string dump = "";
            stringstream ss;
            ss << pos1;
            ss >> one;
            stringstream ss1;
            ss1 << pos2;
            ss1 >> two;
            dump = "(" + one + ", " + two + ")";            
            return dump;
        }
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
            showText("6 2 7", -.5, 0, 0);
            showText("3 1 4", -.5, -.1, 0);
            showText("8 5 9", -.5, -.2, 0);
            string dmp = makeString(lnClip.x1, lnClip.y1, 0) + " f";
            showText(dmp, lnClip.x1, lnClip.y1, 0);
            dmp = makeString(lnClip.x2, lnClip.y2, 0) + " s";
            showText(dmp, lnClip.x2, lnClip.y2, 0);
            for (int i = 0; i < 4; ++i) {
                dmp = makeString(lnClip.vertex[i][0], lnClip.vertex[i][1], 0);
                showText(dmp, lnClip.vertex[i][0], lnClip.vertex[i][1], 0);
            }
            glFlush();
        }
} display;
class Keyboard {
    public:        
        static void keyBoard(unsigned char key, int x, int y) {
            switch (key) {
                case 27:
                    exit(0);
                    break;
            }
        }
} kbd;
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
    lnClip.input();
    lnClip.genVertex();
    lnClip.runTheAlgo();
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OPENGL Canvus");    
    glutMouseFunc(mouse.mouse);
    glutKeyboardFunc(kbd.keyBoard);
    glutMotionFunc(mouse.mouseMotion);
    glutDisplayFunc(display.displayMe);
    glutMainLoop();
    return 0;
}
