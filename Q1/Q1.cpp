#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>

GLfloat backgroundColors[4];

void readInput(){
    FILE* fptr = fopen("input.txt", "r");
    if(fscanf(fptr, "%f %f %f %f", &backgroundColors[0], &backgroundColors[1], &backgroundColors[2], &backgroundColors[3]) != EOF)
        printf("\n The input feteched successfully");
    else
        printf("\n Input read Error");
    fclose(fptr);
}

void renderFunction(){
    glClearColor(backgroundColors[0], backgroundColors[1], backgroundColors[2], backgroundColors[3]);
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Q1 - Color Background by reading from input file");

    readInput();

    glutDisplayFunc(renderFunction);
    glutMainLoop();
    return 0;
}
