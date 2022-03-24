#include <iostream>
#include <GL/freeglut.h>

void drawRecursiveSquares(double x, double y, double len, int depthOfRecursion){
    if(depthOfRecursion == 0)
        return;

    glBegin(GL_LINE_LOOP);
        glVertex2f(x - len, y + len);
        glVertex2f(x + len, y + len);
        glVertex2f(x + len, y - len);
        glVertex2f(x - len, y - len);
        glVertex2f(x - len, y + len);
    glEnd();

    drawRecursiveSquares(x + len/2, y + len/2, len/2, depthOfRecursion-1);
    drawRecursiveSquares(x - len/2, y - len/2, len/2, depthOfRecursion-1);
}

void renderFunction()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(2.0);
    glOrtho(-150.0, 150.0, -150.0, 150.0, -1.0, 1.0);

    drawRecursiveSquares(0.0, 0.0, 100.0, 20);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Q7 - Window");
    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
