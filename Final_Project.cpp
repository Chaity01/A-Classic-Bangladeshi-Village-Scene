#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
#include<stdio.h>

float cx = 0,cl1x=0,cb1x=0,cl2x=0,cl3x=0,cl4x=0, cb2x=0,angle = 0,angle2=0;
float cb3x=0;
void init()
{
    glClearColor(0, 1, 0, 0);
    glOrtho(-60, +60, -60, +60, -60, +60);
}

void points()
{
    glBegin(GL_POINTS);
    glVertex2d(5.0, -3.0);
    glVertex2d(5.0, 3.0);
    glVertex2d(-5.0, 3.0);
    glVertex2d(-5.0,-3.0);
    glEnd();
}

void lines()
{
    glBegin(GL_LINES);
    glVertex2d(7, -1);
    glVertex2d(0, -1);

    glVertex2d(0, -1);
    glVertex2d(0, 1);

    glVertex2d(0, 1);
    glVertex2d(-7, 1);
    glEnd();
}

void triangle()
{
    glPushMatrix();

    glScaled(0.5, 0.5, 1);
    glTranslated(-6, -3.5, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2d(4, 0);
    glVertex2d(0, 2);
    glVertex2d(0, 0);
    glEnd();
    glPopMatrix();
}

void rectangle()
{


    glPushMatrix();

    glScaled(0.5, 0.5, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2d(5, 3);
    glVertex2d(5, -3);
    glVertex2d(-5, -3);
    glVertex2d(-5, 3);
    glEnd();
    glPopMatrix();
}

//sky
void glrectangle1()
{
    glBegin(GL_QUADS);
    glColor3f(0.05, 0.30, 0.54);
    glVertex2d(60, 25);
    glColor3f(0.39, 0.58, 0.54);
    glVertex2d(60, 60);
    glColor3f(0.39, 0.58, 0.54);
    glVertex2d(-60, 60);
    glColor3f(0.05, 0.30, 0.54);
    glVertex2d(-60, 25);
    glEnd();
}
//river
void glrectangle2()
{
    glBegin(GL_QUADS);
    glColor3f(0.14, 0.6, 1);
    glVertex2d(60, 22.7);
    glColor3f(0.77, 0.88, 0.88);
    glVertex2d(60, 0);
    glColor3f(0, 0.77, 0.80);
    glVertex2d(-60, 0);
    glColor3f(0.41, 0.34, 0.80);
    glVertex2d(-60, 22.7);
    glEnd();
}
//tree1
void glrectangle3()
{
    glBegin(GL_QUADS);
    glColor3f(0.54, 0.27, 0.08);
    glVertex2d(-50, 0);
    glVertex2d(-45, 0);
    glVertex2d(-45, 15);
    glVertex2d(-50, 15);
    glEnd();
}
//tree1
void gltriangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0, 0.54, 0);
    glVertex2d(-55, 12);
    glVertex2d(-40, 12);
    glColor3f(0.63, 0.80, 0.35);
    glVertex2d(-47.5, 27);
    glEnd();
}

//tree2
void glrectangle4()
{
    glBegin(GL_QUADS);
    glColor3f(0.54, 0.27, 0.08);
    glVertex2d(-40, 0);
    glVertex2d(-35, 0);
    glVertex2d(-35, 20);
    glVertex2d(-40, 20);
    glEnd();
}
//tree2
void gltriangle4()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.27, 0.54, 0);
    glVertex2d(-45, 17);
    glVertex2d(-30, 17);
    glColor3f(0.79, 1,0);
    glVertex2d(-37.5, 32);
    glEnd();
}
//House1
//body
void glrectangle5()
{
    glBegin(GL_QUADS);
    glColor3f(0.69, 0.13, 0.13);
    glVertex2d(-13, -5);
    glVertex2d(-13, 10);
    glVertex2d(-30, 10);
    glVertex2d(-30, -5);
    glEnd();
}
//ceil
void glrectangle6()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0.27, 0);
    glVertex2d(-33, 10);
    glVertex2d(-10, 10);
    glVertex2d(-12, 20);
    glVertex2d(-31, 20);
    glEnd();
}
void glrectangle7()
{
    glBegin(GL_QUADS);
    glColor3f(.5, 0.3, 0);
    glVertex2d(-29, -5.5);
    glVertex2d(-15, -5.5);
    glVertex2d(-15, -8);
    glVertex2d(-29, -8);

    glEnd();
}

