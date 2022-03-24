#include <iostream>
#include <fstream>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include<bits/stdc++.h>

using namespace std;

vector<pair<GLfloat, GLfloat>> point;

int count = 0;

void readInput(){
    FILE* fptr = fopen("input.txt", "r");
    GLfloat x, y;
    while(fscanf(fptr, "%f %f", &x, &y) != EOF){
        point.push_back({x, y});
    }
    fclose(fptr);
}

void renderFunction(){

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glLineWidth(3.0);

    for(int i=0; i<point.size(); i++){
        for(int j=i+1; j<point.size(); j++){
            glBegin(GL_LINE_STRIP);
                glVertex2d(point[i].first, point[i].second);
                glVertex2d(point[j].first, point[j].second);
            glEnd();
        }
    }
    glFlush();
}

int main(int argc, char** argv){
    readInput();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Q6 - Polygon plotting");

    glutDisplayFunc(renderFunction);
    glutMainLoop();

    return 0;
}
