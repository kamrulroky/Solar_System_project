#include <GL/glut.h>
#include<math.h>
using namespace std;
float angle[10];
GLUquadricObj*sphere;

void Orbit(float radius)
{
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i <= 360; i++)
	{
		float degInRad = i*3.14159 / 180;
		glVertex2f(cos(degInRad)*radius, sin(degInRad)*radius);
	}
	glEnd();
}

void drawOrbit() {
	glColor3d(0.329412, 0.329412, 0.329412);
	Orbit(0.5);
	glColor3d(1.0, 0.25, 0.0);
	Orbit(1.0);
	glColor3d(0.30, 0.498039, 1.0);
	Orbit(1.5);
	glColor3d(0.647059f, 0.164706f, 0.164706f);
	Orbit(2.0);
	glColor3d(0.91, 0.76, 0.65);
	Orbit(2.5);
	glColor3d(0.623529, 0.623529, 0.372549);
	Orbit(3.0);
	glColor3d(0.372549, 0.623529, 0.623529);
	Orbit(3.5);
	glColor3d(0.30, 0.30, 1.0);
	Orbit(4.0);

}


void SaturnRings()
{
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i <= 360; i++)
	{
		float degInRad = i*3.14159 / 180;

		glVertex2f(cos(degInRad)*0.26, sin(degInRad)*0.26);
		glVertex2f(cos(degInRad)*0.25, sin(degInRad)*0.25);
		glVertex2f(cos(degInRad)*0.24, sin(degInRad)*0.24);
		glVertex2f(cos(degInRad)*0.23, sin(degInRad)*0.23);
		glVertex2f(cos(degInRad)*0.22, sin(degInRad)*0.22);
		glVertex2f(cos(degInRad)*0.21, sin(degInRad)*0.21);
		glVertex2f(cos(degInRad)*0.20, sin(degInRad)*0.20);
		glVertex2f(cos(degInRad)*0.19, sin(degInRad)*0.19);
		glVertex2f(cos(degInRad)*0.18, sin(degInRad)*0.18);
		glVertex2f(cos(degInRad)*0.17, sin(degInRad)*0.17);
		glVertex2f(cos(degInRad)*0.16, sin(degInRad)*0.16);
		glVertex2f(cos(degInRad)*0.15, sin(degInRad)*0.15);

	}
	glColor3d(0.623529, 0.623529, 0.372549);
	glEnd();
}

void drawsun()
{
	glPushMatrix();

	glRotatef(angle[0], 0.0, 1.0, 0.0);
	//glColor3d(0.6, 0.8, 0.0);
	glColor3d(1, 0.5, 0);
	gluSphere(sphere, 0.25, 50, 50);
	glPopMatrix();
}

void drawmurcuryplanet()
{
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glRotatef(angle[1], 0.0, -2.0, 0.0);
	glColor3d(0.329412, 0.329412, 0.329412);
	gluSphere(sphere, 0.01, 5, 5);
	glPopMatrix();
}

void drawvenusplanet()
{
	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(angle[2], 0.0, -1.0, 0.0);
	glColor3d(1.0, 0.25, 0.0);
	gluSphere(sphere, 0.02, 15, 15);
	glPopMatrix();
}

void drawearthplanet()
{
	glPushMatrix();
	glTranslatef(1.5, 0.0, 0.0);
	glRotatef(angle[3], 0.0, -1.0, 0.0);
	glColor3d(0.30, 0.498039, 1.0);
	gluSphere(sphere, 0.1, 15, 15);
	glPopMatrix();
}

void drawmoon()
{
	glPushMatrix();
	glTranslatef(1.2, 0.0, 0.0);
	glRotatef(angle[3], 0.0, -1.0, 0.0);
	glColor3d(0.80, 0.80, 0.80);
	glutSolidSphere(0.04, 15, 15);
	glPopMatrix();
}

void drawmarsplanet()
{
	glPushMatrix();
	glTranslatef(2.0, 0.0, 0.0);
	glRotatef(angle[4], 0.0, -1.0, 0.0);
	glColor3d(0.647059f, 0.164706f, 0.164706f);
	gluSphere(sphere, 0.08, 15, 15);
	glPopMatrix();
}

void drawjupiterplanet()
{
	glPushMatrix();
	glTranslatef(2.5, 0.0, 0.0);
	glRotatef(angle[5], 0.0, -1.0, 0.0);
	glColor3d(0.91, 0.76, 0.65);
	gluSphere(sphere, 0.15, 20, 20);
	glPopMatrix();
}

void drawsaturnplanet()
{
	glPushMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glRotatef(angle[6], 0.0, -1.0, 0.0);
	glColor3d(0.623529, 0.623529, 0.372549);
	gluSphere(sphere, 0.12, 20, 20);
	SaturnRings();
	glPopMatrix();

}



void drawuranasplanet()
{
	glPushMatrix();
	glTranslatef(3.5, 0.0, 0.0);
	glRotatef(angle[7], 0.0, -1.0, 0.0);
	glColor3d(0.372549, 0.623529, 0.623529);
	gluSphere(sphere, 0.10, 20, 20);
	glPopMatrix();
}