//modern house
void glrectangle8()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0.54, 0);
    glVertex2d(-50,10);
    glVertex2d(-30,10);
    glVertex2d(-25,-1);
    glVertex2d(-43.7,-3.5);

    glEnd();
}
void glrectangle9()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0.64, 0);
    glVertex2d(-43.7,-3.5);
    glVertex2d(-25,-1);
    glVertex2d(-18,-4);
    glVertex2d(-36,-7);

    glEnd();
}
void glrectangle10()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0.54, 0);
    glVertex2d(-50,10);
    glVertex2d(-48,8);
    glVertex2d(-53,-5);
    glVertex2d(-55,-3);

    glEnd();
}
void glrectangle11()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2d(-53,-5);
    glVertex2d(-43.7,-3.5);
    glVertex2d(-43.7,-20);
    glVertex2d(-53,-15);


    glEnd();
}

void gltriangle12()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2d(-53,-5);
    glVertex2d(-48,8);
    glVertex2d(-43.7,-3.5);



    glEnd();
}

void glrectangle13()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2d(-43.7,-3.5);
    glVertex2d(-43.7,-20);
    glVertex2d(-25.5,-13);
    glVertex2d(-25.5,0);


    glEnd();
}
//floor
void glrectangle14()
{
    glBegin(GL_QUADS);
    glColor3f(0.82, 0.41, 0.11);
    glVertex2d(-43.7,-20);
    glVertex2d(-25.5,-13);
    glVertex2d(-18,-14);
    glVertex2d(-37,-22);


    glEnd();
}

void glrectangle15()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(-36,-7);
    glVertex2d(-35.5,-7);
    glVertex2d(-35.5,-22);
    glVertex2d(-36,-22);


    glEnd();
}
void glrectangle16()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(-18,-3.75);
    glVertex2d(-18.5,-3.75);
    glVertex2d(-18.5,-14);
    glVertex2d(-18,-14);


    glEnd();
}
//door1
void glrectangle17()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(-50,-3);
    glVertex2d(-46.5,-4);
    glVertex2d(-46.5,-18);
    glVertex2d(-50,-16);


    glEnd();
}
//door2
void glrectangle18()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(-32,-6.1);
    glVertex2d(-28.5,-5.9);
    glVertex2d(-28.5,-14.7);
    glVertex2d(-32,-15.3);


    glEnd();
}
//boat1
void glrectangle19()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(40,6);
    glVertex2d(55,6);
    glVertex2d(52,3);
    glVertex2d(43,3);


    glEnd();
}
//boat1 ceil
void glrectangle20()
{
    glBegin(GL_QUADS);
    glColor3f(0.93, 0.46,0);
    glVertex2d(43,8);
    glVertex2d(52,8);
    glVertex2d(52,6);
    glVertex2d(43,6);


    glEnd();
}
//boat1
void glrectangle21()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0,0);
    glVertex2d(44,8.5);
    glVertex2d(51,8.5);
    glVertex2d(52,16.5);
    glVertex2d(45,16.5);


    glEnd();
}
void glrectangle22()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(47.3,17.5);
    glVertex2d(47.7,17.5);
    glVertex2d(47.7,8);
    glVertex2d(47.3,8);


    glEnd();
}
//boat2
void glrectangle23()
{
    glBegin(GL_QUADS);
    glColor3f(0, 0,0);
    glVertex2d(-15,13);
    glVertex2d(0,13);
    glVertex2d(-3,10);
    glVertex2d(-12,10);


    glEnd();
}
//boat2 ceil
void glrectangle24()
{
    glBegin(GL_QUADS);
    glColor3f(0.93, 0.46,0);
    glVertex2d(-12,16);
    glVertex2d(-3,16);
    glVertex2d(-3,13);
    glVertex2d(-12,13);


    glEnd();
}
//road
void glrectangle25()
{
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.25,0.25);
    glVertex2d(-60,0);
    glVertex2d(60,0);
    glVertex2d(60,-15);
    glVertex2d(-60,-15);


    glEnd();
}
//car
void glrectangle26()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0,0);
    glVertex2d(30,-5);
    glVertex2d(50,-5);
    glVertex2d(47,-10);
    glVertex2d(27,-10);


    glEnd();
}
//human
void glrectangle27()
{
    glBegin(GL_QUADS);
    glColor3f(.54, 0.35, 0.16);
    glVertex2d(22.25,1.5);
    glVertex2d(24,1.5);
    glVertex2d(24,-1);
    glVertex2d(22.25,-1);


    glEnd();
}
//human dress1
void glrectangle28()
{
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2d(21.25,-0.5);
    glVertex2d(25.25,-0.5);
    glVertex2d(25.25,-6);
    glVertex2d(21.25,-6);


    glEnd();
}
//human dress2
void glrectangle29()
{
    glBegin(GL_QUADS);
    glColor3f(1, 1, 0);
    glVertex2d(22,-6);
    glVertex2d(24.75,-6);
    glVertex2d(24.75,-9);
    glVertex2d(22,-9);


    glEnd();
}
//human hat
void gltriangle30()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 0);
    glVertex2d(20,3.5);
    glVertex2d(26,3.5);
    glVertex2d(23,6.5);

    glEnd();
}
//human hand
void glrectangle31()
{
    glBegin(GL_QUADS);
    glColor3f(.54, 0.35, 0.16);
    glVertex2d(25.25,-2.5);
    glVertex2d(26.75,-2.5);
    glVertex2d(26.75,-4);
    glVertex2d(25.25,-4);


    glEnd();
}
//object
void glrectangle32()
{
    glBegin(GL_QUADS);
    glColor3f(.5, 0.3, 0);
    glVertex2d(34,-2.5);
    glVertex2d(38,-2.5);
    glVertex2d(38,-6);
    glVertex2d(34,-6);


    glEnd();
}
//khor cover
void glrectangle33()
{
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2d(-60,-23);
    glVertex2d(-42,-23);
    glVertex2d(-42,-55);
    glVertex2d(-60,-55);


    glEnd();
}
void glrectangle34()
{
    glBegin(GL_QUADS);
    glColor3f(.5, 0.3, 0);
    glVertex2d(47,17.25);
    glVertex2d(47.7,17.25);
    glVertex2d(47.7,8.5);
    glVertex2d(47,8.5);


    glEnd();
}
//floor
void glrectangle35()
{
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2d(-60,-40);
    glColor3f(0, 1, 0);
    glVertex2d(60,-40);
    glColor3f(0.27, 0.54, 0);
    glVertex2d(60,-60);
    glColor3f(0.27, 0.54, 0);
    glVertex2d(-60,-60);


    glEnd();
}

