#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>

struct point{
    GLfloat x, y;
};

struct point points[1000];

int count = 0;

void readInput(){
    FILE* fptr = fopen("input.txt", "r");
    while(fscanf(fptr, "%f %f", &(points[count].x), &(points[count].y)) != EOF){
        count++;
    }
    fclose(fptr);
}

void renderFunction(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f((float)38/255, (float)86/255, (float)181/255);
    //glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glPointSize(10);

    glBegin(GL_POINTS);
        for(int i=0; i<count; i++){
            glVertex2d(points[i].x, points[i].y);
        }
    glEnd();

    glFlush();
}

int main(int argc, char** argv){
    readInput();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1366, 768);
    glutInitWindowPosition(700, 360);
    glutCreateWindow("Q2 - plot points");

    glutDisplayFunc(renderFunction);
    glutMainLoop();

    return 0;
}
