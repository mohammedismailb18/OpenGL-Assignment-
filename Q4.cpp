#include <iostream>
#include <fstream>
#include <GL/freeglut.h>
using namespace std;

void mouseFun(int button, int state, int x, int y)
{
    if (button == 0)    // Left Button Check
    {
        cout << button << " " << state << " " << x << " " << y << "\n";

        if (state == 0) // Button press
        {
            glPointSize(5.0);
            glLineWidth(5.0);
            
            glBegin(GL_POINTS);
            glVertex2f(x, y);
            glEnd();

            glBegin(GL_LINE_STRIP);
        }
        else    // Button release
        {
            glEnd();
            glFlush();
        }
    }
}

void drawFun(int x, int y) {
    // cout << x << "-" << y << "\t";
    glVertex2f(x, y);
}

void renderFunction()
{
    GLfloat pointSize = 12.0;

    glPointSize(pointSize);

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glOrtho(0.0, 500.0, 500.0, 0.0, -1.0, 1.0);
    cout << "hello\n";
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Q4 - Window");
    glutMouseFunc(mouseFun);
    glutMotionFunc(drawFun);
    
    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