void drawneptuneplanet()
{
	glPushMatrix();
	glTranslatef(4.0, 0.0, 0.0);
	glRotatef(angle[8], 0.0, -1.0, 0.0);
	glColor3d(0.30, 0.30, 1.0);
	gluSphere(sphere, 0.10, 20, 20);
	glPopMatrix();
}


void draworbitmurcury()
{
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glRotatef(angle[1], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.05, 15, 15);
	glPopMatrix();
}

void draworbitvenus()
{
	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(angle[2], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.07, 15, 15);
	glPopMatrix();
}

void draworbitearth()
{
	glPushMatrix();
	glTranslatef(1.5, 0.0, 0.0);
	glRotatef(angle[3], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.1, 15, 15);
	glPopMatrix();
}

void draworbitmoon()
{
	glPushMatrix();
	glTranslatef(1.2, 0.0, 0.0);
	glRotatef(angle[3], 0.0, 1.0, 0.0);
	glColor3d(0.80, 0.80, 0.80);
	glutSolidSphere(0.04, 15, 15);
	glPopMatrix();
}

void draworbitmars()
{
	glPushMatrix();
	glTranslatef(2.0, 0.0, 0.0);
	glRotatef(angle[4], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.08, 15, 15);
	glPopMatrix();
}

void draworbitjupiter()
{
	glPushMatrix();
	glTranslatef(2.5, 0.0, 0.0);
	glRotatef(angle[5], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.15, 20, 20);
	glPopMatrix();
}

void draworbitsaturn()
{
	glPushMatrix();
	glTranslatef(3.0, 0.0, 0.0);
	glRotatef(angle[6], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.12, 20, 20);
	glPopMatrix();

}



void draworbituranas()
{
	glPushMatrix();
	glTranslatef(3.5, 0.0, 0.0);
	glRotatef(angle[7], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.10, 20, 20);
	glPopMatrix();
}

void draworbitneptune()
{
	glPushMatrix();
	glTranslatef(4.0, 0.0, 0.0);
	glRotatef(angle[8], 0.0, 1.0, 0.0);
	gluSphere(sphere, 0.10, 20, 20);
	glPopMatrix();
}

void rotate()
{
	angle[0] += 0.05;
	if (angle[0] >= 360)
		angle[0] -= 360;

	angle[1] += 0.2;
	if (angle[1] >= 360)
		angle[1] -= 360;
	glutPostRedisplay();

	angle[2] += 0.09;
	if (angle[2] >= 360)
		angle[2] -= 360;
	glutPostRedisplay();

	angle[3] += 0.10;
	if (angle[3] >= 360)
		angle[3] -= 360;
	glutPostRedisplay();


	angle[4] += 0.09;
	if (angle[4] >= 360)
		angle[4] -= 360;
	glutPostRedisplay();

	angle[5] += 0.07;
	if (angle[5] >= 360)
		angle[5] -= 360;
	glutPostRedisplay();

	angle[6] += 0.017;
	if (angle[6] >= 360)
		angle[6] -= 360;
	glutPostRedisplay();

	angle[7] += 0.02;
	if (angle[7] >= 360)
		angle[7] -= 360;
	glutPostRedisplay();

	angle[8] += 0.01;
	if (angle[8] >= 360)
		angle[8] -= 360;
	glutPostRedisplay();
}
void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	GLfloat light_pos[] = { 0.0, 9.5, 0.0, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
	GLfloat ambient[] = { 0.7, 0.7, 0.7 };
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	GLfloat specular[] = { 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);

	drawOrbit();

	glPushMatrix();
	glRotatef(angle[0], 0.0, 1.0, 0.0);
	drawsun();
	glPopMatrix();


	glPushMatrix();
	glRotatef(angle[1], 0.0, 0.0, 1.0);
	drawmurcuryplanet();
	draworbitmurcury();
	glPopMatrix();


	glPushMatrix();
	glRotatef(angle[2], 0.0, 0.0, 1.0);
	drawvenusplanet();
	draworbitvenus();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[3], 0.0, 0.0, 1.0);
	drawearthplanet();
	draworbitearth();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[3], 0.0, 0.0, 1.0);
	drawmoon();
	draworbitmoon();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[4], 0.0, 0.0, 1.0);
	drawmarsplanet();
	draworbitmars();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[5], 0.0, 0.0, 1.0);
	drawjupiterplanet();
	draworbitjupiter();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[6], 0.0, 0.0, 1.0);
	drawsaturnplanet();
	draworbitsaturn();
	glPopMatrix();



	glPushMatrix();
	glRotatef(angle[7], 0.0, 0.0, 1.0);
	drawuranasplanet();
	draworbituranas();
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle[8], 0.0, 0.0, 1.0);
	drawneptuneplanet();
	draworbitneptune();
	glPopMatrix();

	glutSwapBuffers();
}

void init(void)
{
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glLoadIdentity();
	glOrtho(-4.0, 4.0, -4.0, 4.0, 0.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	sphere = gluNewQuadric();
	gluQuadricDrawStyle(sphere, GLU_FILL);
	gluQuadricNormals(sphere, GLU_SMOOTH);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1080, 720);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("SOLAR SYSTEM");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(rotate);
	glutMainLoop();
}