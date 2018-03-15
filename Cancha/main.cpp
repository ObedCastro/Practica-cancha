#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

//Declaración de varibales
float xi=0.0, yi=0.0, r=2.0, xf, yf, i=0.0;
float xi2=-6.5, yi2=0.0, xf2, yf2, i2=0.0;
float xi3=6.5, yi3=0.0, xf3, yf3, i3=0.0;

float xi4=-9.0, yi4=7.5, xf4, yf4, i4=0.0, r4=0.5;
float xi5=9.0, yi5=7.5, xf5, yf5, i5=0.0;
float xi6=9.0, yi6=-7.5, xf6, yf6, i6=0.0;
float xi7=-9.0, yi7=-7.5, xf7, yf7, i7=0.0;

void display(void)
{
	glClearColor(0.0, 1.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLineWidth(4);
    glBegin(GL_LINES);
	//	CUADRO GENERAL
	glVertex2f(-9.0, 7.5);
	glVertex2f(-9.0, -7.5);
	
	glVertex2f(9.0, 7.5);
	glVertex2f(9.0, -7.5);
	
	glVertex2f(-9.0, -7.5);
	glVertex2f(9.0, -7.5);
	
	glVertex2f(-9.0, 7.5);
	glVertex2f(9.0, 7.5);
	
	//Línea central
	glVertex2f(0.0, 7.5);
	glVertex2f(0.0, -7.5);
	
		//Cuadro interno grande izquierdo
		glVertex2f(-6.0, 4.0);
		glVertex2f(-6.0, -4.0);
		
		glVertex2f(-9.0, -4.0);
		glVertex2f(-6.0, -4.0);
		
		glVertex2f(-9.0, 4.0);
		glVertex2f(-6.0, 4.0);
		
			//Cuadro interno pequeño izquierdo
			glVertex2f(-7.0, 2.5);
			glVertex2f(-7.0, -2.5);
			
			glVertex2f(-9.0, -2.5);
			glVertex2f(-7.0, -2.5);
			
			glVertex2f(-9.0, 2.5);
			glVertex2f(-7.0, 2.5);
			
		//Cuadro interno grande derecho
		glVertex2f(6.0, 4.0);
		glVertex2f(6.0, -4.0);
		
		glVertex2f(9.0, -4.0);
		glVertex2f(6.0, -4.0);
		
		glVertex2f(9.0, 4.0);
		glVertex2f(6.0, 4.0);
		
			//Cuadro interno pequeño derecho
			glVertex2f(7.0, 2.5);
			glVertex2f(7.0, -2.5);
			
			glVertex2f(9.0, -2.5);
			glVertex2f(7.0, -2.5);
			
			glVertex2f(9.0, 2.5);
			glVertex2f(7.0, 2.5);		
    glEnd();
    
    //Circunferencia central
    glPointSize(3);
    glBegin(GL_POINTS);
    for (i=0.0; i<=7.0; i+=0.001)
	{
		xf = r*cos(i)+xi;
		yf = r*sin(i)+yi;
		
		glVertex2f(xf, yf);
	}    
    glEnd();
    
    //Circunferencia media izquierda
    glBegin(GL_POINTS);
    for (i2=4.96; i2<=7.59; i2+=0.001)
	{
		xf2 = r*cos(i2)+xi2;
		yf2 = r*sin(i2)+yi2;
		
		glVertex2f(xf2, yf2);
	}    
    glEnd();
    
    //Circunferencia media derecha
    glBegin(GL_POINTS);
    for (i3=1.83; i3<=4.45; i3+=0.001)
	{
		xf3 = r*cos(i3)+xi3;
		yf3 = r*sin(i3)+yi3;
		
		glVertex2f(xf3, yf3);
	}    
    glEnd();
    
    //Circunferencia esquina superior izquierda
    glBegin(GL_POINTS);
    for (i4=4.67; i4<=6.25; i4+=0.001)
	{
		xf4 = r4*cos(i4)+xi4;
		yf4 = r4*sin(i4)+yi4;
		
		glVertex2f(xf4, yf4);
	}    
    glEnd();
    
    //Circunferencia esquina superior derecha
    glBegin(GL_POINTS);
    for (i5=3.09; i5<=4.67; i5+=0.001)
	{
		xf5 = r4*cos(i5)+xi5;
		yf5 = r4*sin(i5)+yi5;
		
		glVertex2f(xf5, yf5);
	}    
    glEnd();
    
    //Circunferencia esquina inferior derecha
    glBegin(GL_POINTS);
    for (i6=1.58; i6<=3.16; i6+=0.001)
	{
		xf6 = r4*cos(i6)+xi6;
		yf6 = r4*sin(i6)+yi6;
		
		glVertex2f(xf6, yf6);
	}    
    glEnd();
    
    //Circunferencia esquina inferior derecha
    glBegin(GL_POINTS);
    for (i7=6.27; i7<=7.86; i7+=0.001)
	{
		xf7 = r4*cos(i7)+xi7;
		yf7 = r4*sin(i7)+yi7;
		
		glVertex2f(xf7, yf7);
	}    
    glEnd();
    
    //Puntos (central y penalti's)    
    glBegin(GL_POINTS);
    
    glVertex2f(0.0, 0.0);
    glVertex2f(-6.5, 0.0);
    glVertex2f(6.5, 0.0);
    
    glEnd();
    
    glFlush ();

}

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 650);
    glutInitWindowPosition (20, 20);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