//sun
void circle(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));
    }
    glEnd();
}

void circle1(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(0.76, 0.80, 0.75);
    glBegin(GL_POLYGON);
    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));
    }
    glEnd();
}
void circle2(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));
    }
    glEnd();
}
//human head
void circle3(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(.54, 0.35, 0.16);
    glBegin(GL_POLYGON);
    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));
    }
    glEnd();
}
//Cow Food
void circle4(float r1, float r2)
{
    int i = 0;
    float angle = 0.0;
    glColor3f(1, 0.64, 0);
    glBegin(GL_POLYGON);
    for(i = 0; i <= 500; i++)
    {
        angle = (360 * i) / 500;
        glVertex2d(r1*cos(angle), r2*sin(angle));
    }
    glEnd();
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    angle = angle + 0.1;
    cl1x += 0.01;
    if(cl1x >=90.5)
        cl1x = -33.5;
    glutPostRedisplay();

    cl2x += 0.012;
    if(cl2x >=60.5)
        cl2x = -63.5;
    glutPostRedisplay();

    cl3x += 0.015;
    if(cl3x >=50.5)
        cl3x = -83.5;
    glutPostRedisplay();

    cl4x+=0.05;
    if(cl4x>=105)
        cl4x=-24;
    glutPostRedisplay();

    cb1x -= 0.08;
    if(cb1x < -120.5)
        cb1x = 19.5;
    glutPostRedisplay();

    cb2x += 0.07;
    if(cb2x > 75.5)
        cb2x = -58.5;
    glutPostRedisplay();
    cb3x-= 0.05;
    if(cb3x<-85)
        cb3x=50;
    glutPostRedisplay();


    glrectangle1();

//Sun
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-10,32,0);
    circle(6.5,6);
    glPopMatrix();


//cloud1
    glPushMatrix();
    glTranslated(cl1x,0,0);
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-30,30,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-25,30,0);
    circle1(3,2.75);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-27.5,34,0);
    circle1(3,2.75);
    glPopMatrix();
    glPopMatrix();


//cloud2
    glPushMatrix();
    glTranslated(cl2x,0,0);
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(0,38,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-5,38,0);
    circle1(3,2.75);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-2.5,42,0);
    circle1(3,2.75);
    glPopMatrix();
    glPopMatrix();

//cloud3
    glPushMatrix();
    glTranslated(cl3x,0,0);
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(21,35,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(26,35,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(23.5,38,0);
    circle1(3,3);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

//cloud 4
    glPushMatrix();
    glTranslated(cl4x,0,0);

    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-41,35,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-46,35,0);
    circle1(3,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-43.5,38,0);
    circle1(3,3);
    glPopMatrix();
    glPopMatrix();


//sky tree
//1st
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-60,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-55.5,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-49,25,0);
    circle2(4.5,8);
    glPopMatrix();
//2nd
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-42.2,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-37.5,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-32.7,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-26,25,0);
    circle2(4.5,8);
    glPopMatrix();
//3rd
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-19.3,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-14.4,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-7.8,25,0);
    circle2(4.5,8);
    glPopMatrix();

