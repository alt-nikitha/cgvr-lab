

//#include <stdio.h>
//#include <iostream>
//#include <openGL/openGL.h>
//#include <GLUT/GLUT.h>
//#define MAX_POINTS 20
//using namespace std;
//int polygon_points[MAX_POINTS][2],orig_poly_points[MAX_POINTS][2], orig_poly_size, clipping_window[4][2], poly_size;
//void myInit(){
//    glClearColor(1,1,1,1);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 500.0, 0.0, 500.0, 0.0, 500.0);
//    glClear(GL_COLOR_BUFFER_BIT);
//
//}
//int x_intersect(int x1, int y1, int x2, int y2,
//    int x3, int y3, int x4, int y4)
//{
//    int num = (x1 * y2 - y1 * x2) * (x3 - x4) -
//        (x1 - x2) * (x3 * y4 - y3 * x4);
//    int den = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
//    return num / den;
//}
//
//// Returns y-value of point of intersectipn of
//// two lines
//int y_intersect(int x1, int y1, int x2, int y2,
//    int x3, int y3, int x4, int y4)
//{
//    int num = (x1 * y2 - y1 * x2) * (y3 - y4) -
//        (y1 - y2) * (x3 * y4 - y3 * x4);
//    int den = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
//    return num / den;
//}
//
//void clip(int xc1,int yc1,int xc2,int yc2){
//    int new_polygon_points[MAX_POINTS][2], new_poly_size = 0;
//
//    for(int i=0;i<poly_size;i++){
//        int k = (i+1)%poly_size;
//        int px1 = polygon_points[i][0], py1 = polygon_points[i][1], px2 = polygon_points[k][0], py2 = polygon_points[k][1];
//        int i_pos = (xc2-xc1)*(py1-yc1)-(yc2-yc1)*(px1-xc1);
//        int k_pos = (xc2-xc1)*(py2-yc1)-(yc2-yc1)*(px2-xc1);
//
//        if(i_pos>=0 && k_pos>=0){
//            new_polygon_points[new_poly_size][0] = px2;
//            new_polygon_points[new_poly_size][1] = py2;
//            new_poly_size++;
//        }
//        else if(i_pos<0 && k_pos>=0){
//            new_polygon_points[new_poly_size][0] = x_intersect(xc1,yc1,xc2,yc2,px1,py1,px2,py2);
//            new_polygon_points[new_poly_size][1] = y_intersect(xc1,yc1,xc2,yc2,px1,py1,px2,py2);
//            new_poly_size++;
//            new_polygon_points[new_poly_size][0] = px2;
//            new_polygon_points[new_poly_size][1] = py2;
//            new_poly_size++;
//        }
//        else if(i_pos>=0 && k_pos<0){
//            new_polygon_points[new_poly_size][0] = x_intersect(xc1,yc1,xc2,yc2,px1,py1,px2,py2);
//            new_polygon_points[new_poly_size][1] = y_intersect(xc1,yc1,xc2,yc2,px1,py1,px2,py2);
//            new_poly_size++;
//        }
//        else{
//            
//        }
//
//    }
//    poly_size = new_poly_size;
//
//    for(int i=0;i<poly_size;i++){
//        polygon_points[i][0] = new_polygon_points[i][0];
//        polygon_points[i][1] = new_polygon_points[i][1];
//    }
//
//
//}
//void display(){
//    myInit();
//    glColor3f(1,0,0);
//    glBegin(GL_POLYGON);
//    for(int i=0;i<4;i++){
//
//        glVertex2i(clipping_window[i][0], clipping_window[i][1]);
//    }
//    glEnd();
//    
//    
//    glColor3f(0,1,0);
//    glBegin(GL_POLYGON);
//    for(int i=0;i<orig_poly_size;i++){
//        glVertex2i(orig_poly_points[i][0],orig_poly_points[i][1]);
//    }
//    glEnd();
//    
//    
//    for(int i=0;i<4;i++){
//        int k = (i+1)%4;
//        clip(clipping_window[i][0],clipping_window[i][1],clipping_window[k][0],clipping_window[k][1]);
//    }
//    for(int i=0;i<poly_size;i++){
//        cout << polygon_points[i][0]<<" "<<polygon_points[i][1]<<"\n";
//        }
//    
//    glColor3f(0,0,1);
//    glBegin(GL_POLYGON);
//    for(int i=0;i<poly_size;i++){
//        glVertex2i(polygon_points[i][0],polygon_points[i][1]);
//    }
//    glEnd();
//    glFlush();
//
//
//}
//int main(int argc, char **argv){
//    clipping_window[0][0] = 50;
//    clipping_window[0][1] = 50;
//    clipping_window[1][0] = 200;
//    clipping_window[1][1] = 50;
//    clipping_window[2][0] = 200;
//    clipping_window[2][1] = 200;
//    clipping_window[3][0] = 50;
//    clipping_window[3][1] = 200;
//
//    orig_poly_size = poly_size = 4;
//    orig_poly_points[0][0] = 30;
//    orig_poly_points[0][1] = 125;
//    orig_poly_points[1][0] = 125;
//    orig_poly_points[1][1] = 230;
//    orig_poly_points[2][0] = 230;
//    orig_poly_points[2][1] = 125;
//    orig_poly_points[3][0] = 125;
//    orig_poly_points[3][1] = 30;
//
//    for(int i=0;i<orig_poly_size;i++){
//        polygon_points[i][0] = orig_poly_points[i][0];
//        polygon_points[i][1] = orig_poly_points[i][1];
//    }
//
//
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//    glutInitWindowSize(500,500);
//    glutCreateWindow("polygon clipping");
//    glutDisplayFunc(display);
//    
//    glutMainLoop();
//    return 0;
//}
//
//
