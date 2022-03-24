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
void display() { 
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    for(int i=0; i<count; i++)
        glVertex2f(points[i].x, points[i].y);
    glEnd();
    glFlush();
} 

int main( int argc, char** argv ) { 
    readInput();
    glutInit(&argc, argv); 
    glutInitDisplayMode (GLUT_SINGLE); 
    glutInitWindowSize (500, 500); 
    glutInitWindowPosition (100,100); 
    glutCreateWindow ("Q3"); 
    glutDisplayFunc (display); 
    glutMainLoop(); 
    return 0; 
}