//4th
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-1,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(3.7,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(10.5,25,0);
    circle2(4.5,8);
    glPopMatrix();
//5th
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(17,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(22,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(29,25,0);
    circle2(4.5,8);
    glPopMatrix();
//6th
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(35.9,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(40.8,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(47.7,25,0);
    circle2(4.5,8);
    glPopMatrix();
//7th
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(54,25,0);
    circle2(2.5,3);
    glPopMatrix();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(59,25,0);
    circle2(2.5,3);
    glPopMatrix();
//river
    glrectangle2();

//boat1
    glPushMatrix();
    glTranslated(cb2x,0,0);
    glrectangle23();
    glrectangle24();
    glPopMatrix();

//boat2
    glPushMatrix();
    glTranslated(cb1x,0,0);
    glrectangle19();
    glrectangle22();
    glrectangle20();
    glrectangle21();
    glPopMatrix();
//boat 3
    glPushMatrix();
    glTranslated(-30,15,0);
    glScaled(1,1,1);
    glPushMatrix();
    glTranslated(cb3x,0,0);

    glrectangle19();
    glrectangle22();
    glrectangle20();
    glrectangle21();
    glPopMatrix();

    glPopMatrix();
//road;
    glrectangle25();
//vichele

    glPushMatrix();
    glTranslated(cx,0,0);
    glPushMatrix();

    glTranslated(32,-11,0);
    glScaled(1,1,1);
    glRotated(angle2,0,0,-1);
    circle1(2,2);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(0,0);
    glVertex2d(0,2);
    glVertex2d(0,0);
    glVertex2d(2,0);
    glVertex2d(0,0);
    glVertex2d(2*cos(60),2*sin(60));
    glEnd();
    glPopMatrix();
    glPushMatrix();


    glTranslated(43,-11,0);
    glRotated(angle2,0,0,-1);
    glScaled(1,1,1);
    circle1(2,2);

    glColor3f(0,0,0);

    glBegin(GL_LINES);
    glVertex2d(0,0);
    glVertex2d(0,2);
    glVertex2d(0,0);
    glVertex2d(2,0);
    glVertex2d(0,0);
    glVertex2d(2*cos(60),2*sin(60));
    glEnd();

    glPopMatrix();
    glrectangle26();
//object

    glrectangle32();
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(2,3,0);
    glrectangle32();
    glPopMatrix();

    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(4.7,-0.5,0);
    glrectangle32();
    glPopMatrix();


//human
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(2.5,-3,0);

    glPushMatrix();

    glScaled(1,1,1);
    glTranslated(23,3,0);
    circle3(2,2);
    glPopMatrix();
    glrectangle27();
    glrectangle28();
    glrectangle29();
    glrectangle31();
    gltriangle30();
    glPopMatrix();

    glPopMatrix();


//tree1
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(12,-4.5,0);
    glrectangle3();
    gltriangle();

//tree2

    glrectangle4();
    gltriangle4();
    glPopMatrix();


//house1
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(12,-6,1);
    glrectangle13();
    glrectangle14();
    gltriangle12();
    glrectangle8();//celing
    glrectangle9();//celing
    glrectangle10();//celing
    glrectangle11();
    glrectangle15();//pilar1
    glrectangle16();//pilar2
    glrectangle17();//door1
    glrectangle18();//door2
    glPopMatrix();

//khor
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-97.5,-18,1);
    glrectangle34();
    glPopMatrix();

    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-50,-27,0);
    circle4(6,25);
    glPopMatrix();
    glrectangle33();

//khor lower part
    glPushMatrix();
    glScaled(1,1,1);
    glTranslated(-28,-17,1);

    glrectangle7();
    glPopMatrix();

//floor
    glrectangle35();




    glFlush();





}

void carMoveForward()
{
    angle2 += .75;
    cx += 0.1;
    if(cx >=40.5)
        cx = -110.5;
    glutPostRedisplay();
}

void carMoveBackward()
{
    angle2  -= 0.75;
    cx -= 0.1;
    if(cx < -110.5)
        cx = 40.5;
    glutPostRedisplay();
}


void specialKey(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:
        glutIdleFunc(carMoveForward);
        break;

    case GLUT_KEY_LEFT:
        glutIdleFunc(carMoveBackward);
        break;

    case GLUT_KEY_DOWN:    // car wiil stop
        glutIdleFunc(NULL);
        break;

    case GLUT_KEY_UP:

        break;



    default:
        break;
    }
}

int main()
{
    //glutInit(&argc, argv);
    int width = glutGet(GLUT_SCREEN_WIDTH);
    int height = glutGet(GLUT_SCREEN_HEIGHT);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Village Scenery");
    printf(" 1. Jannatul Ferdous Chaity (CSE 072 08185)\n 2. Md Iftakhar Uddin (CSE 072 08200)");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(specialKey);
    glutMainLoop();
    return 0;
}
