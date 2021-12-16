//
//  bresenhamLine.cpp
//  Lab
//
//  Created by Nikitha Srikanth on 14/12/21.
//


//
//  main.cpp
//  Lab
//
//  Created by Nikitha Srikanth on 13/12/21.
//

//#include <iostream>
//#include <GLUT/GLUT.h>
//#include <openGL/openGL.h>
//
//int flag = 0;
//int x1,x2,y1,y2,p,i;

//void drawPixel(int x, int y){
//    glColor3f(1,0,0);
//    glBegin(GL_POINTS);
//    glVertex2i(x,y);
//    glEnd();
//    glFlush();
//}
//
//void drawLine(){
//    int dx, dy, xinc, yinc, inc1, inc2,x,y;
//    dx = x2-x1;
//    dy = y2-y1;
//    xinc = 1;
//    x = x1;
//    y = y1;
//    if(dx<0) {
//        dx = -dx;
//        xinc = -1;
//
//    }
//    yinc = 1;
//    if(dy<0){
//        dy = -dy;
//        yinc = -1;
//    }
//    if(dx>dy){
//        drawPixel(x, y);
//        p = 2*dy - dx;
//        inc1 = 2*(dy - dx);
//        inc2 = 2*dy;
//        for(i=0;i<dx;i++){
//            if(p>0){
//                p+=inc1;
//                y+=yinc;
//            }
//            else{
//                p+=inc2;
//            }
//            x+=xinc;
//            drawPixel(x,y);
//        }
//    }
//    else{
//        drawPixel(x, y);
//        p = 2*dx - dy;
//        inc1 = 2*(dx - dy);
//        inc2 = 2*dx;
//        for(i=0;i<dy;i++){
//            if(p>0){
//                x+=xinc;
//                p+=inc1;
//            }
//            else{
//                p+=inc2;
//            }
//            y+=yinc;
//            drawPixel(x,y);
//        }
//    }
//    glFlush();
//}
//
//void mouse(int button, int state, int x, int y){
//    switch(button){
//        case GLUT_LEFT_BUTTON:
//            if(state == GLUT_DOWN){
//                if(flag == 0){
//                    x1 = x - 250;
//
//                    y1 = 250 - y;
//                    flag++;
//                }
//                else{
//                    x2 = x - 250;
//                    y2 = 250 - y;
//                    flag = 0;
//                    drawLine();
//                }
//            }
//            break;
//    }
//
//}
//void display()
//{}
//void myInit(){
//    glClear(GL_COLOR_BUFFER_BIT);
//    glClearColor(1,1,1,1);
//    gluOrtho2D(-250, 250, -250, 250);
//}
//
//int main(int argc, char * argv[]) {
//    // insert code here...
////    std::cout << "Hello, World!\n";
//    glutInit(&argc,argv);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("Bresenham Line");
//    myInit();
//
//    glutMouseFunc(mouse);
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
