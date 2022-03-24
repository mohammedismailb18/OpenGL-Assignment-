#include <iostream>
#include <fstream>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include<bits/stdc++.h>

using namespace std;

void renderFunction(){

    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    // Red Polygon
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(-0.5,0.6,-0.8);
        glVertex3f(-0.2,0.9,-0.8);
        glVertex3f(0.8,-0.1, 0.8);
        glVertex3f(0.5, -0.4, 0.8);
    glEnd();

    // Green Polygon
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.8, 0.8);
        glVertex3f(0.3, 0.5, 0.8);
        glVertex3f(-0.7, -0.5, -0.8);
        glVertex3f(-1.0, -0.2, -0.8);
    glEnd();

    // Blue Polygon
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.6, 0.0, -0.8);
        glVertex3f(0.6, -0.3, -0.8);
        glVertex3f(-0.9, -0.3, 0.8);
        glVertex3f(-0.9, 0.0, 0.8);
    glEnd();

    glFlush();
}

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH);
    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Q6 - 3D Polygon");

    glutDisplayFunc(renderFunction);
    glutMainLoop();

    return 0;
}
