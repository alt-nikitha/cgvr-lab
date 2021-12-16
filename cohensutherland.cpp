
//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//using namespace std;
//#define outcode int
//#define true 1
//#define false 0
//#define TOP 4
//#define BOTTOM 2
//#define LEFT 8
//#define RIGHT 1
//
//struct line_segment {
//
//  int x1,x2,y1,y2;
//};
//
//line_segment ls[10];
//double xmin, xmax, ymin, ymax, xvmin, xvmax, yvmin, yvmax;
//int n;
//outcode compute_outcode(double x, double y){
//  outcode code = 0;
//  if(x<xmin){
//      code|=LEFT;
//  }
//  if(x>xmax){
//      code|=RIGHT;
//  }
//  if(y<ymin){
//      code|=BOTTOM;
//  }
//  if(y>ymax){
//      code|=TOP;
//  }
//
//  return code;
//}
//
//void cohen_sutherland(double x0,double y0, double x1, double y1){
//  outcode outcode0 = compute_outcode(x0, y0);
//  outcode outcode1 = compute_outcode(x1, y1);
//  double x,y;
//  bool accept=false, done = false;
//  do {
//      if(!(outcode0 | outcode1)){
//          accept = true;
//          done = true;
//      }
//      else if(outcode0 & outcode1){
//          done = true;
//      }
//      else{
//          outcode outcodeout = outcode0? outcode0: outcode1;
//          if(outcodeout & TOP){
//              y = ymax;
//              x = x0 + (x1-x0)/(y1-y0)*(y-y0);
//
//          }
//          else if(outcodeout & LEFT){
//              x = xmin;
//              y = y0 + (y1-y0)/(x1-x0)*(x-x0);
//          }
//          else if(outcodeout & BOTTOM){
//              y = ymin;
//              x = x0 + (x1-x0)/(y1-y0)*(y-y0);
//          }
//          else{
//              x = xmax;
//              y = y0 + (y1-y0)/(x1-x0)*(x-x0);
//          }
//
//          if(outcodeout == outcode0){
//              x0 = x;
//              y0 = y;
//              outcode0 = compute_outcode(x0, y0);
//
//          }
//          if(outcodeout == outcode1){
//              x1 = x;
//              y1 = y;
//              outcode1 = compute_outcode(x1, y1);
//
//          }
//
//      }
//  }while(!done);
//
//  if(accept){
//      double sx = (xmax - xmin)/(xvmax - xvmin);
//      double sy = (ymax - ymin)/(yvmax - yvmin);
//      double vx0 = xvmin + (x0 - xmin)/sx;
//      double vy0 = yvmin + (y0 - ymin)/sy;
//      double vx1 = xvmin + (x1 - xmin)/sx;
//      double vy1 = yvmin + (y1 - ymin)/sy;
//      cout << "old x0 y0 x1 y1\n";
//      cout << x0<<" "<< y0<<" "<< x1<<" "<<y1;
//      cout << "New x0 y0 x1 y1\n";
//      cout << vx0<<" "<< vy0<<" "<< vx1<<" "<<vy1;
//      glColor3f(0,1,0);
//      glBegin(GL_LINE_LOOP);
//      glVertex2f(xvmin, yvmin);
//      glVertex2f(xvmax, yvmin);
//      glVertex2f(xvmax, yvmax);
//      glVertex2f(xvmin, yvmax);
//
//      glEnd();
//
//      glBegin(GL_LINES);
//
//      glVertex2f(vx0,vy0);
//      glVertex2f(vx1,vy1);
//      glEnd();
//
//
//
//  }
//}
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
//          cohen_sutherland(ls[i].x1,ls[i].y1, ls[i].x2,ls[i].y2);
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
//    ls[0].x1 = 25;
//    ls[0].y1 = 190;
//    ls[0].x2 = 205;
//    ls[0].y2 = 15;
//  glutInit(&argc, argv);
//  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//  glutInitWindowSize(500, 500);
//  glutCreateWindow("cohen sutherland");
//  glutDisplayFunc(display);
//    myinit();
//  glutMainLoop();
//  return 0;
//}
//
//
//
//
