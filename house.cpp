////
////  house.cpp
////  Lab
////
////  Created by Nikitha Srikanth on 15/12/21.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//#include <math.h>
//float house[11][2] = { { 100,200 },{ 200,250 },{ 300,200 },{ 100,200 },{ 100,100 },{ 175,100 },{ 175,150 },{ 225,150 },{ 225,100 },{ 300,100 },{ 300,200 } };
//int angle;
//float m, c, theta;
//void myInit(){
//    glClearColor(1,1,1,1);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    gluOrtho2D(-250, 250, -250, 250);
//}
//void display(){
//    myInit();
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1,0,0);
//    glBegin(GL_LINE_LOOP);
//    for(int i = 0;i<11;i++){
//        glVertex2fv(house[i]);
//    }
//    glEnd();
//    glPushMatrix();
//    glLoadIdentity();
//    glTranslatef(100,100,0);
//    glRotatef(angle,0,0,1);
//    glTranslatef(-100,-100,0);
//    
//    glBegin(GL_LINE_LOOP);
//    for(int i = 0;i<11;i++){
//        glVertex2fv(house[i]);
//    }
//    glEnd();
//    glPopMatrix();
//    glFlush();
//}
//
//void display2(){
//    myInit();
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1,0,0);
//    glBegin(GL_LINE_LOOP);
//    for(int i = 0;i<11;i++){
//        glVertex2fv(house[i]);
//    }
//    glEnd();
//    glColor3f(1, 1, 0);
//    float x1 = 0, x2 = 500;
//        float y1 = m * x1 + c;
//        float y2 = m * x2 + c;
//
//        glBegin(GL_LINES);
//        glVertex2f(x1, y1);
//        glVertex2f(x2, y2);
//        glEnd();
//        glFlush();
//
//    glPushMatrix();
//    glLoadIdentity();
//    glTranslatef(0,c,0);
//    theta = atan(m);
//    glRotatef(-theta,0,0,1);
//    glTranslatef(0,-c,0);
//    
//    glBegin(GL_LINE_LOOP);
//    for(int i = 0;i<11;i++){
//        glVertex2fv(house[i]);
//    }
//    glEnd();
//    glPopMatrix();
//    glFlush();
//}
//
//void mouse(int btn, int state, int x, int y) {
//    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
//        display();
//    }
//    else if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
//        display2();
//    }
//}
//int main(int argc, char **argv){
//    
//    printf("Enter the rotation angle\n");
//        scanf("%d", &angle);
//        printf("Enter c and m value for line y=mx+c\n");
//        scanf("%f %f", &c, &m);
//        glutInit(&argc, argv);
//        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//        glutInitWindowSize(900, 900);
//        glutInitWindowPosition(100, 100);
//        glutCreateWindow("House Rotation");
//        glutDisplayFunc(display);
//        glutMouseFunc(mouse);
//        myInit();
//        glutMainLoop();
//
//}
