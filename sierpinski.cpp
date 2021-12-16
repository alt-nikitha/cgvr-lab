

//#include <stdio.h>
//#include <openGL/openGL.h>
//#include<GLUT/GLUT.h>
//
//int m;
//typedef float point[3];
//point tetra[4] = { {0,100,-100},{0,0,100},{100,-100,-100},{-100,-100,-100} };
//void myInit() {
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glOrtho(-300.0, 300.0, -300.0, 300.0, -300.0, 300.0);
//};
//
//void drawTriangle(point p1, point p2, point p3) {
//    glBegin(GL_TRIANGLES);
//    glVertex3fv(p1);
//    glVertex3fv(p2);
//    glVertex3fv(p3);
//    glEnd();
//}
//
//void drawTetra(point p1, point p2, point p3, point p4) {
//    glColor3f(1.0, 1.0, 0.0);
//    drawTriangle(p1, p2, p3);
//
//    glColor3f(0.0, 1.0, 0.0);
//    drawTriangle(p1, p3, p4);
//
//    glColor3f(1.0, 0.0, 0.0);
//    drawTriangle(p1, p4, p2);
//
//    glColor3f(0.0, 0.0, 1.0);
//    drawTriangle(p2, p3, p4);
//}
//
//void divideTetra(point p1, point p2, point p3, point p4, int iter) {
//    point mid[6];
//    int j;
//
//    if (iter > 0) {
//        for (j = 0; j < 3; j++)
//            mid[0][j] = (p1[j] + p2[j]) / 2;
//        for (j = 0; j < 3; j++)
//            mid[1][j] = (p1[j] + p3[j]) / 2;
//        for (j = 0; j < 3; j++)
//            mid[2][j] = (p1[j] + p4[j]) / 2;
//        for (j = 0; j < 3; j++)
//            mid[3][j] = (p2[j] + p3[j]) / 2;
//        for (j = 0; j < 3; j++)
//            mid[4][j] = (p3[j] + p4[j]) / 2;
//        for (j = 0; j < 3; j++)
//            mid[5][j] = (p2[j] + p4[j]) / 2;
//
//        divideTetra(p1, mid[0], mid[1], mid[2], iter - 1);
//        divideTetra(mid[0], p2, mid[3], mid[5], iter - 1);
//        divideTetra(mid[1], mid[3], p3, mid[4], iter - 1);
//        divideTetra(mid[2], mid[4], p4, mid[5], iter - 1);
//    } else {
//        drawTetra(p1, p2, p3, p4);
//    }
//}
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glBegin(GL_TRIANGLES);
//    divideTetra(tetra[0], tetra[1], tetra[2], tetra[3], 5);
//    glEnd();
//    glFlush();
//}
//int main(int argv, char** argc)
//{
//    //int m;
//    printf("Enter the number of iterations: ");
//    scanf("%d", &m);
//    glutInit(&argv, argc);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//    glutInitWindowPosition(100, 200);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow("Seirpinski Gasket");
//    glutDisplayFunc(display);
//    glEnable(GL_DEPTH_TEST);
//    myInit();
//    glutMainLoop();
//}
//
//
