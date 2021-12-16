

//#include<iostream>
//#include<openGL/openGL.h>
//#include<GLUT/GLUT.h>
//#include <math.h>
//int point1_done = 0;
//int xc,yc,xp,yp,r;
//
//void drawCircle(int x, int y){
//    glColor3f(1,0,0);
//    glBegin(GL_POINTS);
//    glVertex2i(xc+x,yc+y);
//    glVertex2i(xc-x,yc+y);
//    glVertex2i(xc+x,yc-y);
//    glVertex2i(xc-x,yc-y);
//    glVertex2i(xc+y,yc+x);
//    glVertex2i(xc-y,yc+x);
//    glVertex2i(xc+y,yc-x);
//    glVertex2i(xc-y,yc-x);
//    glEnd();
//    glFlush();
//}
//
//void circle_bres(){
//    int x = 0, y = r;
//    int d = 3 - 2*r;
//    while(x<=y){
//        drawCircle(x,y);
//        x++;
//        if(d<0){
//            d = d + 4*x + 6;
//        }
//        else{
//            y--;
//            d = d + 4*(x-y) + 10;
//        }
//        drawCircle(x,y);
//
//    }
//
//}
//
//void mouse(int button, int state, int x, int y){
//
//
//    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && point1_done == 0){
//        xc = x - 250;
//        yc = 250 - y;
//        point1_done = 1;
//    }
//    else if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && point1_done){
//        xp = x - 250;
//        yp = 250 - y;
//
//        float exp = (yp-yc)*(yp-yc)+(xp-xc)*(xp-xc);
//        r = sqrt(exp);
//        circle_bres();
//        point1_done = 0;
//        glFlush();
//    }
//}
//
//void myInit(){
//    glClearColor(1,1,1,1);
//    glClear(GL_COLOR_BUFFER_BIT);
//    gluOrtho2D(-250,250,-250,250);
//}
//
//void display(){
//
//}
//
//
//int main(int argc, char ** argv){
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(0,0);
//    glutCreateWindow("Bresenham Circle");
//    myInit();
//    glutMouseFunc(mouse);
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//
//
//}
