#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void initiaze(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(-250.0, 250.0, -55.0, 110.0);
}

void Mamun(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
	float theta;
    int i;

     // background river
	glColor3f(0.4, 0.7, 0.9);

	glBegin(GL_POLYGON);
		glVertex2i(-250, -65);
		glVertex2i(250, -65);
		glVertex2i(250, 50);
		glVertex2i(-250, 50);
	glEnd();
	// background sky
	// glColor3f(0.0, 0.85, 1.0); // blue sky
    glColor3f(0.7, 0.7, 0.7); // grey sky
	glBegin(GL_POLYGON);
		glVertex2i(-250, 110);
		glVertex2i(250, 110);
		glVertex2i(250, 50);
		glVertex2i(-250, 50);
	glEnd();

    //river corner middle
    glColor3f(0.2, 0.6, 0.1);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-10+155*cos(theta),-52+40*sin(theta));
	}
	glEnd();

	//river corner left
	glColor3f(0.2, 0.6, 0.1);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-100+155*cos(theta),-48+35*sin(theta));
	}
	glEnd();

    //river corner right
    glColor3f(0.2, 0.6, 0.1);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(100+155*cos(theta),-48+35*sin(theta));
	}
	glEnd();
	//mountain 1 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(-220, 80);
		glVertex2i(-280, 50);
        glVertex2i(-210, 50);
	glEnd();
	//mountain 2 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(-200, 80);
		glVertex2i(-230, 50);
        glVertex2i(-160, 50);
	glEnd();
	//mountain 3 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(-130, 87);
		glVertex2i(-190, 50);
        glVertex2i(-60, 50);
	glEnd();
	//mountain 4 (small) from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(-80, 83);
		glVertex2i(-130, 50);
        glVertex2i(-20, 50);
	glEnd();
	//mountain 5 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(-40, 77);
		glVertex2i(-80, 50);
        glVertex2i(0, 50);
	glEnd();
	//mountain 6 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(20, 70);
		glVertex2i(-30, 50);
        glVertex2i(80, 50);
	glEnd();
	//mountain 7 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(90, 75);
		glVertex2i(45, 50);
        glVertex2i(130, 50);
	glEnd();
	//mountain 8 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(150, 70);
		glVertex2i(110, 50);
        glVertex2i(180, 50);
	glEnd();
	//mountain 9 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(200, 85);
		glVertex2i(160, 50);
        glVertex2i(250, 50);
	glEnd();
	//mountain 10 from left
    glColor3f(0.7, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(260, 75);
		glVertex2i(200, 50);
        glVertex2i(280, 50);
	glEnd();
	//boat
	glColor3f(1.0, 0.7, 0.2);
    glBegin(GL_POLYGON);
        glVertex2i(-225, 15);
        glVertex2i(-10, 15);
        glVertex2i(-50, 0);
        glVertex2i(-175, 0);

	glEnd();
	//boat box
    //glColor3f(0.5, 0.5, 0.5); // silver
    glColor3f(0.0, 0.4, 1.0);
    glBegin(GL_POLYGON);
        glVertex2i(-160, 15);
        glVertex2i(-160, 30);
        glVertex2i(-70, 30);
        glVertex2i(-70, 15);

	glEnd();
	//boat box stand
    glColor3f(0.5, 0.3, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(-70, 45);
        glVertex2i(-70, 15);
        glVertex2i(-75, 15);
        glVertex2i(-75, 45);
	glEnd();
	//boat pal
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(-70, 45);
        glVertex2i(-20, 15);
        glVertex2i(-50, 15);
	glEnd();
    // tree backbone
    glColor3f(0.5, 0.3, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(-190, -30);
		glVertex2i(-170, -25);
		glVertex2i(-170, 80);
		glVertex2i(-190, 80);
	glEnd();

	//tree circle
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),77+15*sin(theta));
	}
	glEnd();
	//tree circle 2
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-150+15*cos(theta),77+15*sin(theta));
	}
	glEnd();
	//tree circle 3
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),77+15*sin(theta));
	}
	glEnd();
	//tree circle 4
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-210+15*cos(theta),77+15*sin(theta));
	}
	glEnd();
    //tree circle 5
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),83+15*sin(theta));
	}
	glEnd();
	//tree circle 6
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),83+15*sin(theta));
	}
	glEnd();
	//tree circle 7
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),90+15*sin(theta));
	}
	glEnd();
	//tree circle 8
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-180+15*cos(theta),90+15*sin(theta));
	}
	glEnd();
	//tree circle 9
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),90+15*sin(theta));
	}
	glEnd();
	// tree 2 backbone
    glColor3f(0.5, 0.3, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(185, -30);
		glVertex2i(170, -30);
		glVertex2i(170, 50);
		glVertex2i(185, 50);
	glEnd();

    // tree 2 triangle 1
    glColor3f(0.0, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(175, 80);
		glVertex2i(120, 40);
        glVertex2i(230, 40);
	glEnd();
    // tree 2 triangle 2
    glColor3f(0.0, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
		glVertex2i(170, 70);
		glVertex2i(120, 30);
        glVertex2i(230, 30);
	glEnd();
    //sun
    //glColor3f(0.9, 0.9, 0.5); // clear sun
	glColor3f(0.9, 0.9, 0.8); // light sun
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-60+15*cos(theta),95+8*sin(theta));
	}
	glEnd();
	//cloud left
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(10+15*cos(theta),95+10*sin(theta));
	}
	glEnd();
	//cloud top
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(25+15*cos(theta),98+10*sin(theta));
	}
	glEnd();
	//cloud down
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(22+15*cos(theta),90+10*sin(theta));
	}
	glEnd();
    //cloud right
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(38+15*cos(theta),92+10*sin(theta));
	}
	glEnd();

    //cloud 2 left
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(100+15*cos(theta),95+10*sin(theta));
	}
	glEnd();
	//cloud 2 top
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(115+15*cos(theta),98+10*sin(theta));
	}
	glEnd();
	//cloud 2 down
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(122+15*cos(theta),90+10*sin(theta));
	}
	glEnd();
    //cloud 2 right
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(135 +15*cos(theta),93+10*sin(theta));
	}
	glEnd();

	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("171-15-8787");

	initiaze();
	glutDisplayFunc(Mamun);
	glutMainLoop();

	return 0;
}
