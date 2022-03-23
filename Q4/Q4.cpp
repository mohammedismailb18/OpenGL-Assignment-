#include <iostream>
#include <fstream>
#include <GL/freeglut.h>
#include<cmath>

using namespace std;
int width = 500, height = 500;

void mouseFun(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)    // Left Button Click
    {
        if(state == GLUT_UP)    // Button release
        {
            glFlush();
        }
    }
}

void drawLineSegmentFromOrigin(int x, int y) {
    float r = 0.0, g = 0.0, b = 0.0;
    x = x - width/2;
    y = height/2 - y;
    if(x != 0 and y != 0){
        float angle = atan((float)y/x)*180.0/M_PI;
        if(x > 0 and y > 0)         // First Quadrant
            r = angle/90;
        else if(x < 0 and y > 0)    // Second Quadrant
            g = (90.0 + angle)/90;
        else if(x < 0 and y < 0)    // Third Quadrant
            b = angle/90;
        else{                       // Fourth Quadrant
            r = (90.0 + angle)/90, g = (90.0 + angle)/90;
        }
    }
    glColor3f(r, g, b);
    glBegin(GL_LINES);
        glVertex2f(width/2, height/2);
        glVertex2f(x + width/2, height/2 - y);
    glEnd();
}

void renderFunction()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    glLineWidth(2.0);
    glOrtho(0.0, width, height, 0.0, -1.0, 1.0);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Q4 - Window");
    glutMouseFunc(mouseFun);
    glutMotionFunc(drawLineSegmentFromOrigin);
    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
