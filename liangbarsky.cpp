
//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//using namespace std;
//struct line_segment {
//
//  double x1,x2,y1,y2;
//};
//
//line_segment ls[10];
//double xmin, xmax, ymin, ymax, xvmin, xvmax, yvmin, yvmax;
//int n;
//double p[4], q[4], r[4];
//void myinit()
//{
//    glClearColor(1, 1, 1, 1);
//    glColor3f(1, 0, 0);
//    glPointSize(1.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(0, 500, 0, 500);
//}
//
//void liang_barsky(double x0, double y0, double x1, double y1){
//    double dx = x1 - x0;
//    double dy = y1 - y0;
//    double u1=0.0, u2 = 1.0;
//    p[0] = -dx; p[1] = dx; p[2] = -dy; p[3] = dy;
//    q[0] = x0 - xmin; q[1] = xmax - x0; q[2] = y0-ymin; q[3] = ymax-y0;
//    cout << p[0] << " "<< p[1] << " "<<p[2] << " "<<p[3] << "\n";
//    cout << q[0] << " "<< q[1] << " "<<q[2] << " "<<q[3] << "\n";
//    for(int i=0;i<4;i++){
//        if(p[i]) r[i] = q[i]/p[i];
//        if(p[i]==0){
//            if(q[i]<0) return;
//        }
//        else if(p[i]<0){
//            if(r[i]>u1) u1 = r[i];
////            if(r[i]>u2) return;
//        }
//        else{
//            if(r[i]<u2) u2 = r[i];
////            if(r[i]<u1) return;
//        }
//    }
//    if(u2!=1){
//        cout << "Initial x1 y1\n";
//        cout << x1<< " "<< y1<< "\n";
//        x1 = x0+u2*dx;
//        y1 = y0+u2*dy;
//        cout << "Final x1 y1\n";
//        cout << x1<< " "<< y1<< "\n";
//    }
//    if(u1!=0){
//        cout << "Initial x0 y0\n";
//        cout << x0<< " "<< y0<< "\n";
//        x0 = x0+u1*dx;
//        y0 = y0+u1*dy;
//        cout << "Final x0 y0\n";
//        cout << x0<< " "<< y0<< "\n";
//    }
//
//    double sx = (xmax - xmin)/(xvmax - xvmin);
//    double sy = (ymax - ymin)/(yvmax - yvmin);
//    double vx0 = xvmin + (x0 - xmin)/sx;
//    double vy0 = yvmin + (y0 - ymin)/sy;
//    double vx1 = xvmin + (x1 - xmin)/sx;
//    double vy1 = yvmin + (y1 - ymin)/sy;
//
//    glColor3f(0,1,0);
//    glBegin(GL_LINE_LOOP);
//    glVertex2f(xvmin, yvmin);
//    glVertex2f(xvmax, yvmin);
//    glVertex2f(xvmax, yvmax);
//    glVertex2f(xvmin, yvmax);
//
//    glEnd();
//
//    glBegin(GL_LINES);
//
//    glVertex2f(vx0,vy0);
//    glVertex2f(vx1,vy1);
//    glEnd();
//}
//
//void display(){
//
//  glClear(GL_COLOR_BUFFER_BIT);
//  glColor3f(1,0,0);
//  glBegin(GL_LINE_LOOP);
//  glVertex2f(xmin,ymin);
//  glVertex2f(xmax,ymin);
//  glVertex2f(xmax,ymax);
//  glVertex2f(xmin,ymax);
//  glEnd();
//  for(int i=0;i<n;i++){
//      glBegin(GL_LINES);
//
//      glVertex2f(ls[i].x1,ls[i].y1);
//      glVertex2f(ls[i].x2,ls[i].y2);
//      glEnd();
//
//  }
//  for(int i=0;i<n;i++)
//          liang_barsky(ls[i].x1,ls[i].y1, ls[i].x2,ls[i].y2);
//  glFlush();
//
//}
//
//int main(int argc, char **argv){
////  cout << "Enter window coordinates\n";
////  cin >> xmin >> ymin >> xmax >> ymax;
////  cout << "Enter viewport coordinates\n";
////  cin >> xvmin >> yvmin >> xvmax >> yvmax ;
//    xmin = 50;
//    ymin = 50;
//    xmax = 200;
//    ymax = 200;
//
//    xvmin = 350;
//    yvmin = 350;
//    yvmax = 490;
//    xvmax = 490;
////  cout << "Enter the number of line segments, max 10\n";
////  cin >> n;
////  cout << "Enter endpoints of all lines x1 y1 x2 y2\n";
////  for(int i=0;i<n;i++){
////      cin>>ls[i].x1>>ls[i].y1>>ls[i].x2>>ls[i].y2;
////  }
//    n = 1;
//    ls[0].x1 = 45;
//    ls[0].y1 = 50;
//    ls[0].x2 = 45;
//    ls[0].y2 = 70;
//  glutInit(&argc, argv);
//  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//  glutInitWindowSize(500, 500);
//  glutCreateWindow("liang barsky");
//  glutDisplayFunc(display);
//    myinit();
//  glutMainLoop();
//  return 0;
//}
//
//
//
