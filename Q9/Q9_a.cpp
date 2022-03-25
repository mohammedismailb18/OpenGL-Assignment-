#include <iostream>
#include <GL/freeglut.h>
#include<cmath>

void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    int numberOfVertices = 1000;
    float radius = 0.7;
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0; i<numberOfVertices; i++)
        glVertex2f(radius*cos(((float)i/numberOfVertices)*2*M_PI), radius*sin(((float)i/numberOfVertices)*2*M_PI));
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Q9_A - Window");
    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
