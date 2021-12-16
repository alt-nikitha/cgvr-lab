//
////
////  sphere.cpp
////  Lab
////
////  Created by Nikitha Srikanth on 15/12/21.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//#include<math.h>
//double c = 3.14/180, theta, thetar, phi, phir, phir20, c80,x,y,z;
//
//void sphere(){
//    for(float phi=-80.0;phi<=60.0;phi=phi+20.0){
//        phir = c*phi;
//        phir20 = c*(phi+20.0);
//        glBegin(GL_QUAD_STRIP);
//        for(theta = -180.0; theta<=180.0;theta+=20.0){
//            thetar = c*theta;
//            x = sin(thetar)*cos(phir);
//            y = cos(thetar)*cos(phir);
//            z = sin(phir);
//            glVertex3d(x,y,z);
//            x = sin(thetar)*cos(phir20);
//            y = cos(thetar)*cos(phir20);
//            z = sin(phir20);
//            glVertex3d(x,y,z);
//            
//            
//        }
//        glEnd();
//    }
//    c80 = c*80;
//    z = sin(c80);
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex3d(0.0,0.0,1.0);
//    for(float theta=-180.0;theta<=180.0;theta+=20.0){
//        thetar = c*theta;
//        x=sin(thetar)*cos(c80);
//        y=cos(thetar)*cos(c80);
//        glVertex3d(x,y,z);
//    }
//    glEnd();
//    
//    c80 = c*80;
//    z = -sin(c80);
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex3d(0.0,0.0,-1.0);
//    for(float theta=-180.0;theta<=180.0;theta+=20.0){
//        thetar = c*theta;
//        x=sin(thetar)*cos(c80);
//        y=cos(thetar)*cos(c80);
//        glVertex3d(x,y,z);
//    }
//    glEnd();
//    
//    
//}
//
//void display(){
//    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
////
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    glTranslatef(0.0, 0.0, -1);
//    glRotatef(-60.0, 0.0, 1.0, 0.0);
//
//    sphere();
//
//    glFlush();
//}
//void myinit()
//{
//glClearColor(1.0,1.0,1.0,0);
//glColor3f(0,0,1.0);
//glPointSize(1.0);
//gluOrtho2D(-1,1,-1,1);
//}
//
//int main(int argc,char *argv[])
//{
//
//glutInit(&argc,argv);
//glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
//glutInitWindowSize(500,500);
//glutInitWindowPosition(100,100);
//glutCreateWindow("Sphere Display");
//glutDisplayFunc(display);
//myinit();
//glutMainLoop();
//}
//
