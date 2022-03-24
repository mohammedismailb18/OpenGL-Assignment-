#include <iostream>
#include <GL/freeglut.h>
#include<cmath>

void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    glLineWidth(2.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
  
    for(double theta = 0.0, radius = 0.7; theta < 2*M_PI; theta += 0.001){
        glBegin(GL_LINE_STRIP);
            glVertex2f(0.0, 0.0);
            glVertex2f(radius*cos(theta), radius*sin(theta));
        glEnd();
    }

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    for(double theta = 0.0, radius = 0.7; theta <= 2*M_PI; theta += 0.0001){
            glVertex2f(radius*cos(theta), radius*sin(theta));
    }
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Q9_B - Window");
    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
