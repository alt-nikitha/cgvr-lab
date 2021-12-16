//#include <unistd.h>
//
//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//
//#include<algorithm>
//using namespace std;
//
//int wx = 500, wy = 500;
//static float intx[10] = { 0 };
//float x[100], y[100];
//int n = 4,m = 0;
//void myInit(){
//    glClearColor(1,1,1,1);
//    glColor3f(0, 0, 1);
//    glPointSize(1);
//
//    gluOrtho2D(0,wx,0,wy);
//}
//void edgeDetect(float x1, float y1, float x2, float y2, float scanline){
//    
//    if(y2<y1){
//        float temp;
//        temp = x1; x1 = x2; x2 = temp;
//        temp = y1; y1 = y2; y2 = temp;
//    }
//    if (scanline > y1 && scanline < y2){
//        
//        intx[m++] =  x1 + (x2-x1)/(y2-y1)*(scanline-y1);
//    }
//        
//}
//
//void drawLine(float x1, float y1, float x2, float y2){
//    sleep(1);
//    glColor3f(0, 1, 0);
//    glBegin(GL_LINES);
//    glVertex2f(x1,y1);
//    glVertex2f(x2,y2);
//    glEnd();
//    glFlush();
//}
//void scanFill(){
//    for(int s=0;s<=wy;s++){
//        m = 0;
//        for(int i=0;i<n;i++){
//            edgeDetect(x[i],y[i],x[(i+1)%n],y[(i+1)%n],s);
//        }
//        sort(intx,(intx+m));
//        if(m>=2){
//            for(int i=0;i<m;i+=2){
//                drawLine(intx[i],s,intx[i+1],s);
//            }
//        }
//    }
//}
//
//void display(){
//    myInit();
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLineWidth(2);
//    glBegin(GL_LINE_LOOP);
//    for(int i=0;i<n;i++){
//        glVertex2f(x[i],y[i]);
//    }
//    glEnd();
//    scanFill();
//    glFlush();
////    glFlush();
//}
//int main(int argc, char **argv){
//    x[0] = 20; y[0] = 20;
//    x[1] = 100; y[1] = 20;
//    x[2] = 100; y[2] = 100;
//    x[3] = 20; y[3] = 100;
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//    glutInitWindowSize(wx,wy);
//    glutCreateWindow("scanline fill");
//    glutDisplayFunc(display);
//
//    glutMainLoop();
//    return 0;
//}
//
