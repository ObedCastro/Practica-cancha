#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(0, 1, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    //	BORDE DE CANCHA
    glVertex3f(-9.0, 4.5, 0.0);
    glVertex3f(-9.0, -4.5, 0.0);
    
    glVertex3f(-9.0, 4.5, 0.0);
    glVertex3f(9.0, 4.5, 0.0);
    
    glVertex3f(9.0, 4.5, 0.0);
    glVertex3f(9.0, -4.5, 0.0);
    
    glVertex3f(-9.0, -4.5, 0.0);
    glVertex3f(9.0, -4.5, 0.0);
    
    glVertex3f(0.0, 4.5, 0.0);
    glVertex3f(0.0, -4.5, 0.0);
    
    //cuadritos
    //arriba
    glVertex3f(-9.0, 3.0, 0.0);
    glVertex3f(-6.0, 3.0, 0.0);
    
    //derecha
    glVertex3f(-6.0, 3.0, 0.0);
    glVertex3f(-6.0, -3.0, 0.0);
    
    //abajo
    glVertex3f(-6.0, -3.0, 0.0);
    glVertex3f(-9.0, -3.0, 0.0);
    
    //cuadro pequeño izquierda
    glVertex3f(-9.0, 2.0, 0.0);
    glVertex3f(-7.0, 2.0, 0.0);
    
    glVertex3f(-7.0, 2.0, 0.0);
    glVertex3f(-7.0, -2.0, 0.0);
    
    glVertex3f(-7.0, -2.0, 0.0);
    glVertex3f(-9.0, -2.0, 0.0);
    
    //cuadro grande derecha
    glVertex3f(9.0, 3.0, 0.0);
    glVertex3f(6.0, 3.0, 0.0);
    
    glVertex3f(6.0, 3.0, 0.0);
    glVertex3f(6.0, -3.0, 0.0);
    
    glVertex3f(6.0, -3.0, 0.0);
    glVertex3f(9.0, -3.0, 0.0);
    
    //cuadro pequeño derecha
    glVertex3f(9.0, 2.0, 0.0);
    glVertex3f(7.0, 2.0, 0.0);
    
    glVertex3f(7.0, 2.0, 0.0);
    glVertex3f(7.0, -2.0, 0.0);
    
    glVertex3f(7.0, -2.0, 0.0);
    glVertex3f(9.0, -2.0, 0.0);
	
	//Medio circulo izquierdo
	glPointSize(50);
     glBegin(GL_POINTS);
    GLfloat xx=-6.0, yy=1.0, rr=1.0, yyfinal, xxfinal, j=-6.0;
    for( j=2.33; j<=3.98; j=j+0.01)
    {
		xxfinal=rr*cos(j)+xx;
		yyfinal=rr*sin(j)+yy;
    glVertex2f(xxfinal,yyfinal);
   }
   
   //Medio circulo derecho
	glPointSize(50);
     glBegin(GL_POINTS);
    GLfloat xxx=6.0, yyy=0.0, rrr=1.0, yyyfinal, xxxfinal, k=6.0;
    for( k=6.0; k<=2; k=k+0.01)
    {
		xxxfinal=rrr*cos(k)+xxx;
		yyyfinal=rrr*sin(k)+yyy;
    glVertex2f(xxxfinal,yyyfinal);
   }
		
	//Circulo del medio
	glPointSize(50);
     glBegin(GL_POINTS);
    GLfloat x=0.0, y=0.0, r=2.0, yfinal, xfinal, i=0.0;
    for( i=0.0; i<=75; i=i+0.01)
    {
		xfinal=r*cos(i)+x;
		yfinal=r*sin(i)+y;
    glVertex2f(xfinal,yfinal);
   }


    
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
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (20, 20);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
