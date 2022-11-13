#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416
int windowWidth=1200; int windowHeight=700;
float x=0;
bool xbus=false;

float y=0;
bool ycloud=false;

float a=0;
bool aship=false;

float b=0;
bool bsun=false;


  void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void sun(){
glPushMatrix();//sun
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    drawFilledCircle(24,40+b,2.0);
   glPopMatrix();

}

void clouds(){
   glPushMatrix();//cloud1
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(6+y,45,0.5);
   glPopMatrix();

    glPushMatrix();//cloud1
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(5+y,46,0.7);
   glPopMatrix();

    glPushMatrix();//cloud1
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(6+y,46,0.7);
   glPopMatrix();

    glPushMatrix();//cloud1
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(5+y,45,0.8);
   glPopMatrix();

    glPushMatrix();//cloud2
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(19+y,44,0.8);
   glPopMatrix();

    glPushMatrix();//cloud2
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(17+y,45,0.8);
   glPopMatrix();

    glPushMatrix();//cloud2
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(18+y,45,0.8);
   glPopMatrix();

    glPushMatrix();//cloud2
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(18+y,44,0.9);
   glPopMatrix();

   glPushMatrix();//cloud3
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(28-y,45,0.8);
   glPopMatrix();

    glPushMatrix();//cloud3
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(26-y,46,0.8);
   glPopMatrix();

    glPushMatrix();//cloud3
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(27-y,46,0.8);
   glPopMatrix();

    glPushMatrix();//cloud3
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(27-y,45,0.9);
   glPopMatrix();

   glPushMatrix();//cloud3
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(28-y,46,0.7);
   glPopMatrix();

    glPushMatrix();//cloud4
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(39-y,44,0.8);
   glPopMatrix();

    glPushMatrix();//cloud4
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(40-y,44,0.9);
   glPopMatrix();

   glPushMatrix();//cloud4
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(40-y,45,0.9);
   glPopMatrix();


   glPushMatrix();//cloud4
    glColor3f(1.0f, 1.0f, 1.0f);
    drawFilledCircle(41-y,44,0.9);
   glPopMatrix();


}

void hill(){
  glBegin(GL_TRIANGLES);
    glColor3ub(107,142,35);//hill
    glVertex2f(1.0,38.0);
    glVertex2f(5.0,38.0);
    glVertex2f(2.3,41.0);
    glEnd();
    glPopMatrix();

}

void tree_body(){

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);//tree body
     glVertex2f(6.0,41.5);
    glVertex2f(6.0,38.0);
    glVertex2f(6.2,38.0);
    glVertex2f(6.2,41.5);
    glEnd();
    glPopMatrix();

}
void tree_top1(){
     glBegin(GL_TRIANGLES);
     glColor3ub(50,205,55);//tree top1
    glVertex2f(5.6,42.0);
     glColor3ub(173,255,47);
    glVertex2f(6.6,42.0);
    glVertex2f(6.0,43.0);
    glEnd();
    glPopMatrix();
}

void tree_top2(){
    glBegin(GL_QUADS);
   glColor3ub(50,205,55);//tree top2
     glVertex2f(5.7,42.0);
     glColor3ub(173,255,47);
    glVertex2f(5.4,41.4);
    glVertex2f(6.7,41.4);
    glVertex2f(6.5,42.0);
    glEnd();
    glPopMatrix();


}

void another_tree(){
   glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);//tree body
     glVertex2f(42.0,35.0);
    glVertex2f(42.0,29.0);
    glVertex2f(42.7,29.0);
    glVertex2f(42.7,35.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(41,35,0.8);
   glPopMatrix();

    glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(42,35,0.9);
   glPopMatrix();

   glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(43,35,0.9);
   glPopMatrix();

    glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(44,36,1.2);
   glPopMatrix();

    glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(42,37,1.5);
   glPopMatrix();

    glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(43,38,1.2);
   glPopMatrix();

   glPushMatrix();//tree top
    glColor3f(0.0f, 0.8f, 0.0f);
    drawFilledCircle(42,36,0.9);
   glPopMatrix();


}


void building_windows(){
 glBegin(GL_QUADS);//windows 1
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(15.5,36.5);
    glVertex2f(15.5,35.5);
    glVertex2f(16.5,35.5);
    glVertex2f(16.5,36.5);
    glEnd();
    glPopMatrix();
}

void building(){
     glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 1.0f);//body 1st
    glVertex2f(15.0,37.0);
    glVertex2f(15.0,29.2);
    glVertex2f(19.0,29.2);
    glVertex2f(19.0,37.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 1.0f);//body 2nd
    glVertex2f(13.6,36.4);
    glVertex2f(13.6,29.2);
    glVertex2f(15.0,29.2);
    glVertex2f(15.0,36.6);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 1.0f);//body 2nd
    glVertex2f(19.0,36.4);
    glVertex2f(19.0,29.2);
    glVertex2f(19.5,29.2);
    glVertex2f(19.5,36.2);
    glEnd();
    glPopMatrix();

    glPushMatrix();//1 windows 1
    building_windows();
    glPopMatrix();

     glPushMatrix();//1 windows 2
     glTranslatef(0,-2,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//windows 3
     glTranslatef(0,-4,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//1 windows 4
     glTranslatef(0,-6,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//windows 5
     glTranslatef(2,0,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//windows 6
     glTranslatef(2,-2,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//windows 7
     glTranslatef(2,-4,0);
    building_windows();
    glPopMatrix();

     glPushMatrix();//1 windows 8
     glTranslatef(2,-6,0);
    building_windows();
    glPopMatrix();

    glPushMatrix();//2 windows 1
     glTranslatef(-1.5,-1,0);
    building_windows();
    glPopMatrix();

    glPushMatrix();//2 windows 2
     glTranslatef(-1.5,-3,0);
    building_windows();
    glPopMatrix();

    glPushMatrix();//2 windows 3
     glTranslatef(-1.6,-5,0);
    building_windows();
    glPopMatrix();

}


void home(){
    glPushMatrix();
    glBegin(GL_QUADS);//home 1st top
    glColor3f(1.0,0.0,0.0);
    glVertex2f(4.5,34.5);
    glVertex2f(4.0,33.0);
    glVertex2f(7.0,33.0);
    glVertex2f(7.0,34.5);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glBegin(GL_QUADS);//home 2nd top
    glColor3f(1.0,0.0,0.0);
    glVertex2f(7.0,36.3);
    glVertex2f(7.0,34.5);
    glVertex2f(11.5,34.5);
    glVertex2f(11.0,36.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glBegin(GL_QUADS);//home 1st
    glColor3f(1.0,0.8,1.0);
    glVertex2f(4.0,33.0);
    glVertex2f(4.0,30.0);
    glVertex2f(7.0,30.0);
    glVertex2f(7.0,33.0);
    glEnd();
    glPopMatrix();


     glPushMatrix();
    glBegin(GL_QUADS);//home 2nd
    glColor3f(1.0,0.0,1.0);
    glVertex2f(7.0,34.5);
    glVertex2f(7.0,30.0);
    glVertex2f(11.0,30.0);
    glVertex2f(11.0,34.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);//building 1st door
    glColor3f(1.0,1.0,0.0);
    glVertex2f(4.5,32.0);
    glVertex2f(4.5,30.0);
    glVertex2f(6.5,30.0);
    glVertex2f(6.5,32.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);//building 2nd door
    glColor3f(1.0,1.0,0.0);
    glVertex2f(8.5,32.0);
    glVertex2f(8.5,30.0);
    glVertex2f(9.5,30.0);
    glVertex2f(9.5,32.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);//building 1st windows
    glColor3f(1.0,1.0,0.0);
    glVertex2f(7.5,34.0);
    glVertex2f(7.5,33.0);
    glVertex2f(8.5,33.0);
    glVertex2f(8.5,34.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
    glBegin(GL_QUADS);//building 2nd windows
    glColor3f(1.0,1.0,0.0);
    glVertex2f(9.5,34.0);
    glVertex2f(9.5,33.0);
    glVertex2f(10.5,33.0);
    glVertex2f(10.5,34.0);
    glEnd();
    glPopMatrix();

}

void shop(){
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 1.0f);//shop
    glVertex2f(25.0,34.0);
    glVertex2f(25.0,28.0);
    glVertex2f(30.0,28.0);
    glVertex2f(30.0,34.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);//shop
    glVertex2f(25.5,36.0);
    glVertex2f(24.5,34.0);
    glVertex2f(30.5,34.0);
    glVertex2f(29.5,36.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.7f, 0.3f);//shop
    glVertex2f(25.0,30.0);
    glVertex2f(25.0,28.0);
    glVertex2f(30.0,28.0);
    glVertex2f(30.0,30.0);
    glEnd();
    glPopMatrix();

     glBegin(GL_QUADS);
    glColor3f(1.0f, 0.7f, 0.3f);//shop
    glVertex2f(25.0,32.3);
    glVertex2f(25.0,32.0);
    glVertex2f(30.0,32.0);
    glVertex2f(30.0,32.3);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.3f, 0.0f);//prouduct 1
    glVertex2f(25.5,31.0);
    glVertex2f(25.5,30.0);
    glVertex2f(26.5,30.0);
    glVertex2f(26.5,31.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.3f, 0.0f);//pruduct 1
    glVertex2f(25.7,31.0);
    glVertex2f(26.3,31.0);
    glVertex2f(25.9,31.6);
    glEnd();
    glPopMatrix();

     glBegin(GL_QUADS);
    glColor3f(0.9f, 0.0f, 0.0f);//product 2
    glVertex2f(27.0,31.5);
    glVertex2f(27.0,30.0);
    glVertex2f(28.0,30.0);
    glVertex2f(28.0,31.5);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.3f);//product 2
    glVertex2f(27.3,31.8);
    glVertex2f(27.3,31.5);
    glVertex2f(27.7,31.5);
    glVertex2f(27.7,31.8);
    glEnd();
    glPopMatrix();

     glBegin(GL_QUADS);
    glColor3f(0.7f, 0.3f, 0.0f);//product 3
    glVertex2f(28.5,31.0);
    glVertex2f(28.5,30.0);
    glVertex2f(29.5,30.0);
    glVertex2f(29.5,31.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.3f);//product 3
    glVertex2f(28.7,31.0);
    glVertex2f(29.3,31.0);
    glVertex2f(28.9,31.6);
    glEnd();
    glPopMatrix();


}

void road_line(){
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(1.0,24.5);
    glVertex2f(1.0,23.5);
    glVertex2f(2.0,23.5);
    glVertex2f(2.0,24.5);
    glEnd();
    glPopMatrix();

}

void side_line(){
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(1.0,27.2);
    glVertex2f(1.0,27.0);
    glVertex2f(49.0,27.0);
    glVertex2f(49.0,27.2);
    glEnd();
    glPopMatrix();

}

void lamp(){
   glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(176,196,222);
    glVertex2f(2.0,30.0);
    glVertex2f(2.0,27.0);
    glVertex2f(2.3,27.0);
    glVertex2f(2.3,30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(176,196,222);
    glVertex2f(2.3,30.0);
    glVertex2f(2.3,29.7);
    glVertex2f(2.8,29.7);
    glVertex2f(2.8,30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(255,140,0);
    glVertex2f(2.4,29.2);
    glVertex2f(2.8,29.2);
    glVertex2f(2.6,29.7);
    glEnd();
    glPopMatrix();
}

void bus(){
   glBegin(GL_QUADS);//top1
    glColor3f(1.0,0.0,0.0);
    glVertex2f(17.0+x,29.0);
    glVertex2f(16.0+x,28.0);
    glVertex2f(21.0+x,28.0);
    glVertex2f(21.5+x,29.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//top2
    glColor3f(1.0,0.0,0.0);
    glVertex2f(21.0+x,28.0);
    glVertex2f(21.5+x,27.6);
    glVertex2f(23.0+x,28.5);
    glVertex2f(21.5+x,29.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//glass 1
    glColor3f(0.0,1.0,1.0);
    glVertex2f(16.0+x,28.0);
    glVertex2f(16.0+x,26.0);
    glVertex2f(21.0+x,26.0);
    glVertex2f(21.0+x,28.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//glass 2
    glColor3f(0.0,1.0,1.0);
    glVertex2f(21.0+x,28.0);
    glVertex2f(21.0+x,26.0);
    glVertex2f(21.5+x,26.0);
    glVertex2f(21.5+x,27.6);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//glass 3
    glColor3f(0.0,1.0,1.0);
    glVertex2f(21.5+x,27.6);
    glVertex2f(21.5+x,26.0);
    glVertex2f(22.8+x,27.0);
    glVertex2f(22.8+x,28.4);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//body 1
    glColor3f(1.0,0.0,0.0);
    glVertex2f(16.0+x,26.0);
    glVertex2f(16.0+x,23.0);
    glVertex2f(21.5+x,23.0);
    glVertex2f(21.5+x,26.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//body 2
    glColor3f(1.0,0.0,0.0);
    glVertex2f(21.5+x,26.0);
    glVertex2f(21.5+x,23.0);
    glVertex2f(22.8+x,24.3);
    glVertex2f(22.8+x,27.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_TRIANGLES);//body frontline
    glColor3f(0.0,0.0,0.0);
    glVertex2f(21.8+x,25.5);
    glVertex2f(22.1+x,24.5);
    glVertex2f(22.5+x,26.1);
    glEnd();
    glPopMatrix();

    glPushMatrix();//tier 1 outer
    glColor3f(0.0f, 0.0f, 0.0f);
    drawFilledCircle(17+x,23,0.6);
   glPopMatrix();

   glPushMatrix();//tier 1 inner
    glColor3f(0.8f, 0.8f, 1.0f);
    drawFilledCircle(17+x,23,0.4);
   glPopMatrix();

   glPushMatrix();//tier 2 outer
    glColor3f(0.0f, 0.0f, 0.0f);
    drawFilledCircle(20+x,23,0.6);
   glPopMatrix();

   glPushMatrix();//tier 2 inner
    glColor3f(0.8f, 0.8f, 1.0f);
    drawFilledCircle(20+x,23,0.4);
   glPopMatrix();

}

void car(){
   glBegin(GL_QUADS);//top
    glColor3ub(255,20,147);
    glVertex2f(35.0-x,29.5);
    glVertex2f(34.0-x,28.0);
    glVertex2f(38.0-x,28.0);
    glVertex2f(37.0-x,29.5);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//glass1
    glColor3f(0.0,1.0,1.0);
    glVertex2f(35.2-x,29.3);
    glVertex2f(34.2-x,28.0);
    glVertex2f(35.8-x,28.0);
    glVertex2f(35.8-x,29.3);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//glass2
    glColor3f(0.0,1.0,1.0);
    glVertex2f(36.0-x,29.3);
    glVertex2f(36.0-x,28.0);
    glVertex2f(37.6-x,28.0);
    glVertex2f(36.8-x,29.3);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);//body
    glColor3ub(255,20,147);
    glVertex2f(32.8-x,28.0);
    glVertex2f(32.8-x,25.5);
    glVertex2f(39.0-x,25.5);
    glVertex2f(39.0-x,28.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_TRIANGLES);//light1
    glColor3f(1.0,1.0,0.0);
    glVertex2f(32.8-x,28.0);
    glVertex2f(32.8-x,27.4);
    glVertex2f(33.4-x,28.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_TRIANGLES);//light2
    glColor3f(1.0,1.0,0.0);
    glVertex2f(38.4-x,28.0);
    glVertex2f(39.0-x,27.4);
    glVertex2f(39.0-x,28.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//tier 1 outer
    glColor3f(0.0f, 0.0f, 0.0f);
    drawFilledCircle(34-x,25.5,0.6);
   glPopMatrix();

   glPushMatrix();//tier 1 inner
    glColor3f(0.8f, 0.8f, 1.0f);
    drawFilledCircle(34-x,25.5,0.4);
   glPopMatrix();

   glPushMatrix();//tier 2 outer
    glColor3f(0.0f, 0.0f, 0.0f);
    drawFilledCircle(38-x,25.5,0.6);
   glPopMatrix();

   glPushMatrix();//tier 2 inner
    glColor3f(0.8f, 0.8f, 1.0f);
    drawFilledCircle(38-x,25.5,0.4);
   glPopMatrix();

}

void ship_1(){

  glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5f,0.5f, 0.5f);//1 ship 1
    glVertex2f(3.0+a,16.0);
    glVertex2f(5.0+a,13.0);
    glVertex2f(10.0+a,13.0);
    glVertex2f(12.0+a,16.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.7f,0.3f, 0.0f);//1 ship 2
    glVertex2f(5.0+a,18.0);
    glVertex2f(4.0+a,16.0);
    glVertex2f(10.5+a,16.0);
    glVertex2f(9.0+a,18.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(5.5+a,17,0.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(7.0+a,17,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(8.5+a,17,0.5);
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f, 0.0f);//1 ship 3
    glVertex2f(6.7+a,20.0);
    glVertex2f(6.7+a,18.0);
    glVertex2f(7.3+a,18.0);
    glVertex2f(7.3+a,20.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.7f, 0.2f);//1 ship 4
    glVertex2f(6.0+a,19.0);
    glVertex2f(6.0+a,18.0);
    glVertex2f(8.0+a,18.0);
    glVertex2f(8.0+a,19.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(6.5+a,18.5,0.3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(7.5+a,18.5,0.3);
    glPopMatrix();

}
void ship_2(){
   glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5f,0.5f, 0.5f);//2 ship 1
    glVertex2f(33.0-a,11.0);
    glVertex2f(35.0-a,8.0);
    glVertex2f(40.0-a,8.0);
    glVertex2f(42.0-a,11.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.7f,0.3f, 0.0f);//2 ship 2
    glVertex2f(36.0-a,13.0);
    glVertex2f(34.5-a,11.0);
    glVertex2f(41.0-a,11.0);
    glVertex2f(40.0-a,13.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(36.5-a,12,0.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(38.0-a,12,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(39.5-a,12,0.5);
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f, 0.0f);//2 ship 3
    glVertex2f(37.7-a,15.0);
    glVertex2f(37.7-a,13.0);
    glVertex2f(38.3-a,13.0);
    glVertex2f(38.3-a,15.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.7f, 0.2f);//2 ship 3
    glVertex2f(37.0-a,14.0);
    glVertex2f(37.0-a,13.0);
    glVertex2f(39.0-a,13.0);
    glVertex2f(39.0-a,14.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(37.5-a,13.5,0.3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    drawFilledCircle(38.5-a,13.5,0.3);
    glPopMatrix();
}

void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(1, 49, 1, 48);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,1.0f, 1.0f);//hill sky
    glVertex2f(1.0,48.0);
    glVertex2f(1.0,38.0);
    glVertex2f(49.0,38.0);
    glVertex2f(49.0,48.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();//sun
    sun();
   glPopMatrix();

    glPushMatrix();
    clouds();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.2f, 0.0f);//hill side
    glVertex2f(1.0,38.0);
    glVertex2f(1.0,37.8);
    glVertex2f(49.0,37.8);
    glVertex2f(49.0,38.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(34,139,34);//area
    glVertex2f(1.0,37.8);
    glVertex2f(1.0,27.0);
    glVertex2f(49.0,27.0);
    glVertex2f(49.0,37.8);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    side_line();//line 1
    glPopMatrix();

    glPushMatrix();
    home();
    glPopMatrix();

    glPushMatrix();
    building();
    glPopMatrix();

    glPushMatrix();
    shop();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(26,-14,0);
    glScalef(2,1.2,1);
    tree_body();//feild tree1
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(26,-27,0);
    glScalef(2,1.5,1);
    tree_top1();//feild tree1
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(26,-27,0);
    glScalef(2,1.5,1);
    tree_top2();//feild tree1
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(35,-15,0);
    glScalef(2,1.2,1);
    tree_body();//feild tree2
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(35,-28,0);
    glScalef(2,1.5,1);
    tree_top1();//feild tree2
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(35,-28,0);
    glScalef(2,1.5,1);
    tree_top2();//feild tree2
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(-9,-15,0);
    glScalef(2,1.2,1);
    tree_body();//feild tree3
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(-9,-28,0);
    glScalef(2,1.5,1);
    tree_top1();//feild tree3
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(-9,-28,0);
    glScalef(2,1.5,1);
    tree_top2();//feild tree3
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(9,-16,0);
    glScalef(2,1.2,1);
    tree_body();//feild tree4
    glPopMatrix();

     glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(9,-29,0);
    glScalef(2,1.5,1);
    tree_top1();//feild tree4
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.1,0.1);
    glTranslatef(9,-29,0);
    glScalef(2,1.5,1);
    tree_top2();//feild tree4
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f, 0.3f);//road
    glVertex2f(1.0,27.0);
    glVertex2f(1.0,21.0);
    glVertex2f(49.0,21.0);
    glVertex2f(49.0,27.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     lamp();//1
     glPopMatrix();

     glPushMatrix();
     glTranslatef(10,0,0);
     lamp();//2
     glPopMatrix();

     glPushMatrix();
     glTranslatef(20,0,0);
     lamp();//3
     glPopMatrix();

     glPushMatrix();
     glTranslatef(30,0,0);
     lamp();//4
     glPopMatrix();

     glPushMatrix();
     glTranslatef(38,0,0);
     lamp();//5
     glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-6,0);
    side_line();//road line 2
    glPopMatrix();

    glPushMatrix();
    road_line();//line 1
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4,0,0);
    glScalef(2,1,1);
    road_line();//line 2
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,0,0);
    glScalef(2,1,1);
    road_line();//line 3
    glPopMatrix();

    glPushMatrix();
    glTranslatef(16,0,0);
    glScalef(2,1,1);
    road_line();//line 4
    glPopMatrix();

    glPushMatrix();
    glTranslatef(22,0,0);
    glScalef(2,1,1);
    road_line();//line 5
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28,0,0);
    glScalef(2,1,1);
    road_line();//line 6
    glPopMatrix();

    glPushMatrix();
    glTranslatef(34,0,0);
    glScalef(2,1,1);
    road_line();//line 6
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,0,0);
    glScalef(2,1,1);
    road_line();//line 7
    glPopMatrix();

    glPushMatrix();
    glTranslatef(47,0,0);
    //glScalef(2,1,1);
    road_line();//line 7
    glPopMatrix();

    glPushMatrix();
    car();
    glPopMatrix();

    glPushMatrix();
    bus();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.9f, 0.0f);//river area
    glVertex2f(1.0,21.0);
    glVertex2f(1.0,19.0);
    glVertex2f(49.0,19.0);
    glVertex2f(49.0,21.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(30,144,255);//river
    glVertex2f(1.0,19.0);
    glVertex2f(1.0,1.0);
    glVertex2f(49.0,1.0);
    glVertex2f(49.0,19.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    ship_1();
    glPopMatrix();

    glPushMatrix();
    ship_2();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.4f, 0.0f);//grass
    glVertex2f(1.0,4.5);
    glVertex2f(1.0,1.0);
    glVertex2f(49.0,2.0);
    glVertex2f(49.0,1.0);
    glEnd();
    glPopMatrix();

     glPushMatrix();//flower1
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(5,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower1
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(6,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower1
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(5.5,22,0.9);
   glPopMatrix();

   glPushMatrix();//flower2
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(14,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower2
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(15,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower2
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(14.5,22,0.9);
   glPopMatrix();

    glPushMatrix();//flower3
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(23,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower3
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(24,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower3
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(23.5,22,0.9);
   glPopMatrix();

    glPushMatrix();//flower4
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(33,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower4
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(34,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower4
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(33.5,22,0.9);
   glPopMatrix();

    glPushMatrix();//flower5
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(43,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower5
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(44,21,0.9);
   glPopMatrix();

   glPushMatrix();//flower5
    glColor3f(0.0f, 0.4f, 0.0f);
    drawFilledCircle(43.5,22,0.9);
   glPopMatrix();

    glPushMatrix();
    glTranslatef(31,0,0);
   //tree2
   tree_top2();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(31,0,0);
   //tree2
   tree_top1();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(31,0,0);
   //tree2
   tree_body();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   //tree1
   tree_top2();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   //tree1
   tree_top1();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   //tree1
   tree_body();
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslatef(44,0,0);//hill22
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(42,0,0);//hill21
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(39,0,0);//hill20
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(38,0,0);//hill19
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(34,0,0);//hill18
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(32,0,0);//hill17
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(30,0,0);//hill16
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(28,0,0);//hill15
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(25,0,0);//hill14
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(24,0,0);//hill13
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(22,0,0);//hill12
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(19,0,0);//hill11
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(17,0,0);//hill10
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(15,0,0);//hill9
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(12,0,0);//hill8
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(10,0,0);//hill7
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(8,0,0);//hill6
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(7,0,0);//hill5
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(5,0,0);//hill4
   hill();
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glTranslatef(3,0,0);//hill3
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(2,0,0);//hill2
   hill();
   glEnd();
   glPopMatrix();

   glPushMatrix();
   hill();//hill1
   glEnd();
   glPopMatrix();

    glPushMatrix();
    another_tree();
    glPopMatrix();

  glFlush();
  glutSwapBuffers();
}

void key( unsigned char key, int x, int y ){
    switch ( key )
    {
    case 'R':
         xbus = true;

         glutPostRedisplay();
        break;
    case 'r':
         xbus = false;
         glutPostRedisplay();
        break;

        case 'C':
         ycloud = true;

         glutPostRedisplay();
        break;
    case 'c':
         ycloud = false;
         glutPostRedisplay();
        break;

        case 'S':
         aship = true;

         glutPostRedisplay();
        break;
    case 's':
         aship = false;
         glutPostRedisplay();
        break;

        case 'N':
         bsun = true;

         glutPostRedisplay();
        break;
    case 'n':
         bsun = false;
         glutPostRedisplay();
        break;

    }
    }

void anibus(){
    if(xbus == true){
		x += 0.005;
		if(x > 49)
			x = -12;
    }
    else if (xbus == false)
	{
		x = 1;

	}
	 glutPostRedisplay();
}

void anisun(){
    if(bsun == true){
		b += 0.006;
		if(b > 49)
			b =-12;
    }
    else if (bsun == false)
	{
		b = 1;

	}
	 glutPostRedisplay();
}

void anicloud(){
    if(ycloud == true){
		y += 0.005;
		if(y > 49)
			y = -12;
    }
    else if (ycloud == false)
	{
		y = 1;

	}
	 glutPostRedisplay();
}

void aniship(){
    if(aship == true){
		a += 0.005;
		if(a > 49)
			a = -12;
    }
    else if (aship == false)
	{
		a = 1;

	}

}

void button(){
   anibus();
   anicloud();
   anisun();
  aniship();
   glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("2D_Animation");

    glutKeyboardFunc(key);
    glutIdleFunc(button);



    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
