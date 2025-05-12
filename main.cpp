#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<mmsystem.h> // GLUT, include glu.h and gl.h
#include<math.h>>
#include<stdio.h>
# define PI           3.14159265358979323846
#include <GL/gl.h>
#include <GL/glu.h>



///--------------------Foysal top view ------------------///
GLfloat position = 0.0f;
GLfloat speed1 = 0.001f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed = 0.005f;
GLfloat w=0.0f;
GLfloat wspeed=0.000f;
int triangleAmount = 100;
int lineAmount = 100;




void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void init(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

///---------wave declaration ----///
bool waveUp = true;

float c1 = 0.00;
float c2 = 0.00;
float c3 = 0.00;
float c4 = 0.00;
float c5 = 0.00;
float c6 = 0.00;
float c7 = 0.00;
float c8 = 0.00;
float c9 = 0.00;
float c10 = 0.00;
float c11 = 0.00;
float c12 = 0.00;
float c13 = 0.00;
float c14 = 0.00;
float c15 = 0.00;
float c16 = 0.00;
float c17 = 0.00;
float c18 = 0.00;
float c19 = 0.00;
float c20 = 0.00;
float c21 = 0.00;
GLfloat twicePi = 2.0f * PI;
float objectY = 0.0f;  // Initial Y position of the object
float direction = 1.0f; // Direction of movement (+1 for down, -1 for up)
int i;
GLfloat Position1 = 0.0f;
GLfloat Position213 = 0.0f;
GLfloat Position3 = 0.0f;
GLfloat Speed1 = 0.0f;
GLfloat Speed2 = 0.0f;
GLfloat Speed3 = 0.0f;

void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

///___________________________________________________Voids___________________________________________________///

///-----------------------wave--------------///
void update1112(int value)
{
    if(position < -1.5)
            position = 1.5f;
    if(position3 < -1.5)
            position3 = 1.5f;
    if(position2 < -1.5)
            position2 = 1.5;

        if(waveUp)
        {
            c1 += .00042;
            c2 += .00042;
            c3 += .00042;
            c4 += .00042;
            c5 += .00042;
            c6 += .00042;
            c7 += .00042;
            c8 += .00042;
            c9 += .00042;
            c10 += .00042;
            c11 += .00042;
            c12 += .00042;
            c13 += .00042;
            c14 += .00042;
            c15 += .00042;
            c16 += .00042;
            c17 += .00042;
            c18 += .00042;
            c19 += .00042;
            c20 += .00042;
            c21 += .00032;
        }
        else
        {
            c1 -= .00032;
            c2 -= .00032;
            c3 -= .00032;
            c4 -= .00032;
            c5 -= .00032;
            c6 -= .00032;
            c7 -= .00032;
            c8 -= .00032;
            c9 -= .00032;
            c10 -= .00032;
            c11 -= .00032;
            c12 -= .00032;
            c13 -= .00032;
            c14 -= .00032;
            c15 -= .00032;
            c16 -= .00032;
            c17 -= .00032;
            c18 -= .00032;
            c19 -= .00032;
            c20 -= .00032;
            c21 -= .00032;
        }
         if (c1 >= .004)
    {
        waveUp = false;
    }
    if (c1 < 0.0)
    {
        waveUp = true;
    }

    if (c2 >= .004)
    {
        waveUp = false;
    }
    if (c2 < 0.0)
    {
        waveUp = true;
    }

    if (c3 >= .004)
    {
        waveUp = false;
    }
    if (c3 < 0.0)
    {
        waveUp = true;
    }
    if (c4 >= .004)
    {
        waveUp = false;
    }
    if (c4 < 0.0)
    {
        waveUp = true;
    }
    if (c5 >= .004)
    {
        waveUp = false;
    }
    if (c5 < 0.0)
    {
        waveUp = true;
    }
    if (c6 >= .004)
    {
        waveUp = false;
    }
    if (c6 < 0.0)
    {
        waveUp = true;
    }
    if (c7 >= .004)
    {
        waveUp = false;
    }
    if (c7 < 0.0)
    {
        waveUp = true;
    }
    if (c8 >= .004)
    {
                waveUp = false;
    }
    if (c8 < 0.0)
    {
        waveUp = true;
    }
    if (c9 >= .004)
    {
        waveUp = false;
    }
    if (c9 < 0.0)
    {
        waveUp = true;
    }
    if (c10 >= .004)
    {
        waveUp = false;
    }
    if (c10 < 0.0)
    {
        waveUp = true;
    }
    if (c11 >= .004)
    {
        waveUp = false;
    }
    if (c11 < 0.0)
    {
    waveUp = true;
    }
    if (c12 >= .004)
    {
        waveUp = false;
    }
    if (c12 < 0.0)
    {
        waveUp = true;
    }
    if (c13 >= .004)
    {
        waveUp = false;
    }
    if (c13 < 0.0)
    {
        waveUp = true;
    }
    if (c14 >= .004)
    {
        waveUp = false;
    }
    if (c14 < 0.0)
    {
        waveUp = true;
    }
    if (c15 >= .004)

    {
        waveUp = false;
    }
    if (c15 < 0.0)
    {
        waveUp = true;
    }
    if (c16 >= .004)
    {
        waveUp = false;
    }
    if (c16 < 0.0)
    {
        waveUp = true;
    }
    if (c17 >= .004)
    {
        waveUp = false;
    }
    if (c17 < 0.0)
    {
        waveUp = true;
    }
    if (c18 >= .004)
    {
        waveUp = false;
    }
    if (c18 < 0.0)
    {
        waveUp = true;
    }
    if (c19 >= .004)
    {
        waveUp = false;
    }
    if (c19 < 0.0)
    {
        waveUp = true;
    }
    if (c20 >= .004)
    {
        waveUp = false;
    }
    if (c20 < 0.0)
    {
        waveUp = true;
    }

    if (c21 >= .004)
    {
        waveUp = false;
    }
    if (c21 < 0.0)
    {
        waveUp = true;
    }

    glutPostRedisplay();
    glutTimerFunc(110, update1112, 0);
}
///---------------------------Foysal top                view end----------------///



///-----------------------Prioty   top     view -----------------///

GLfloat A229 = 0.0f;
GLfloat B229= 0.0f;
GLfloat P229 = 0.0f;
GLfloat Aspeed229 = 0.0;
GLfloat Bspeed229 = 0.0;
GLfloat Pspeed229 = 0.0;
GLfloat Ospeed229 = 0.0;
GLfloat APosition229 = 0.0;
GLfloat BPosition229 = 0.0;
GLfloat PPosition229 = 0.0;
GLfloat OPosition229 = 0.0;
///--------------------------
GLfloat pika9 = 0.0f;

GLfloat pikaa9 = 0.0f;

GLfloat pikaaa9 = 0.0f;

GLfloat speedpi9 = 0.001f;







GLfloat j9 = 0.0f;

GLfloat l9 = 0.0f;

GLfloat k9 = 0.0f;

float objectp9 = 0.0f;

float directionp9 = 1.0f;


GLfloat meteorP19=0.0; GLfloat meteorP29=0.0;

      GLfloat meteorS19=0.05;GLfloat meteorS29=0.03;

void meteorUp22219(int value){

       if(meteorP19 < -1.0)

        meteorS19 = 0.5f;

        if(meteorP29 > 1.0)

        meteorS29= 0.0f;

         meteorP19 -= meteorS19;

         meteorP29 += meteorS29;

	glutPostRedisplay();

	glutTimerFunc(100, meteorUp22219, 0);

}



///___________________________________________________start___________________________________________________///

void updatepi22219(int value)

{

    if(pika9 < -1.5)

        pika9 = 1.5f;

    if(pikaa9 > 1.5)

        pikaa9 = -1.5f;

    if(pikaaa9 < -2.0)

        pikaaa9 = 2.0f;

    pika9 -= speedpi9;

    pikaa9 += speedpi9;

    pikaaa9 -= speedpi9;

    glutPostRedisplay();

    glutTimerFunc(100, updatepi22219, 0);

}

void updatepi222219(int value)

{

    if(pika9  > 1.5)

        pika9= -1.5f;

    if(pikaa9< -1.5)

        pikaa9<= 1.5f;

    if(pikaaa9  > 2.0)

        pikaaa9 = -2.0f;

    pika9   += speedpi9;

    pikaa9 -= speedpi9;

    pikaaa9  += speedpi9;

    glutPostRedisplay();

    glutTimerFunc(100, updatepi222219, 0);

}






void updatep22219(int value) {

    // Update the object's Y position

    objectp9 += 0.005f * directionp9; // Adjust the value for desired speed

    // Reverse the direction when the object reaches the top or bottom

    if (objectp9 >= 0.01f || objectp9 <= 0.0f) {

        directionp9 *= -1.0f;

    }

    glutPostRedisplay(); // Trigger a display update

    glutTimerFunc(16, updatep22219, 0); // Call the update function every 16ms (approximately 60fps)

}

void star19()

{

    ///STAR1

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(1.10f,4.0f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

}

void star29()

{

    ///STAR 2

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(1.60f,6.00f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 5

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(3.40f,4.f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

}

///--------------------------------Prioty sky view top part end -----------///


///-------------------------Tanu top view start-------------///

GLfloat A = 0.0f;
GLfloat B = 0.0f;
GLfloat P = 0.0f;
GLfloat Aspeed = 0.0;
GLfloat Bspeed = 0.0;
GLfloat Pspeed = 0.0;
GLfloat Ospeed = 0.0;
GLfloat APosition = 0.0;
GLfloat BPosition = 0.0;
GLfloat PPosition = 0.0;
GLfloat OPosition = 0.0;


GLfloat meteorP3=0.0; GLfloat meteorP4=0.0;
GLfloat meteorS3=0.05;GLfloat meteorS4=0.03;

void meteorUpp3331(int value){

       if(meteorP3 < -1.0)
        meteorS3 = 0.5f;

        if(meteorP4 > 1.0)
        meteorS4 = 0.0f;

         meteorP3 -= meteorS3;
         meteorP4 += meteorS4;

	glutPostRedisplay();
	glutTimerFunc(100, meteorUpp3331, 0);

}
void drawEllipse3331(float centerX, float centerY, float radiusX, float radiusY, int numSegments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < numSegments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
        float x = radiusX * cosf(theta);
        float y = radiusY * sinf(theta);
        glVertex2f(centerX + x, centerY + y);
    }
    glEnd();
}
void drawEllipse3332(float centerX, float centerY, float radiusX, float radiusY, int numSegments) {
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < numSegments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
        float x = radiusX * cosf(theta);
        float y = radiusY * sinf(theta);
        glVertex2f(centerX + x, centerY + y);
    }
    glEnd();



}
///------------------tanu top view end-------------------///



///------------------------------------------------Sharup top view start ---------------------------------------------------------------------------///

GLfloat Tspeed4 = 0.0;
GLfloat Dspeed4 = 0.0;



GLfloat DPosition4 = 0.0;
GLfloat pika = 0.0f;
GLfloat pikaa = 0.0f;
GLfloat pikaaa = 0.0f;
GLfloat speedpi = 0.001f;



GLfloat j = 0.0f;
GLfloat l = 0.0f;
GLfloat k = 0.0f;
float objectp = 0.0f;
float directionp = 1.0f;


GLfloat meteorP1=0.0; GLfloat meteorP2=0.0;
GLfloat meteorS1=0.05;GLfloat meteorS2=0.03;

void meteorUp2221(int value){
       if(meteorP1 < -1.0)
        meteorS1 = 0.5f;

        if(meteorP2 > 1.0)
        meteorS2 = 0.0f;

         meteorP1 -= meteorS1;
         meteorP2 += meteorS2;

	glutPostRedisplay();
	glutTimerFunc(100, meteorUp2221, 0);

}


///___________________________________________________start___________________________________________________///
void updatepi2221(int value)
{
    if(pika < -1.5)
        pika = 1.5f;

    if(pikaa > 1.5)
        pikaa = -1.5f;

    if(pikaaa < -2.0)
        pikaaa = 2.0f;

    pika -= speedpi;
    pikaa += speedpi;
    pikaaa -= speedpi;
    glutPostRedisplay();
    glutTimerFunc(100, updatepi2221, 0);
}

void updatepi2222(int value)
{
    if(pika  > 1.5)
        pika= -1.5f;

    if(pikaa< -1.5)
        pikaa<= 1.5f;

    if(pikaaa  > 2.0)
        pikaaa = -2.0f;

    pika   += speedpi;
    pikaa -= speedpi;
    pikaaa  += speedpi;
    glutPostRedisplay();
    glutTimerFunc(100, updatepi2221, 0);
}

///sh
void updatep2221(int value) {
    // Update the object's Y position
    objectp += 0.005f * directionp; // Adjust the value for desired speed

    // Reverse the direction when the object reaches the top or bottom
    if (objectp >= 0.01f || objectp <= 0.0f) {
        directionp *= -1.0f;
    }

    glutPostRedisplay(); // Trigger a display update
    glutTimerFunc(16, updatep2221, 0); // Call the update function every 16ms (approximately 60fps)
}

///--------------------------------sharup   -Updated---------------------///

GLfloat s= 0.0f;

float objectp41 = 0.0f;  // Initial Y position of the object
float directionp41 = 1.0f; // Direction of movement (+1 for down, -1 for up)


void updatep4441(int value) {
    // Update the object's Y position
    objectp41 += 0.005f * directionp41; // Adjust the value for desired speed

    // Reverse the direction when the object reaches the top or bottom
    if (objectp41 >= 0.01f || objectp41 <= 0.0f) {
        directionp41 *= -1.0f;
    }

    glutPostRedisplay(); // Trigger a display update
    glutTimerFunc(16, updatep4441, 0); // Call the update function every 16ms (approximately 60fps)
}

GLfloat ya = 0.005f, xa = .001f;
GLfloat yspeed = 0.02f, xspeed = 0.01;
int yFlag = 1, xFlag = 1, AniFlag = 1;

void updates4441(int value)
{
    if(AniFlag == 1)
    {
        //y
        if(ya>-0.05 && yFlag == 1)
            ya = ya - yspeed;

        if(ya<=-0.05 && yFlag == 1)
            yFlag = 0;


        if(ya<0.05 && yFlag == 0)
            ya = ya + yspeed;

        if(ya>=0.05 && yFlag == 0)
            yFlag = 1;
        //x

        if(xa>-0.02 && xFlag == 1)
            xa = xa - xspeed;

        if(xa<=-0.02 && xFlag == 1)
            xFlag = 0;


        if(xa<0.02 && xFlag == 0)
            xa = xa + xspeed;

        if(xa>=0.002 && xFlag == 0)
            xFlag = 1;
    }

    glutPostRedisplay();
    glutTimerFunc(100, updates4441, 0);
}

///-----------------------update



GLfloat positions3 = 1.0f;
GLfloat speeds3 = 0.2f;
GLfloat positions4 = 1.0f;
GLfloat speeds4 = 0.2f;
GLfloat positions5 = 1.0f;
GLfloat speeds5 = 0.2f;

GLfloat positions = 1.0f;
GLfloat speeds = 0.05f;

///for man
void updates34441(int value)
{
    ///man1
    if(positions3 < 2.0)
        positions3 -= speeds;
            positions3 = 0.0f;

   ///aiun banner
   if(positions4 < 1.5)
       positions4 -= speeds;
            positions4 = 0.0f;

   ///man 2
   if(positions5 < 1.5)
       positions5 -= speeds;
            positions5 = 0.0f;

	glutPostRedisplay();
	glutTimerFunc(9000, updates34441, 0);
}









///she



///-------------------------------------------------------------Sharup top  view end-----------------------------------------------------------------///




///----------Foysal Display-----------------///
void display1112() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw sky
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.702, 0.945);
    glVertex2f(0.0f, 1.00f);
    glColor3f(0.514, 0.792, 0.976);
    glVertex2f(0.0f, 0.00f);
    glVertex2f(1.0f, 0.00f);
    glColor3f(0, 0.502, 0.757);
    glVertex2f(1.0f, 1.00f);
    glEnd();



      /// Draw sun
   glColor3ub(255, 235, 0); // Brighter yellow for the sun
GLfloat xs = 0.19f; // Center x-coordinate
GLfloat ys = 0.89f; // Center y-coordinate
GLfloat rs = 0.04f; // Sun radius

glBegin(GL_TRIANGLE_FAN);
glVertex2f(xs, ys); // Center of circle

for (int i = 0; i <= triangleAmount; i++) {
    // Slightly brighter orange for sun rays
    glColor3ub(255, 165, 0);

    // Calculate vertex coordinates on the circle
    float x = xs + (rs * cos(i * twicePi / triangleAmount));
    float y = ys + (rs * sin(i * twicePi / triangleAmount));

    glVertex2f(x, y);
}

glEnd();
///cloud

///_________________________________________________Clouds 1___________________________________________________///
///_________ 11 ________///
glPushMatrix();
glTranslatef(Position1, 0.0, 0.0);  // Move the cloud horizontally
GLfloat xc11 = 0.120f; GLfloat yc11 = 0.92f; GLfloat rc11 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc11, yc11);
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc11 + (rc11 * cos(i * twicePi / triangleAmount)),
                    yc11 + (rc11 * sin(i * twicePi / triangleAmount)) );
    }

///_________ 12 ________///
GLfloat xc12=0.140f; GLfloat yc12=0.94f; GLfloat rc12 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xc12, yc12); // center of circle
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc12 + (rc12 * cos(i * twicePi / triangleAmount)),
                    yc12 + (rc12 * sin(i * twicePi / triangleAmount)) );
}

///_________ 13 ________///
GLfloat xc13=0.135f; GLfloat yc13=0.92f; GLfloat rc13 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xc13, yc13); // center of circle
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc13 + (rc13 * cos(i * twicePi / triangleAmount)),
                    yc13 + (rc13 * sin(i * twicePi / triangleAmount)) );
}

///_________ 16 ________///
GLfloat xc16=0.160f; GLfloat yc16=0.94f; GLfloat rc16 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xc16, yc16); // center of circle
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc16 + (rc16 * cos(i * twicePi / triangleAmount)),
                    yc16 + (rc16 * sin(i * twicePi / triangleAmount)) );
}

///_________ 17 ________///
GLfloat xc17=0.155f; GLfloat yc17=0.92; GLfloat rc17 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xc17, yc17); // center of circle
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc17 + (rc17 * cos(i * twicePi / triangleAmount)),
                    yc17 + (rc17 * sin(i * twicePi / triangleAmount)) );
}

///_________ 18 ________///
GLfloat xc18=0.175f; GLfloat yc18=0.92f; GLfloat rc18 = 0.025f;  // Adjusted size
glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xc18, yc18); // center of circle
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc18 + (rc18 * cos(i * twicePi / triangleAmount)),
                    yc18 + (rc18 * sin(i * twicePi / triangleAmount)) );
}

glEnd();
///_________________________________________________Clouds 2___________________________________________________///
///_________ 21 ________///
GLfloat xc21 = 0.210f; GLfloat yc21 = 0.90f; GLfloat rc21 = 0.020f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc21, yc21);
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc21 + (rc21 * cos(i * twicePi / triangleAmount)),
                    yc21 + (rc21 * sin(i * twicePi / triangleAmount)) );
}

///_________ 22 ________///
GLfloat xc22 = 0.230f; GLfloat yc22 = 0.92f; GLfloat rc22 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc22, yc22); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc22 + (rc22 * cos(i * twicePi / triangleAmount)),
                yc22 + (rc22 * sin(i * twicePi / triangleAmount)) );
}

///_________ 23 ________///
GLfloat xc23 = 0.225f; GLfloat yc23 = 0.90f; GLfloat rc23 = 0.020f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc23, yc23); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc23 + (rc23 * cos(i * twicePi / triangleAmount)),
                yc23 + (rc23 * sin(i * twicePi / triangleAmount)) );
}

///_________ 26 ________///
GLfloat xc26 = 0.250f; GLfloat yc26 = 0.92f; GLfloat rc26 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc26, yc26); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc26 + (rc26 * cos(i * twicePi / triangleAmount)),
                yc26 + (rc26 * sin(i * twicePi / triangleAmount)) );
}

///_________ 27 ________///
GLfloat xc27 = 0.245f; GLfloat yc27 = 0.90f; GLfloat rc27 = 0.020f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc27, yc27); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc27 + (rc27 * cos(i * twicePi / triangleAmount)),
                yc27 + (rc27 * sin(i * twicePi / triangleAmount)) );
}

///_________ 28 ________///
GLfloat xc28 = 0.265f; GLfloat yc28 = 0.90f; GLfloat rc28 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc28, yc28); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc28 + (rc28 * cos(i * twicePi / triangleAmount)),
                yc28 + (rc28 * sin(i * twicePi / triangleAmount)) );
}

glEnd();
///_________________________________________________Clouds 3___________________________________________________///
///_________ 31 ________///
GLfloat xc31 = 0.720f; GLfloat yc31 = 0.92f; GLfloat rc31 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc31, yc31);
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc31 + (rc31 * cos(i * twicePi / triangleAmount)),
                    yc31 + (rc31 * sin(i * twicePi / triangleAmount)) );
}

///_________ 32 ________///
GLfloat xc32 = 0.740f; GLfloat yc32 = 0.94f; GLfloat rc32 = 0.016f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc32, yc32); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc32 + (rc32 * cos(i * twicePi / triangleAmount)),
                yc32 + (rc32 * sin(i * twicePi / triangleAmount)) );
}

///_________ 33 ________///
GLfloat xc33 = 0.735f; GLfloat yc33 = 0.92f; GLfloat rc33 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc33, yc33); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc33 + (rc33 * cos(i * twicePi / triangleAmount)),
                yc33 + (rc33 * sin(i * twicePi / triangleAmount)) );
}

///_________ 36 ________///
GLfloat xc36 = 0.760f; GLfloat yc36 = 0.94f; GLfloat rc36 = 0.016f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc36, yc36); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc36 + (rc36 * cos(i * twicePi / triangleAmount)),
                yc36 + (rc36 * sin(i * twicePi / triangleAmount)) );
}

///_________ 37 ________///
GLfloat xc37 = 0.755f; GLfloat yc37 = 0.92f; GLfloat rc37 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc37, yc37); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc37 + (rc37 * cos(i * twicePi / triangleAmount)),
                yc37 + (rc37 * sin(i * twicePi / triangleAmount)) );
}

///_________ 38 ________///
GLfloat xc38 = 0.775f; GLfloat yc38 = 0.92f; GLfloat rc38 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc38, yc38); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc38 + (rc38 * cos(i * twicePi / triangleAmount)),
                yc38 + (rc38 * sin(i * twicePi / triangleAmount)) );
}

glEnd();
///_________________________________________________Clouds 4___________________________________________________///
///_________ 41 ________///
GLfloat xc41 = 0.810f; GLfloat yc41 = 0.90f; GLfloat rc41 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc41, yc41);
    for(i = 0; i <= triangleAmount; i++) {
        glVertex2f( xc41 + (rc41 * cos(i * twicePi / triangleAmount)),
                    yc41 + (rc41 * sin(i * twicePi / triangleAmount)) );
}

///_________ 42 ________///
GLfloat xc42 = 0.830f; GLfloat yc42 = 0.92f; GLfloat rc42 = 0.016f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc42, yc42); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc42 + (rc42 * cos(i * twicePi / triangleAmount)),
                yc42 + (rc42 * sin(i * twicePi / triangleAmount)) );
}

///_________ 43 ________///
GLfloat xc43 = 0.825f; GLfloat yc43 = 0.90f; GLfloat rc43 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc43, yc43); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc43 + (rc43 * cos(i * twicePi / triangleAmount)),
                yc43 + (rc43 * sin(i * twicePi / triangleAmount)) );
}

///_________ 46 ________///
GLfloat xc46 = 0.850f; GLfloat yc46 = 0.92f; GLfloat rc46 = 0.016f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc46, yc46); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc46 + (rc46 * cos(i * twicePi / triangleAmount)),
                yc46 + (rc46 * sin(i * twicePi / triangleAmount)) );
}

///_________ 47 ________///
GLfloat xc47 = 0.845f; GLfloat yc47 = 0.90f; GLfloat rc47 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc47, yc47); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc47 + (rc47 * cos(i * twicePi / triangleAmount)),
                yc47 + (rc47 * sin(i * twicePi / triangleAmount)) );
}

///_________ 48 ________///
GLfloat xc48 = 0.865f; GLfloat yc48 = 0.90f; GLfloat rc48 = 0.018f;  // Adjusted size and position
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(xc48, yc48); // center of circle
for(i = 0; i <= triangleAmount; i++) {
    glVertex2f( xc48 + (rc48 * cos(i * twicePi / triangleAmount)),
                yc48 + (rc48 * sin(i * twicePi / triangleAmount)) );
}

glEnd();
glPopMatrix();
///------------ground----///
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.8f, 0.2f); // Light green color
glVertex2f(0.f, 0.5f);
glVertex2f(0.0f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, 0.5f);
glEnd();


///_______mountain 1_____///

glBegin(GL_TRIANGLES);

// Darker green color for the base of the mountain
glColor3f(0.0, 0.4, 0.0);
glVertex2f(0.0f, 0.5f);

// Mid-tone green color for the middle part of the mountain
glColor3f(0.0, 0.6, 0.0);
glVertex2f(0.38f, 0.74f);

// Lighter green color for the peak of the mountain
glColor3f(0.0, 0.8, 0.0);
glVertex2f(0.7f, 0.5f);
glEnd();

glBegin(GL_TRIANGLES);
///_______mountain 2_____///
// Darker green color for the base of the mountain
glColor3f(0.0, 0.4, 0.0);
glVertex2f(0.4f, 0.4f);

// Mid-tone green color for the middle part of the mountain
glColor3f(0.0, 0.6, 0.0);
glVertex2f(0.72f, 0.74f);

// Lighter green color for the peak of the mountain
glColor3f(0.0, 0.8, 0.0);
glVertex2f(1.0f, 0.4f);
glEnd();
///-----------------Building left 1-----------------///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(192, 192, 192);  // Set building color to gray-white
glVertex2f(0.00f, 0.66f);
glVertex2f(0.00f, 0.3f);
glVertex2f(0.16f, 0.3f);
glVertex2f(0.16f, 0.66f);
glEnd();

glPopMatrix();
glBegin(GL_LINES);
glColor3f(.2,.2,.2);  // Set building border
glVertex2f(0.00f, 0.66f);
glVertex2f(0.00f, 0.3f);
glVertex2f(0.16f, 0.3f);
glVertex2f(0.16f, 0.66f);
glVertex2f(0.00f, 0.66f);
glVertex2f(0.16f, 0.66f);
glEnd();
///-------window 11-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set window color to light blue (glass color)
glVertex2f(0.04f, 0.62f);
glVertex2f(0.04f, 0.56f);
glVertex2f(0.06f, 0.56f);
glVertex2f(0.06f, 0.62f);
glEnd();
glPopMatrix();

///-------window 12-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set window color to light blue (glass color)
glVertex2f(0.04f, 0.48f);
glVertex2f(0.04f, 0.42f);
glVertex2f(0.06f, 0.42f);
glVertex2f(0.06f, 0.48f);
glEnd();
glPopMatrix();

///-------Door 11-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set door color to light blue (glass color)
glVertex2f(0.04f, 0.36f);
glVertex2f(0.04f, 0.3f);
glVertex2f(0.06f, 0.3f);
glVertex2f(0.06f, 0.36f);
glEnd();



///-----------------Building left 2-----------------///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(156, 101, 31);  // Set building color to silver-gray
glVertex2f(0.1f, 0.46f);
glVertex2f(0.1f, 0.3f);
glVertex2f(0.19f, 0.3f);
glVertex2f(0.19f, 0.46f);
glEnd();
glPopMatrix();


glBegin(GL_LINES);
glColor3f(0.2, .2, .2);  // Set building border
glVertex2f(0.1f, 0.46f);
glVertex2f(0.1f, 0.3f);
glVertex2f(0.19f, 0.3f);
glVertex2f(0.19f, 0.46f);
glEnd();


glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(156, 101, 31);  // Set triangle color to silver-gray
glVertex2f(0.1f, 0.46f);
glVertex2f(0.19f, 0.46f);
glVertex2f(0.1f, 0.6f);
glEnd();
glPopMatrix();

glBegin(GL_LINES);
glColor3f(0.2, .2, .2);  // Set building border
glVertex2f(0.1f, 0.46f);
glVertex2f(0.1f, 0.6f);
glVertex2f(0.19f, 0.46f);
glVertex2f(0.1f, 0.6f);
glEnd();


///-------window 21-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set window color to light blue (glass color)
glVertex2f(0.12f, 0.48f);
glVertex2f(0.12f, 0.45f);
glVertex2f(0.15f, 0.45f);
glVertex2f(0.15f, 0.48f);
glEnd();
glPopMatrix();

///-------window 22-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set window color to light blue (glass color)
glVertex2f(0.12f, 0.40f);
glVertex2f(0.12f, 0.415f);
glVertex2f(0.15f, 0.415f);
glVertex2f(0.15f, 0.4f);
glEnd();
glPopMatrix();

///-------Door 2-----///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230);  // Set door color to light blue (glass color)
glVertex2f(0.12f, 0.36f);
glVertex2f(0.12f, 0.3f);
glVertex2f(0.15f, 0.3f);
glVertex2f(0.15f, 0.36f);
glEnd();
glPopMatrix();
///_________Circle body (SILVER) ________///
   glLineWidth(1);

   GLfloat xl=0.9f; GLfloat yl=0.51f; GLfloat rl =0.1f;
   glColor3f(0.675f, 0.663f, 0.643f);
   glBegin(GL_TRIANGLE_FAN);
      glVertex2f(xl, yl); // center of circle
      for( i = 0; i <= triangleAmount;i++) {
         glVertex2f( xl + (rl * cos(i * twicePi / triangleAmount)),
                       yl + (rl * sin(i * twicePi / triangleAmount)) );
      }
   glEnd();
///_________Circle body (Border) ________///

    GLfloat x2=0.9f; GLfloat y2=0.51f; GLfloat r2 =0.1f;
    glColor3f(0.2f, 0.2f, 0.2f);
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount; i++) {
			glVertex2f(
			    x2 + (r2 * cos(i *  twicePi / lineAmount)),
			    y2 + (r2* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	/*///_________C body Window(1) ________///
    glBegin(GL_QUADS);
    glColor3f(0.294f, 0.525f, 0.71f);
    glVertex2f(0.9f,0.47f);
    glVertex2f(0.9f,0.46f);
    glVertex2f(0.897f,0.46f);
    glVertex2f(0.897f,0.47f);
    ///_________C body Window(2) ________///
    glVertex2f(0.00f,0.44f);
    glVertex2f(0.00f,0.42f);
    glVertex2f(0.10f,0.42f);
    glVertex2f(0.0975f,0.44f);
    ///_________C body Window(3) ________///
    glVertex2f(0.00f,0.38f);
    glVertex2f(0.00f,0.36f);
    glVertex2f(0.092f,0.36f);
    glVertex2f(0.098f,0.38f);
    glEnd();*/

///----------------------------Space x--------------------------///
glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(200, 200, 200); // Light gray for the building
glVertex2f(0.88f, 0.62f);
glVertex2f(0.88f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, 0.62f);
glEnd();
glPopMatrix();

glBegin(GL_LINES);
glColor3ub(.200, .200, .200); // Border
glVertex2f(0.88f, 0.62f);
glVertex2f(0.88f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, 0.62f);
glVertex2f(0.88f, 0.62f);
glVertex2f(1.0f, 0.62f);
glEnd();


glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // building spacex 2
glVertex2f(0.76f, 0.44f);
glVertex2f(0.76f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, 0.44f);
glEnd();
glPopMatrix();

glBegin(GL_LINES);
glColor3ub(.2,.2,.2); // building border
glVertex2f(0.76f, 0.44f);
glVertex2f(0.76f, 0.3f);
glVertex2f(1.0f, 0.3f);
glVertex2f(1.0f, 0.44f);
glVertex2f(0.76f, 0.44f);
glVertex2f(1.0f, 0.44f);

glEnd();

///-------------------Window X 1------///

glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Light blue for the window
glVertex2f(0.9f, 0.54f);
glVertex2f(0.9f, 0.50f);
glVertex2f(.92f, 0.50f);
glVertex2f(.92f, 0.54f);
glEnd();
glPopMatrix();
///-------------------Window X 2------///

glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Light blue for the window
glVertex2f(0.97f, 0.54f);
glVertex2f(0.97f, 0.50f);
glVertex2f(.99f, 0.50f);
glVertex2f(.99f, 0.54f);
glEnd();
glPopMatrix();

///-------------------Door X 1------///

glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Brown for the door
glVertex2f(0.94f, 0.36f);
glVertex2f(0.94f, 0.3f);
glVertex2f(.96f, 0.3f);
glVertex2f(.96f, 0.36f);
glEnd();
glPopMatrix();

///-------------------Door X 2------///

glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Brown for the door
glVertex2f(0.8f, 0.36f);
glVertex2f(0.8f, 0.3f);
glVertex2f(.82f, 0.3f);
glVertex2f(.82f, 0.36f);
glEnd();
glPopMatrix();

  ///_________ Tower ________///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub( 250, 249, 246);
    glVertex2f(0.216f,0.70f);
    glVertex2f(0.216f,0.310f);

    glVertex2f(0.250f,0.70f);
    glVertex2f(0.250f,0.310f);

    glVertex2f(0.214f,0.70f);
    glVertex2f(0.250f,0.70f);
    ///_________ Middle Cross(1) ________///
    glVertex2f(0.218f,0.70f);
    glVertex2f(0.246f,0.5f);
    glVertex2f(0.218f,0.5f);
    glVertex2f(0.246f,0.70f);
    ///_________ Middle Cross(2) ________///
    glVertex2f(0.218f,0.5f);
    glVertex2f(0.246f,0.310f);
    glVertex2f(0.218f,0.310f);
    glVertex2f(0.246f,0.5f);
    glEnd();
    ///_________Tower Signal line L1________///
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub( 250, 249, 246);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.216f,0.6f);
    ///_________Tower Signal line R1________///
    glVertex2f(0.250f,0.66f);
    glVertex2f(0.272f,0.66f);
    ///_________Tower Signal line R2________///
    glVertex2f(0.250f,0.48f);
    glVertex2f(0.272f,0.48f);
    glEnd();
 ///_________Tower Signal line L1________///
    ///_________ OUTSIDE L1________///
   glColor3ub( 250, 249, 246);
    GLfloat xl1=0.272f; GLfloat yl1=0.48f; GLfloat rl1 =.013f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xl1, yl1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xl1 + (rl1 * cos(i *  twicePi / triangleAmount)),
                        yl1+ (rl1 * sin(i * twicePi / triangleAmount)) );
                         glColor3f(0.294f, 0.388f, 0.388f);
        }
        glEnd();
        ///_________Tower Signal line R1________///


    ///_________ OUTSIDE R1________///
    glColor3ub( 250, 249, 246);
    GLfloat xr11=0.272f; GLfloat yr11=0.66f; GLfloat rr11 =.013f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xr11, yr11); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xr11 + (rr11 * cos(i *  twicePi / triangleAmount)),
                        yr11+ (rr11 * sin(i * twicePi / triangleAmount)) );
                        glColor3f(0.294f, 0.388f, 0.388f);
        }
         glEnd();
///_________Tower Signal line R2________///
    ///_________ OUTSIDE R2________///
 glColor3ub( 250, 249, 246);
    GLfloat xr21=0.2f; GLfloat yr21=0.6f; GLfloat rr21 =.013f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xr21, yr21); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xr21 + (rr21 * cos(i *  twicePi / triangleAmount)),
                        yr21+ (rr21 * sin(i * twicePi / triangleAmount)) );
                        glColor3f(0.294f, 0.388f, 0.388f);
        }
        glEnd();











///_____________________________________________ROCKET(START)___________________________________________________///

    ///_________ Thruster________///
    glPushMatrix();
    glTranslatef(0.0f,Position213, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(161, 102, 47);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.72f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.435f,0.76f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(131,137,150);
    glVertex2f(0.407f,0.34f);
    glVertex2f(0.407f,0.32f);
    glVertex2f(0.463f,0.32f);
    glVertex2f(0.463f,0.34f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(20,20,20);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.435f,0.76f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.435f,0.76f);
    glEnd();




    ///---------Thruster left--------///
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.38f,0.34f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.405f,0.33f);
    glVertex2f(0.405f,0.34f);
    glEnd();
///---------Thruster left border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glEnd();


    ///---------Thruster Right--------///

    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.495f,0.33f);
    glVertex2f(0.495f,0.34f);
    glEnd();
    ///---------Thruster right border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);

     glVertex2f(0.465f,0.64f);
     glVertex2f(0.485f,0.67f);

    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);




    glEnd();


    ///_________ Main Rocket________///

    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(113, 112, 110);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);
    glVertex2f(0.46f,0.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);
    glVertex2f(0.46f,0.40f);
    glEnd();

    ///----------Border----------///
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.435f,0.67f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);

    ///---------Design---------///

    glVertex2f(0.41f,0.50f);
    glVertex2f(0.46f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);

    glVertex2f(0.41f,0.40f);
    glVertex2f(0.46f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);


    glEnd();


    ///------------Rocket left fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glEnd();
///------------Rocket right fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.53f,0.37f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);

    glEnd();

    ///------------rocket bottom part----///

    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.42f,0.34f);
    glVertex2f(0.42f,0.33f);
    glVertex2f(0.45f,0.33f);
    glVertex2f(0.45f,0.34f);
    glEnd();
     ///_____________________________Rocket TOP window___________________________________///
   ///_________ 11________///
    glColor3ub(255, 215, 0);
    GLfloat xrtw1=0.435f; GLfloat yrtw1=0.56f; GLfloat rrtw1 =.015f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 12________///
    glColor3f(0.314, 0.863, 0.98);
    GLfloat xrtw2=0.432f; GLfloat yrtw2=0.56f; GLfloat rrtw2 =.012f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket TOP window(Border)___________________________________///
    ///_________ 11________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrtwb1=0.435f; GLfloat yrtwb1=0.56f; GLfloat rrtwb1 =.015f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrtwb1, yrtwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrtwb1 + (rrtwb1 * cos(i *  twicePi / lineAmount)),
                        yrtwb1 + (rrtwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
///_____________________________Rocket bottom window___________________________________///
    ///_________ 13________///
    glColor3f(0.31, 0.847, 0.973);
    GLfloat xrbw3=0.435f; GLfloat yrbw3=0.45f; GLfloat rrbw3 =.010f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrbw3, yrbw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.31, 0.847, 0.973);
            glVertex2f( xrbw3 + (rrbw3 * cos(i *  twicePi / triangleAmount)),
                        yrbw3 + (rrbw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket bottom window(Border)___________________________________///
    ///_________ 13________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrbwb3=0.435f; GLfloat yrbwb3=0.45f; GLfloat rrbwb3 =.010f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrbwb3, yrbwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrbwb3 + (rrbwb3 * cos(i *  twicePi / lineAmount)),
                        yrbwb3 + (rrbwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
    ///---------Mini Window-------------///
    ///_________ 14________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw1=0.42f; GLfloat yrmw1=0.61f; GLfloat rrmw1 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw1, yrmw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw1 + (rrmw1 * cos(i *  twicePi / triangleAmount)),
                        yrmw1 + (rrmw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw2=0.435f; GLfloat yrmw2=0.61f; GLfloat rrmw2 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw2, yrmw2); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw2 + (rrmw2 * cos(i *  twicePi / triangleAmount)),
                        yrmw2 + (rrmw2 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 16________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw3=0.45f; GLfloat yrmw3=0.61f; GLfloat rrmw3 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw3, yrmw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw3 + (rrmw3 * cos(i *  twicePi / triangleAmount)),
                        yrmw3 + (rrmw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket Mini window(Border)___________________________________///
    ///_________ 14________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb1=0.42f; GLfloat yrmwb1=0.61f; GLfloat rrmwb1 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb1, yrmwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb1 + (rrmwb1 * cos(i *  twicePi / lineAmount)),
                        yrmwb1 + (rrmwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb2=0.435f; GLfloat yrmwb2=0.61f; GLfloat rrmwb2 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb2, yrmwb2); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb2 + (rrmwb2 * cos(i *  twicePi / lineAmount)),
                        yrmwb2 + (rrmwb2 * sin(i * twicePi /lineAmount)) );
        }
    glEnd();
     ///_________ 16________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb3=0.45f; GLfloat yrmwb3=0.61f; GLfloat rrmwb3 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb3, yrmwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb3 + (rrmwb3 * cos(i *  twicePi / lineAmount)),
                        yrmwb3 + (rrmwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();

    ///-----------------------------Fire -------------///

    glPushMatrix();
    glTranslatef(0.0f, objectY, 0.0f); // Translate the object vertically

    ///----------Main thruster----///

   ///----------Main thruster Fire ----///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.405f,0.33f);
    glVertex2f(0.36f,0.25f);
    glVertex2f(0.40f,0.27f);
    glVertex2f(0.435f,0.24f);
    glVertex2f(0.45f,0.27f);
    glVertex2f(0.51f,0.25f);
    glVertex2f(0.465f,0.33f);
    glEnd();
    ///_________ Fire main 1________///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.40f,0.26f);
    glVertex2f(0.429f,0.28f);
    glVertex2f(0.444f,0.24f);
    glVertex2f(0.459f,0.28f);
    glVertex2f(0.47f,0.26f);
    glVertex2f(0.45f,0.32f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.39f,0.27f);
    glVertex2f(0.425f,0.29f);
    glVertex2f(0.440f,0.27f);
    glVertex2f(0.458f,0.29f);
    glVertex2f(0.48f,0.27f);
    glVertex2f(0.45f,0.32f);
    glEnd();
///-------------Thruster left fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.34f,0.26f);
    glVertex2f(0.367f,0.28f);
    glVertex2f(0.371f,0.24f);
    glVertex2f(0.379f,0.28f);
    glVertex2f(0.398f,0.26f);
    glVertex2f(0.405f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.33f,0.27f);
    glVertex2f(0.364f,0.29f);
    glVertex2f(0.367f,0.27f);
    glVertex2f(0.375f,0.29f);
    glVertex2f(0.410f,0.27f);
    glVertex2f(0.405f,0.33f);
    glEnd();
///-------------Thruster right fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.45f,0.26f);
    glVertex2f(0.487f,0.28f);
    glVertex2f(0.491f,0.24f);
    glVertex2f(0.496f,0.28f);
    glVertex2f(0.513f,0.26f);
    glVertex2f(0.495f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.445f,0.27f);
    glVertex2f(0.484f,0.29f);
    glVertex2f(0.488f,0.27f);
    glVertex2f(0.494f,0.29f);
    glVertex2f(0.510f,0.27f);
    glVertex2f(0.495f,0.33f);
    glEnd();
    glPopMatrix();
    ///----------------------Stand------///
     ///_________ 1 Rocket stand________///
    glBegin(GL_QUADS);
    glColor3f(0.431, 0.416, 0.412);
    glVertex2f(0.34f,0.34f);
    glVertex2f(0.32f,0.3f);
    glVertex2f(0.55f,0.3f);
    glVertex2f(0.53f,0.34f);
    glEnd();
 ///_________ 1 rocket stand border________///
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.34f,0.34f);
    glVertex2f(0.32f,0.3f);
    glVertex2f(0.55f,0.3f);
    glVertex2f(0.53f,0.34f);
    glVertex2f(0.34f,0.34f);
    glVertex2f(0.53f,0.34f);

    glEnd();














        ///_____________________________________________ROCKET Side Building  (START)___________________________________________________///
   glBegin(GL_QUADS);

// Quad 1 (color: white)
glColor3f(1.0, 1.0, 1.0);
glVertex2f(0.58f, 0.65f);
glVertex2f(0.58f, 0.31f);
glVertex2f(0.66f, 0.31f);
glVertex2f(0.66f, 0.65f);

// Quad 2 (color: off-white)
glColor3f(0.925, 0.933, 0.921);
glVertex2f(0.46f, 0.58f);
glVertex2f(0.46f, 0.52f);
glVertex2f(0.58f, 0.52f);
glVertex2f(0.58f, 0.58f);



// Quad 4 (color: crystal glass)
glColor3f(0.271, 0.714, 0.851);
glVertex2f(0.60f, 0.62f);
glVertex2f(0.60f, 0.38f);
glVertex2f(0.64f, 0.38f);
glVertex2f(0.64f, 0.62f);

// Quad 5 (color: crystal glass)
glColor3f(0.271, 0.714, 0.851);
glVertex2f(0.46f, 0.56f);
glVertex2f(0.46f, 0.54f);
glVertex2f(0.60f, 0.54f);
glVertex2f(0.60f, 0.56f);

glColor3f(0.271, 0.714, 0.851);
glVertex2f(0.61f, 0.355f);
glVertex2f(0.61f, 0.31f);
glVertex2f(0.63f, 0.31f);
glVertex2f(0.63f, 0.355f);

glEnd();

///-----------------Border------------------///

glLineWidth(1.5);
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(0.58f, 0.65f);
glVertex2f(0.58f, 0.31f);
glVertex2f(0.66f, 0.31f);
glVertex2f(0.66f, 0.65f);
glVertex2f(0.58f, 0.65f);
glVertex2f(0.66f, 0.65f);

///--------2///
glVertex2f(0.46f, 0.58f);
glVertex2f(0.46f, 0.52f);
glVertex2f(0.58f, 0.52f);
glVertex2f(0.58f, 0.58f);
glVertex2f(0.46f, 0.58f);
glVertex2f(0.58f, 0.58f);
glVertex2f(0.46f, 0.52f);
glVertex2f(0.58f, 0.52f);

///--------------cross border---///
glVertex2f(0.46f, 0.58f);
glVertex2f(0.49f, 0.52f);
glVertex2f(0.49f, 0.52f);
glVertex2f(0.52f, 0.58f);
glVertex2f(0.52f, 0.58f);
glVertex2f(0.55f, 0.52f);
glVertex2f(0.55f, 0.52f);
glVertex2f(0.58f, 0.58f);
///----------door border///
glVertex2f(0.61f, 0.355f);
glVertex2f(0.61f, 0.31f);
glVertex2f(0.63f, 0.31f);
glVertex2f(0.63f, 0.355f);
glVertex2f(0.61f, 0.355f);
glVertex2f(0.63f, 0.355f);

glEnd();

///_________________________________________________FIELD(2)___________________________________________________///

    glBegin(GL_QUADS);
    glColor3f(0.69, 0.851, 0.31);
    glVertex2f(0.0f,0.18f);
    glColor3f(0.396, 0.671, 0.141);
    glVertex2f(0.0f,0.00f);
    glVertex2f(1.0f,0.00f);
    glColor3f(0.69, 0.851, 0.31);
    glVertex2f(1.0f,0.18f);
    glEnd();
    ///_________________________________________________ROAD(3)___________________________________________________///
    glBegin(GL_QUADS);
    glColor3f(0.004f, 0.0f, 0.004f);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.0f,0.18f);
    glVertex2f(1.0f,0.18f);
    glVertex2f(1.0f,0.3f);
    glEnd();
    ///_____________________________________________ROAD CROSS LINE(4)___________________________________________________///
    glBegin(GL_LINES);
    glColor3f(1.00f, 1.0f, 1.00f);
    ///_________1________///
    glVertex2f(0.10f,0.24f);
    glVertex2f(0.20f,0.24f);
    ///_________2________///
    glVertex2f(0.30f,0.24f);
    glVertex2f(0.40f,0.24f);
    ///_________3________///
    glVertex2f(0.50f,0.24f);
    glVertex2f(0.60f,0.24f);
    ///_________4________///
    glVertex2f(0.70f,0.24f);
    glVertex2f(0.80f,0.24f);
    ///_________5________///
    glVertex2f(0.90f,0.24f);
    glVertex2f(1.00f,0.24f);
    glEnd();
    ///______________________________________________________CAR___________________________________________________///


    glPushMatrix();
    glTranslatef(Position3, 0.0, 0.0);  // Move the car horizontally
    glBegin(GL_QUADS);
    glColor3f(0.78f,0.137f,0.204f);//car lower part
    glVertex2f(0.14f,0.195f);
    glVertex2f(0.14f,0.245f);
    glVertex2f(0.27f,0.245f);
    glVertex2f(0.27f,0.195);

    glBegin(GL_QUADS);
    glColor3f(0.78f,0.137f,0.204f);
    glVertex2f(0.27f,0.245f);
    glVertex2f(0.27f,0.195);
    glVertex2f(0.28f,0.195);
    glVertex2f(0.275f,0.220);

    glBegin(GL_QUADS);
    glColor3f(0.78f,0.137f,0.204f);//car upper part
    glVertex2f(0.175f,0.275f);
    glVertex2f(0.16f,0.245f);
    glVertex2f(0.25f,0.245f);
    glVertex2f(0.235f,0.275);
    glBegin(GL_QUADS);
    glColor3ub(165, 149, 117);//car left window
    glVertex2f(0.177f,0.268f);
    glVertex2f(0.177f,0.249f);
    glVertex2f(0.2f,0.249f);
    glVertex2f(0.2f,0.268);

    glBegin(GL_QUADS);

    glColor3ub(165, 149, 117);//car right window
    glVertex2f(0.210f,0.268f);
    glVertex2f(0.210f,0.249f);
    glVertex2f(0.232f,0.249f);
    glVertex2f(0.232f,0.268);
    glEnd();

    ///----------Border

    glLineWidth(1.5);
    glBegin(GL_LINES);
    /*glColor3f(0.0,0.0,0.0);
    glVertex2f(0.14f,0.195f);
    glVertex2f(0.14f,0.245f);
    glVertex2f(0.27f,0.245f);
    glVertex2f(0.27f,0.195);
    glVertex2f(0.14f,0.195f);
    glVertex2f(0.27f,0.195);*/
///
    glVertex2f(0.175f,0.275f);
    glVertex2f(0.16f,0.245f);
    glVertex2f(0.25f,0.245f);
    glVertex2f(0.235f,0.275);
    glVertex2f(0.16f,0.245f);
    glVertex2f(0.25f,0.245f);

    glEnd();
    ///...........car Tier Right
    GLfloat A50=0.248f; GLfloat P50=0.202f; GLfloat O50 =0.015f;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A50, P50); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A50 + (O50 * cos(i *  twicePi/ triangleAmount)),
                        P50 + (O50 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    ///...........car Tier Alloy Right
    GLfloat A51=0.248f; GLfloat P51=0.202f; GLfloat O51 =0.010f;
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A51, P51); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A51 + (O51 * cos(i *  twicePi/ triangleAmount)),
                        P51 + (O51 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
     ///...........car Tier left
    GLfloat A52=0.17f; GLfloat P52=0.202f; GLfloat O52 =0.015f;
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A52, P52); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A52 + (O52 * cos(i *  twicePi/ triangleAmount)),
                        P52 + (O52 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    ///...........car Tier Alloy Left
    GLfloat A53=0.17f; GLfloat P53=0.202f; GLfloat O53 =0.010f;
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A53, P53); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A53 + (O53 * cos(i *  twicePi/ triangleAmount)),
                        P53 + (O53 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();

   glutPostRedisplay();

    glPopMatrix();
    glPopMatrix();

     /**........................................ Sea ...........................................**/
    glPushMatrix();

    glColor3f(0.0f, 0.5f, 1.0f); // Deep blue
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.14f);
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.529f, 0.808f, 0.922f); // Light blue
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 0.14f);
    glEnd();


    ///sc1..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw1=0.018f;
    GLfloat yw1=0.11f;
    GLfloat radiusw1 =0.039f+ c1; // Use c1 for the radius

     glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw1, yw1);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw1 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw1 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///sc2..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw2=0.048f;
    GLfloat yw2=0.102f;

    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw2, yw2);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw2 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw2 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



   ///sc3..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw3=0.100f;
    GLfloat yw3=0.114f;
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw3, yw3);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw3 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw3 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



     ///c4..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw4=0.152f;
    GLfloat yw4=0.106f;
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw4, yw4);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw4 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                      yw4 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c5..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw5=0.20f;
    GLfloat yw5=0.1175f;
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw5, yw5);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw5 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw5 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c6..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw6=0.254f;
    GLfloat yw6=0.115f;
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw6, yw6);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw6 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw6 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c7..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw7=0.308f;
    GLfloat yw7=0.1f;
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw7, yw7);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw7 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw7 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }



    glEnd();
    glPopMatrix();



    ///c8..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw8=0.362f;
    GLfloat yw8=0.118f;
     glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw8, yw8);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw8 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw8 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c9..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw9=0.406f;
    GLfloat yw9=0.11f;
     glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw9, yw9);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw9 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw9 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c10..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw10=0.45f;
    GLfloat yw10=0.11f;;
   glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw10, yw10);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw10 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw10 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c11..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw11=0.504f;
    GLfloat yw11=0.112f;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw11, yw11);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw11 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw11 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c12..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw12=0.558f;
    GLfloat yw12=0.105f;;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw12, yw12);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw12 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw12 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }



    glEnd();
    glPopMatrix();



    ///c13..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw13=0.62f;
    GLfloat yw13=0.10f;
   glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw13, yw13);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw13 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw13 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c14..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw14=0.665f;
    GLfloat yw14=0.115f;
   glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw14, yw14);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw14 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw14 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();



    ///c15..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw15=0.694f;
    GLfloat yw15=0.105f;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw15, yw15);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw15 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw15 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }



    glEnd();
    glPopMatrix();



    ///c16..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw16=0.734f;
    GLfloat yw16=0.12f;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw16, yw16);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw16 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                    yw16 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }



    glEnd();
    glPopMatrix();



    ///c17..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw17=0.778f;
    GLfloat yw17=0.116f;;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw17, yw17);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw17 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                yw17 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

     ///c18..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw18=0.822f;
    GLfloat yw18=0.12f;;
   glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw18, yw18);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw18 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                yw18 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
     ///c19..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw19=0.867f;
    GLfloat yw19=0.11f;;
   glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw19, yw19);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw19 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                yw19 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
     ///c20..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw20=0.910f;
    GLfloat yw20=0.12f;;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw20, yw20);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw20 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                yw20 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    ///c21..............................
    glPushMatrix();
    glTranslatef(0,w,0);
    GLfloat xw21=0.960f;
    GLfloat yw21=0.1119f;;
    glColor3f(0.529f, 0.808f, 0.922f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw21, yw21);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xw21 + (radiusw1 * cos(i *  twicePi / triangleAmount)),
                yw21 + (radiusw1 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

   glColor3f(0.0f, 0.5f, 1.0f); // Deep blue
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.14f);
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.529f, 0.808f, 0.922f); // Light blue
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 0.14f);
    glEnd();


    glPopMatrix();





    glFlush();
}

void update1(int value)
{
    if(Position1 >2.0 )
        Position1 = -1.0f;
    Position1 += Speed1;
    glutPostRedisplay();
    glutTimerFunc(100, update1, 0);
}

void update213(int value)
{
    if(Position213 >2.0 )
        Position213 = -1.0f;
    Position213 += Speed2;
    glutPostRedisplay();
    glutTimerFunc(100, update213, 0);
}

void update3(int value)
{
    if(Position3 >2.0 )
        Position3 = -1.0f;
    Position3 += Speed3;
    glutPostRedisplay();
    glutTimerFunc(100, update3, 0);
}

///-----------------------Foysal Dispaly End-------------///







///------------------------------------------------------------------Prioty Display Start----------------------------------------------------------///
void display22219()

{

    glClearColor(0.5f, 0.5f, 0.5f, 0.5f);

    glClear(GL_COLOR_BUFFER_BIT);

///........................................................Sky screen................................................................................................

    glBegin(GL_QUADS);

    //glColor3f(0.722f, 0.875f, 0.961f);

    glColor3f(0.56f, 0.58f, 0.59f);

    glVertex2f(0.0f,0.0f);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.0f,1.0f);

    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2f(1.0f,1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(1.0f,0.0f);

    glEnd();

        glPointSize(1.5);

    glBegin(GL_POINTS);

    glColor3f(0.5f,0.5f,0.5f);

    glVertex2f(0.10f, 0.99f);

    glVertex2f(0.05f, 0.50f);

    glVertex2f(0.15f, 0.75f);

    glVertex2f(0.20f, 0.80f);

    glVertex2f(0.25f, 0.45f);

    glVertex2f(0.30f, 0.67f);

    glVertex2f(0.35f, 0.35f);

    glVertex2f(0.45f, 0.25f);

    glVertex2f(0.55f, 0.30f);

    glVertex2f(0.60f, 0.27f);

    glVertex2f(0.65f, 0.85f);

    glVertex2f(0.70f, 0.33f);

    glVertex2f(0.75f, 0.29f);

    glVertex2f(0.80f, 0.55f);

    glVertex2f(0.85f, 0.37f);

    glVertex2f(0.90f, 0.58f);

    glVertex2f(0.95f, 0.99f);

    glVertex2f(0.02f, 0.81f);

    glVertex2f(0.08f, 0.91f);

    glVertex2f(0.13f, 0.75f);

    glVertex2f(0.28f, 0.77f);

    glVertex2f(0.39f, 0.57f);

    glVertex2f(0.425f,0.86f);

    glVertex2f(0.53f, 0.81f);

    glVertex2f(0.54f, 0.50f);

    glVertex2f(0.535f,0.75f);

    glVertex2f(0.66f, 0.91f);

    glVertex2f(0.73f, 0.75f);

    glVertex2f(0.81f, 0.77f);

    glVertex2f(0.87f, 0.57f);

    glVertex2f(0.92f, 0.86f);

    glVertex2f(0.86f, 0.99f);

    glVertex2f(0.99f, 0.93f);

    glVertex2f(0.24f, 0.99f);

    glVertex2f(0.4f, 0.3f);

    glEnd();

    glPointSize(2.5);

    glBegin(GL_POINTS);

    glVertex2f(0.05f, 0.70f);

    glVertex2f(0.07f, 0.50f);

    glVertex2f(0.02f, 0.80f);

    glVertex2f(0.10f, 0.40f);

    glVertex2f(0.20f, 0.35f);

    glVertex2f(0.26f, 0.66f);

    glVertex2f(0.22f, 0.50f);

    glVertex2f(0.50f, 0.40f);

    glVertex2f(0.67f, 0.60f);

    glVertex2f(0.45f, 0.95f);

    glVertex2f(0.91f, 0.50f);

    glEnd();

    glPushMatrix();

    glTranslatef(meteorP29,meteorP19,0.0f);

    ///Meteor - 1

    glPushMatrix();

    glScalef(.2,.2,0);

	glTranslatef(1.10f,4.10f,0.0f);

    glBegin(GL_POLYGON);

    glColor4f(1.0f,1.0f,1.0f,0.5f);

    glVertex2f(0.487f,0.5f);

    glVertex2f(0.43f,0.614f);

    glVertex2f(0.514f,0.4985f);

    glEnd();

    glPushMatrix();

    //glScalef(0.5f,0.5f,0.0f);

    glBegin(GL_POLYGON);

    glColor4f(0.722f,0.718f,0.706f,0.5f);

    glVertex2f(0.487f,0.5f);

    glVertex2f(0.48f,0.499f);

    glVertex2f(0.514f,0.4985f);

    glEnd();

    glPopMatrix();

    glEnable(GL_BLEND);

    glDepthMask(GL_FALSE);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    GLfloat A639=0.5f; GLfloat P639=0.5f; GLfloat O639 =0.012f;

    glColor3f(0.945f, 0.663f, 0.165f);

    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(A639, P639); // center of circle

        for(int i = 0; i <= triangleAmount;i++) {

            glVertex2f( A639 + (O639 * cos(i *  twicePi/ triangleAmount)),

                        P639 + (O639 * sin(i * twicePi / triangleAmount)));

        }

    glEnd();

    ///Meteor Inside Circle

    GLfloat A649=0.505f; GLfloat P649=0.5045f; GLfloat O649 =0.005f;

    glColor3f(0.965f, 0.859f, 0.518f);

    glBegin(GL_TRIANGLE_FAN);

        glVertex2f(A649, P649); // center of circle

        for(int i = 0; i <= triangleAmount;i++) {

            glVertex2f( A649 + (O649 * cos(i *  twicePi/ triangleAmount)),

                        P649 + (O649 * sin(i * twicePi / triangleAmount)));

        }

    glEnd();

    glPopMatrix();

    k9 +=0.009f;

    glPopMatrix();


    glPopMatrix();



    star19();

    star29();




    ///STAR 3

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(2.50f,3.20f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 4

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(2.40f,4.6f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();



    ///STAR 6

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(3.30f,6.f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 7

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(5.10f,6.20f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 8

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(4.1f,5.0f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 9

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(4.50f,2.50f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 10

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(4.50f,6.20f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 11

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(5.15f,3.59f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();

    ///STAR 12

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(6.2f,4.2f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();


    ///STAR 13

	glPushMatrix();

	glScalef(.15,.15,0);

	glTranslatef(5.9f,5.2f,0.0f);

    glBegin(GL_POLYGON);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(.030f,.040f);

    glVertex2f(.050f,0.030f);

    glVertex2f(.040f,.050f);

    glVertex2f(.057f,.060f);

    glVertex2f(.037f,.060f);

    glVertex2f(.030f,.080f);

    glVertex2f(.023f,.060f);

    glVertex2f(.003f,.060f);

    glVertex2f(.020f,.050f);

    glVertex2f(.010f,0.030f);

    glEnd();

    glPopMatrix();



    ///.........................................................CLOUD 3rd LAYER.....................................................................................///

///circle 1

    GLfloat t30=0.05f, r30=0.24f, radi30 =.04f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t30, r30);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t30 + (radi30 * cos(i12 *  twicePi / triangleAmount)),

                    r30+ (radi30 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

     ///circle 2

    GLfloat t31=0.10f, r31=0.28f, radi31 =.05f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t31, r31);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t31 + (radi31 * cos(i12 *  twicePi / triangleAmount)),

                    r31+ (radi31 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

     ///circle 3

    GLfloat t32=0.15f, r32=0.25f, radi32 =.03f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t32, r32);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t32 + (radi32 * cos(i12 *  twicePi / triangleAmount)),

                    r32+ (radi32 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

     ///circle 4

    GLfloat t33=0.18f, r33=0.21f, radi33 =.03f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t33, r33);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t33 + (radi33 * cos(i12 *  twicePi / triangleAmount)),

                    r33+ (radi33 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

     ///circle 5

    GLfloat t34=0.24f, r34=0.22f, radi34=.04f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t34, r34);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t34 + (radi34 * cos(i12 *  twicePi / triangleAmount)),

                    r34 + (radi34 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 6

    GLfloat t35=0.30f, r35=0.19f, radi35 =.04f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t35, r35);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t35 + (radi35 * cos(i12 *  twicePi / triangleAmount)),

                    r35+ (radi35 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

     ///circle 7

    GLfloat t36=0.36f, r36=0.145f, radi36 =.05f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t36, r36);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t36 + (radi36 * cos(i12 *  twicePi / triangleAmount)),

                    r36+ (radi36 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 8

    GLfloat t37=0.52f, r37=0.17f, radi37 =.05f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t37, r37);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t37 + (radi37 * cos(i12 *  twicePi / triangleAmount)),

                    r37+ (radi37 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 9

    GLfloat t38=0.57f, r38=0.245f, radi38 =.05f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t38, r38);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t38 + (radi38 * cos(i12 *  twicePi / triangleAmount)),

                    r38+ (radi38 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 10

    GLfloat t39=0.64f, r39=0.21f, radi39 =.04f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t39, r39);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t39 + (radi39 * cos(i12 *  twicePi / triangleAmount)),

                    r39 + (radi39 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 11

    GLfloat t40=0.66f, r40=0.16f, radi40=.05f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t40, r40);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t40 + (radi40 * cos(i12 *  twicePi / triangleAmount)),

                    r40 + (radi40 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 12

    GLfloat t41=0.95f, r41=0.33f, radi41=.06f;

    glColor3f(0.08f, 0.08f, 0.08f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t41, r41);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t41 + (radi41 * cos(i12 *  twicePi / triangleAmount)),

                    r41 + (radi41 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.08f, 0.08f, 0.08f);

    glVertex2f(0.05f,0.235f);

    glVertex2f(0.19f,0.235f);

    glVertex2f(0.05f,0.00f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.08f, 0.08f, 0.08f);

    glVertex2f(0.52f,0.21f);

    glVertex2f(0.52f,0.00f);

    glVertex2f(0.64f,0.0f);

    glVertex2f(0.64f,0.21f);

    glVertex2f(0.05f,0.193f);

    glVertex2f(0.05f,0.00f);

    glVertex2f(0.34f,0.0f);

    glVertex2f(0.34f,0.193);

    glEnd();

    glPointSize(10);

    glBegin(GL_POINTS);

    glColor3f(0.08f, 0.08f, 0.08f);

    glVertex2f(0.208f,0.197f);

    glEnd();


        ///_____________________________________________ROCKET(START)___________________________________________________///

    ///_________ Thruster________///
    glPushMatrix();
    glTranslatef(0.0f,APosition229,0.0f);
    glScalef(0.55f,0.55f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(161, 102, 47);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.72f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.435f,0.76f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(131,137,150);
    glVertex2f(0.407f,0.34f);
    glVertex2f(0.407f,0.32f);
    glVertex2f(0.463f,0.32f);
    glVertex2f(0.463f,0.34f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(20,20,20);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.405f,0.72f);
    glVertex2f(0.435f,0.76f);
    glVertex2f(0.465f,0.72f);
    glVertex2f(0.435f,0.76f);
    glEnd();

    ///----------Main thruster Fire ----///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.405f,0.33f);
    glVertex2f(0.36f,0.25f);
    glVertex2f(0.40f,0.27f);
    glVertex2f(0.435f,0.24f);
    glVertex2f(0.45f,0.27f);
    glVertex2f(0.51f,0.25f);
    glVertex2f(0.465f,0.33f);
    glEnd();

    glPopMatrix();



     ///---------Thruster left--------///
    glPushMatrix();
    glTranslatef(0.0f,BPosition229,0.0f);
    glScalef(0.55f,0.55f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);
    ///---------Thruster left--------///
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.38f,0.34f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.405f,0.33f);
    glVertex2f(0.405f,0.34f);
    glEnd();
///---------Thruster left border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glEnd();


    ///---------Thruster Right--------///

    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.495f,0.33f);
    glVertex2f(0.495f,0.34f);
    glEnd();
    ///---------Thruster right border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);

     glVertex2f(0.465f,0.64f);
     glVertex2f(0.485f,0.67f);

    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);




    glEnd();




    ///-------------Thruster left fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.34f,0.26f);
    glVertex2f(0.367f,0.28f);
    glVertex2f(0.371f,0.24f);
    glVertex2f(0.379f,0.28f);
    glVertex2f(0.398f,0.26f);
    glVertex2f(0.405f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.33f,0.27f);
    glVertex2f(0.364f,0.29f);
    glVertex2f(0.367f,0.27f);
    glVertex2f(0.375f,0.29f);
    glVertex2f(0.410f,0.27f);
    glVertex2f(0.405f,0.33f);
    glEnd();
///-------------Thruster right fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.45f,0.26f);
    glVertex2f(0.487f,0.28f);
    glVertex2f(0.491f,0.24f);
    glVertex2f(0.496f,0.28f);
    glVertex2f(0.513f,0.26f);
    glVertex2f(0.495f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.445f,0.27f);
    glVertex2f(0.484f,0.29f);
    glVertex2f(0.488f,0.27f);
    glVertex2f(0.494f,0.29f);
    glVertex2f(0.510f,0.27f);
    glVertex2f(0.495f,0.33f);
    glEnd();
    glPopMatrix();


     ///_________ Main Rocket________///
    glPushMatrix();
    glTranslatef(0.0f,PPosition229,0.0f);
    glScalef(0.55f,0.55f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(113, 112, 110);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);
    glVertex2f(0.46f,0.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);
    glVertex2f(0.46f,0.40f);
    glEnd();

    ///----------Border----------///
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.435f,0.67f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);

    ///---------Design---------///

    glVertex2f(0.41f,0.50f);
    glVertex2f(0.46f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);

    glVertex2f(0.41f,0.40f);
    glVertex2f(0.46f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);


    glEnd();


    ///------------Rocket left fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glEnd();
///------------Rocket right fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.53f,0.37f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);

    glEnd();

    ///------------rocket bottom part----///

    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.42f,0.34f);
    glVertex2f(0.42f,0.33f);
    glVertex2f(0.45f,0.33f);
    glVertex2f(0.45f,0.34f);
    glEnd();
     ///_____________________________Rocket TOP window___________________________________///
   ///_________ 11________///
    glColor3ub(255, 215, 0);
    GLfloat xrtw1=0.435f; GLfloat yrtw1=0.56f; GLfloat rrtw1 =.015f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 12________///
    glColor3f(0.314, 0.863, 0.98);
    GLfloat xrtw2=0.432f; GLfloat yrtw2=0.56f; GLfloat rrtw2 =.012f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket TOP window(Border)___________________________________///
    ///_________ 11________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrtwb1=0.435f; GLfloat yrtwb1=0.56f; GLfloat rrtwb1 =.015f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrtwb1, yrtwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrtwb1 + (rrtwb1 * cos(i *  twicePi / lineAmount)),
                        yrtwb1 + (rrtwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
///_____________________________Rocket bottom window___________________________________///
    ///_________ 13________///
    glColor3f(0.31, 0.847, 0.973);
    GLfloat xrbw3=0.435f; GLfloat yrbw3=0.45f; GLfloat rrbw3 =.010f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrbw3, yrbw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.31, 0.847, 0.973);
            glVertex2f( xrbw3 + (rrbw3 * cos(i *  twicePi / triangleAmount)),
                        yrbw3 + (rrbw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket bottom window(Border)___________________________________///
    ///_________ 13________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrbwb3=0.435f; GLfloat yrbwb3=0.45f; GLfloat rrbwb3 =.010f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrbwb3, yrbwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrbwb3 + (rrbwb3 * cos(i *  twicePi / lineAmount)),
                        yrbwb3 + (rrbwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
    ///---------Mini Window-------------///
    ///_________ 14________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw1=0.42f; GLfloat yrmw1=0.61f; GLfloat rrmw1 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw1, yrmw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw1 + (rrmw1 * cos(i *  twicePi / triangleAmount)),
                        yrmw1 + (rrmw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw2=0.435f; GLfloat yrmw2=0.61f; GLfloat rrmw2 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw2, yrmw2); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw2 + (rrmw2 * cos(i *  twicePi / triangleAmount)),
                        yrmw2 + (rrmw2 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 16________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw3=0.45f; GLfloat yrmw3=0.61f; GLfloat rrmw3 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw3, yrmw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw3 + (rrmw3 * cos(i *  twicePi / triangleAmount)),
                        yrmw3 + (rrmw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket Mini window(Border)___________________________________///
    ///_________ 14________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb1=0.42f; GLfloat yrmwb1=0.61f; GLfloat rrmwb1 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb1, yrmwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb1 + (rrmwb1 * cos(i *  twicePi / lineAmount)),
                        yrmwb1 + (rrmwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb2=0.435f; GLfloat yrmwb2=0.61f; GLfloat rrmwb2 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb2, yrmwb2); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb2 + (rrmwb2 * cos(i *  twicePi / lineAmount)),
                        yrmwb2 + (rrmwb2 * sin(i * twicePi /lineAmount)) );
        }
    glEnd();
     ///_________ 16________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb3=0.45f; GLfloat yrmwb3=0.61f; GLfloat rrmwb3 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb3, yrmwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb3 + (rrmwb3 * cos(i *  twicePi / lineAmount)),
                        yrmwb3 + (rrmwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();

    ///-----------------------------Fire -------------///


    ///_________ Fire main 1________///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.40f,0.26f);
    glVertex2f(0.429f,0.28f);
    glVertex2f(0.444f,0.24f);
    glVertex2f(0.459f,0.28f);
    glVertex2f(0.47f,0.26f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.39f,0.27f);
    glVertex2f(0.425f,0.29f);
    glVertex2f(0.440f,0.27f);
    glVertex2f(0.458f,0.29f);
    glVertex2f(0.48f,0.27f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glPopMatrix();



    ///-----------Rocket---------End--///

///.........................................................CLOUD 2ND LAYER....................................................................................///

   ///circle 11

    GLfloat t21 =0.07f, r21=0.12f, radi21 =.04f;

    twicePi = 2.0f * PI;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t21, r21); // center of circle

    for(int i1 = 0; i1 <= triangleAmount; i1++)

    {

        glVertex2f( t21 + (radi21 * cos(i1 *  twicePi / triangleAmount)),

                    r21 + (radi21 * sin(i1 * twicePi / triangleAmount)) );

    }

    glEnd();

   ///circle 2

    GLfloat t22=0.15f, r22=0.17, radi22 =.065f;

    twicePi = 2.0f * PI;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t22, r22); // center of circle

    for(int i2 = 0; i2 <= triangleAmount; i2++)

    {

        glVertex2f( t22 + (radi22 * cos(i2 *  twicePi / triangleAmount)),

                    r22 + (radi22 * sin(i2 * twicePi / triangleAmount)) );

    }

    glEnd();

///circle 3

    GLfloat t23=0.15f, r23=0.04f, radi23 =.10f;

    twicePi = 2.0f * PI;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t23, r23); // center of circle

    for(int i3 = 0; i3 <= triangleAmount; i3++)

    {

        glVertex2f( t23 + (radi23 * cos(i3 *  twicePi / triangleAmount)),

                    r23 + (radi23 * sin(i3 * twicePi / triangleAmount)) );

    }

    glEnd();

   ///circle 4

    GLfloat t24=0.23f, r24=0.125f, radi24 =.045f;

    twicePi = 2.0f * PI;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t24, r24); // center of circle

    for(int i4 = 0; i4 <= triangleAmount; i4++)

    {

        glVertex2f( t24 + (radi24 * cos(i4 *  twicePi / triangleAmount)),

                    r24 + (radi24 * sin(i4 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 5

    GLfloat t25=0.26, r25=0.07f, radi25 =.07f;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t25, r25); // center of circle

    for(int i5 = 0; i5 <= triangleAmount; i5++)

    {

        glVertex2f( t25 + (radi25 * cos(i5 *  twicePi / triangleAmount)),

                    r25 + (radi25 * sin(i5 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 6

    GLfloat t26=0.35f, r26=0.07f, radi26 =.05f;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t26, r26); // center of circle

    for(int i6 = 0; i6 <= triangleAmount; i6++)

    {

        glVertex2f( t26 + (radi26 * cos(i6 *  twicePi / triangleAmount)),

                    r26 + (radi26 * sin(i6 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 7

    GLfloat t27=0.60f, r27=0.09f, radi27 =.05f;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t27, r27); // center of circle

    for(int i10 = 0; i10 <= triangleAmount; i10++)

    {

        glVertex2f( t27 + (radi27 * cos(i10 *  twicePi / triangleAmount)),

                    r27 + (radi27 * sin(i10 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 8

    GLfloat t28=0.69f, r28=0.09f, radi28 =.05f;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t28, r28); // center of circle

    for(int i11 = 0; i11 <= triangleAmount; i11++)

    {

        glVertex2f( t28 + (radi28 * cos(i11 *  twicePi / triangleAmount)),

                    r28 + (radi28 * sin(i11 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 9

    GLfloat t29=0.75f, r29=0.16f, radi29 =.07f;

    glColor3f(0.1f, 0.1f, 0.1f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t29, r29);// center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t29 + (radi29 * cos(i12 *  twicePi / triangleAmount)),

                    r29+ (radi29 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();


///.........................................................................initial part.......................................................

    ///circle 1

    GLfloat t =0.0f, r=0.178f, radi =.07f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t, r); // center of circle

    for(int i = 0; i <= triangleAmount; i++)

    {

        glVertex2f( t + (radi * cos(i *  twicePi / triangleAmount)),

                    r + (radi * sin(i * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 2

    GLfloat t1 =0.05f, r1=0.09f, radi1 =.05f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t1, r1); // center of circle

    for(int i1 = 0; i1 <= triangleAmount; i1++)

    {

        glVertex2f( t1 + (radi1 * cos(i1 *  twicePi / triangleAmount)),

                    r1 + (radi1 * sin(i1 * twicePi / triangleAmount)) );

    }

    glEnd();

   ///circle 3

    GLfloat t2=0.105f, r2=0.047, radi2 =.03f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t2, r2); // center of circle

    for(int i2 = 0; i2 <= triangleAmount; i2++)

    {

        glVertex2f( t2 + (radi2 * cos(i2 *  twicePi / triangleAmount)),

                    r2 + (radi2 * sin(i2 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 4

    GLfloat t3=0.153f, r3=0.05f, radi3 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t3, r3); // center of circle

    for(int i3 = 0; i3 <= triangleAmount; i3++)

    {

        glVertex2f( t3 + (radi3 * cos(i3 *  twicePi / triangleAmount)),

                    r3 + (radi3 * sin(i3 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 5

    GLfloat t4=0.19f, r4=0.02f, radi4 =.03f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t4, r4); // center of circle

    for(int i4 = 0; i4 <= triangleAmount; i4++)

    {

        glVertex2f( t4 + (radi4 * cos(i4 *  twicePi / triangleAmount)),

                    r4 + (radi4 * sin(i4 * twicePi / triangleAmount)) );

    }

    glEnd();


   ///circle 6

    GLfloat t5=0.24, r5=0.029f, radi5 =.03f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t5, r5); // center of circle

    for(int i5 = 0; i5 <= triangleAmount; i5++)

    {

        glVertex2f( t5 + (radi5 * cos(i5 *  twicePi / triangleAmount)),

                    r5 + (radi5 * sin(i5 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 7

    GLfloat t6=0.28f, r6=0.010f, radi6 =.025f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t6, r6); // center of circle

    for(int i6 = 0; i6 <= triangleAmount; i6++)

    {

        glVertex2f( t6 + (radi6 * cos(i6 *  twicePi / triangleAmount)),

                    r6 + (radi6 * sin(i6 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 8

    GLfloat t7=0.30f, r7=0.023f, radi7 =.04f;

    glColor3f(0.0f,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t7, r7); // center of circle

    for(int i7 = 0; i7 <= triangleAmount; i7++)

    {

        glVertex2f( t7 + (radi7 * cos(i7 *  twicePi / triangleAmount)),

                    r7 + (radi7 * sin(i7 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 9

    GLfloat t8=0.35f, r8=0.07f, radi8 =.035f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t8, r8); // center of circle

    for(int i8 = 0; i8 <= triangleAmount; i8++)

    {

        glVertex2f( t8 + (radi8 * cos(i8 *  twicePi / triangleAmount)),

                    r8 + (radi8 * sin(i8 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 10

    GLfloat t9=0.40f, r9=0.10f, radi9 =.035f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t9, r9); // center of circle

    for(int i9 = 0; i9 <= triangleAmount; i9++)

    {

        glVertex2f( t9 + (radi9 * cos(i9 *  twicePi / triangleAmount)),

                    r9 + (radi9 * sin(i9 * twicePi / triangleAmount)) );

    }

    glEnd();


    ///circle 11

    GLfloat t10=0.445f, r10=0.14f, radi10 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t10, r10); // center of circle

    for(int i10 = 0; i10 <= triangleAmount; i10++)

    {

        glVertex2f( t10 + (radi10 * cos(i10 *  twicePi / triangleAmount)),

                    r10 + (radi10 * sin(i10 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 12

    GLfloat t11=0.49f, r11=0.10f, radi11 =.045f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t11, r11); // center of circle

    for(int i11 = 0; i11 <= triangleAmount; i11++)

    {

        glVertex2f( t11 + (radi11 * cos(i11 *  twicePi / triangleAmount)),

                    r11 + (radi11 * sin(i11 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 13

    GLfloat t12=0.54f, r12=0.06f, radi12 =.03f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t12, r12); // center of circle

    for(int i12 = 0; i12 <= triangleAmount; i12++)

    {

        glVertex2f( t12 + (radi12 * cos(i12 *  twicePi / triangleAmount)),

                    r12 + (radi12 * sin(i12 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 14

    GLfloat t13=0.45f, r13=0.00f, radi13 =.105f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t13, r13); // center of circle

    for(int i13 = 0; i13 <= triangleAmount; i13++)

    {

        glVertex2f( t13 + (radi13 * cos(i13 *  twicePi / triangleAmount)),

                    r13 + (radi13 * sin(i13 * twicePi / triangleAmount)) );

    }

    glEnd();

///circle 15

    GLfloat t14=0.595f, r14=0.01f, radi14 =.05f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t14, r14); // center of circle

    for(int i14 = 0; i14 <= triangleAmount; i14++)

    {

        glVertex2f( t14 + (radi14 * cos(i14 *  twicePi / triangleAmount)),

                    r14 + (radi14 * sin(i14 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 16

    GLfloat t15=0.67f, r15=0.03f, radi15 =.05f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t15, r15); // center of circle

    for(int i15 = 0; i15 <= triangleAmount; i15++)

    {

        glVertex2f( t15 + (radi15 * cos(i15 *  twicePi / triangleAmount)),

                    r15 + (radi15 * sin(i15 * twicePi / triangleAmount)) );

    }

    glEnd();

    ///circle 17

   GLfloat t16=0.72f, r16=0.07f, radi16 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t16, r16); // center of circle

    for(int i16 = 0; i16 <= triangleAmount; i16++)

    {

        glVertex2f( t16 + (radi16 * cos(i16 *  twicePi / triangleAmount)),

                    r16 + (radi16 * sin(i16 * twicePi / triangleAmount)) );

    }

    glEnd();

        ///circle 18

   GLfloat t17=0.76f, r17=0.10f, radi17 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t17, r17); // center of circle

    for(int i17 = 0; i17 <= triangleAmount; i17++)

    {

        glVertex2f( t17 + (radi17 * cos(i17 *  twicePi / triangleAmount)),

                    r17 + (radi17 * sin(i17 * twicePi / triangleAmount)) );

    }

    glEnd();

       ///circle 19

   GLfloat t18=0.81f, r18=0.17f, radi18 =.055f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t18, r18); // center of circle

    for(int i18 = 0; i18 <= triangleAmount; i18++)

    {

        glVertex2f( t18 + (radi18 * cos(i18 *  twicePi / triangleAmount)),

                    r18 + (radi18 * sin(i18 * twicePi / triangleAmount)) );

    }

    glEnd();

        ///circle 20

   GLfloat t19=0.87, r19=0.20f, radi19 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t19, r19); // center of circle

    for(int i19 = 0; i19 <= triangleAmount; i19++)

    {

        glVertex2f( t19 + (radi19 * cos(i19 *  twicePi / triangleAmount)),

                    r19 + (radi19 * sin(i19 * twicePi / triangleAmount)) );

    }

    glEnd();

        ///circle 21

   GLfloat t20=0.90f, r20=0.26f, radi20 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t20, r20); // center of circle

    for(int i20 = 0; i20 <= triangleAmount; i20++)

    {

        glVertex2f( t20 + (radi20 * cos(i20 *  twicePi / triangleAmount)),

                    r20 + (radi20 * sin(i20 * twicePi / triangleAmount)) );

    }

    glEnd();


        ///circle 22

   GLfloat t211=0.95f, r211=0.31f, radi211 =.04f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t211, r211); // center of circle

    for(int i211 = 0; i211 <= triangleAmount; i211++)

    {

        glVertex2f( t211 + (radi211 * cos(i211 *  twicePi / triangleAmount)),

                    r211 + (radi211 * sin(i211 * twicePi / triangleAmount)) );

    }

    glEnd();

        ///circle 23

   GLfloat t221=1.0f, r221=0.37f, radi221 =.05f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(t221, r221); // center of circle

    for(int i221 = 0; i221 <= triangleAmount; i221++)

    {

        glVertex2f( t221 + (radi221 * cos(i221 *  twicePi / triangleAmount)),

                    r221 + (radi221 * sin(i221 * twicePi / triangleAmount)) );

    }

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.65f,0.0f);

    glVertex2f(1.0f,0.35f);

    glVertex2f(1.0f,0.0f);

    glVertex2f(0.0f,0.0f);

    glVertex2f(0.0f,0.10f);

    glVertex2f(0.20f,0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.20f,0.05f);

    glVertex2f(0.20f,0.00f);

    glVertex2f(0.35f,0.0f);

    glVertex2f(0.35f,0.05f);

    glEnd();

    glPointSize(10);

    glBegin(GL_POINTS);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.0f, 0.105f);

    glEnd();



///...................................mini circle................................./////////////////

    GLfloat p=0.11f, k=0.70f, ra=.005;

    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.812f, 0.89f, 0.98f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(p, k); // center of circle

    for(int i = 0; i <= triangleAmount; i++)

    {

        glVertex2f( p + (ra * cos(i *  twicePi / triangleAmount)),

                    k + (ra * sin(i * twicePi / triangleAmount)) );

        glColor3f(1.0f, 1.0f, 1.0f);

    }

    glEnd();




///.............................................SATELLITE 2.......................................................................................///

    glPushMatrix();

    glTranslatef(pika9,0.0f, 0.0f);

    glScalef(0.7f,0.7f,0.0f);

    glTranslatef(0.0,0.65,0);

    glPushMatrix();

    glLoadIdentity();//Reset the current matrix

    glTranslatef(-1.15,.10,0);

    glRotatef(l9,0.0,0.50,1.0);//i=how many degree you want to rotate around an axis

///body

    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.10f,0.60f);

    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.12f,0.60f);

    glColor3f(0.0f,0.0f,0.0f);

    glVertex2f(0.12f,0.65f);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.10f,0.65f);

///RIGHT WINGS

    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.125f,0.605f);

    glColor3f(0.486f, 0.561f, 0.557f);

    glVertex2f(0.175f,0.605f);

    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.175f,0.645f);

    glColor3f(0.341f, 0.561f, 0.557f);

    glVertex2f(0.125f,0.645f);

///LEFT WINGS

    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.095f,0.605f);

    glColor3f(0.486f, 0.561f, 0.557f);

    glVertex2f(0.045f,0.605f);

    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(0.045f,0.645f);

    glColor3f(0.341f, 0.561f, 0.557f);

    glVertex2f(0.095,0.645f);

    glEnd();

///LINES

    glLineWidth(2);

    glBegin(GL_LINES);

    glColor4f(1.0f, 1.0f,1.0f, 0.0f);

    ///BETWEEN BODY

    glVertex2f(0.11f,0.635f);

    glVertex2f(0.12f,0.635f);

    glEnd();

    glLineWidth(3);

    glBegin(GL_LINES);

    glColor4f(1.0f,1.0f,1.0f, 0.0f);

    ///right

    glVertex2f(0.12f,0.625f);

    glVertex2f(0.125f,0.625f);

    ///left

    glVertex2f(0.10f,0.625f);

    glVertex2f(0.095f,0.625f);

    ///upper

    glVertex2f(0.105f,0.65f);

    glVertex2f(0.105f,0.66f);

    glVertex2f(0.115f,0.65f);

    glVertex2f(0.115f,0.66f);

    ///with mini circle

    glVertex2f(0.11f,0.68f);

    glVertex2f(0.11f,0.69f);

    glVertex2f(0.12f,0.68f);

    glVertex2f(0.11f,0.69f);

    glVertex2f(0.10f,0.68f);

    glVertex2f(0.11f,0.69);

    glEnd();

    glLineWidth(1);

    glBegin(GL_LINES);

    ///MIDDLE IN RIGHT WINGS

    glVertex2f(0.125f,0.615f);

    glVertex2f(0.175f,0.615f);

    glVertex2f(0.125f,0.625f);

    glVertex2f(0.175f,0.625f);

    glVertex2f(0.125f,0.635f);

    glVertex2f(0.175f,0.635f);

    glVertex2f(0.135f,0.605f);

    glVertex2f(0.135f,0.645f);

    glVertex2f(0.145f,0.605f);

    glVertex2f(0.145f,0.645f);

    glVertex2f(0.155f,0.605f);

    glVertex2f(0.155f,0.645f);

    glVertex2f(0.165f,0.605f);

    glVertex2f(0.165f,0.645f);

    ///MIDDLE LINE IN LEFT WINGS

    glVertex2f(0.095f,0.615f);

    glVertex2f(0.045f,0.615f);

    glVertex2f(0.095f,0.625f);

    glVertex2f(0.045f,0.625f);

    glVertex2f(0.095f,0.635f);

    glVertex2f(0.045f,0.635f);

    glVertex2f(0.055f,0.605f);

    glVertex2f(0.055f,0.645f);

    glVertex2f(0.065f,0.605f);

    glVertex2f(0.065f,0.645f);

    glVertex2f(0.075f,0.605f);

    glVertex2f(0.075f,0.645f);

    glVertex2f(0.085f,0.605f);

    glVertex2f(0.085f,0.645f);

    glEnd();


    ///mini circle

    GLfloat p2=0.11f, k2=0.70f, ra2=.005;

    GLfloat twicePii = 2.0f * PI;

    glColor3f(0.812f, 0.89f, 0.98f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(p2, k2); // center of circle

    for(int i = 0; i <= triangleAmount; i++)

    {

        glVertex2f( p2 + (ra2 * cos(i *  twicePii / triangleAmount)),

                    k2 + (ra2 * sin(i * twicePii / triangleAmount)) );

        glColor3f(1.0f, 1.0f, 1.0f);

    }

    glEnd();

    ///HALF CIRCLE

    GLfloat p3=0.11f, k3=0.68f, ra3=.025;

    twicePi= -1.0f *PI;

    glColor3f(0.086f, 0.149f, 0.149f);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(p3, k3); // center of circle

    for(int i = 0; i <= triangleAmount; i++)

    {

        glVertex2f( p3 + (ra3 * cos(i *  twicePi / triangleAmount)),

                    k3 + (ra3 * sin(i * twicePi / triangleAmount)) );

        glColor3f(0.294f, 0.388f, 0.388f);

    }

    glEnd();

    l9-=0.0015f;

    glPopMatrix();

    glPopMatrix();


    glFlush(); // Render now

}

///...........Separate
void updateA22219(int value)
{
    if(APosition229 >2.0 )
        APosition229 = -1.0f;
    APosition229 += Aspeed229;
    glutPostRedisplay();
    glutTimerFunc(100, updateA22219, 0);
}

void updateB22219(int value)
{
    if(BPosition229 >2.0 )
        BPosition229 = -1.0f;
    BPosition229 += Bspeed229;
    glutPostRedisplay();
    glutTimerFunc(100, updateB22219, 0);
}
///.........Rocket
void updateP22229(int value)
{
    if(PPosition229 >2.0 )
        PPosition229 = -1.0f;
    PPosition229 += Pspeed229;
    glutPostRedisplay();
    glutTimerFunc(100, updateP22229, 0);
}


///---------------------------------------------------------Tanu Display--------------------------------------------------------------------------///

void display3331() {
    glClearColor(0.016f, 0.016f, 0.016f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

///FULL SCREEN
    glBegin(GL_QUADS);
    glColor3f(0.082f, 0.133f, 0.169f);
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);

    glColor3f(0.259f, 0.333f, 0.349f);
    glVertex2f(1.0f, 0.0f);
    glEnd();


     ///.................................Stars.........................
    glPointSize(3.0);
    glBegin(GL_POINTS);
    glColor3f(0.89f, 0.867f, 0.875f);
    glVertex2f(0.04f, 0.04f);
    glVertex2f(0.04f, 0.3f);
    glVertex2f(0.04f, 0.55f);
    glVertex2f(0.08f, 0.018f);
    glVertex2f(0.08f, 0.18f);
    glVertex2f(0.14f, 0.2f);
    glVertex2f(0.14f, 0.5f);
    glVertex2f(0.25f, 0.5f);
    glVertex2f(0.2f, 0.35f);
    glVertex2f(0.06f, 0.62f);
    glVertex2f(0.5f, 0.62f);
    glVertex2f(0.5f, 0.18f);
    glVertex2f(0.4f, 0.09f);
    glVertex2f(0.3f, 0.13f);
    glVertex2f(0.22f, 0.08f);
    glVertex2f(0.35f, 0.8f);
    glVertex2f(0.49f, 0.83f);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.3f, 0.9f);
    glVertex2f(0.45f, 0.94f);
    glVertex2f(0.45f, 0.8f);
    glVertex2f(0.53f, 0.75f);
    glVertex2f(0.63f, 0.5f);
    glVertex2f(0.63f, 0.75f);
    glVertex2f(0.69f, 0.8f);
    glVertex2f(0.73f, 0.95f);
    glVertex2f(0.94f, 0.95f);
    glVertex2f(0.86f, 0.98f);
    glVertex2f(0.8f, 0.43f);
    glVertex2f(0.75f, 0.48f);
    glVertex2f(0.7f, 0.28f);
    glVertex2f(0.7f, 0.63f);
    glVertex2f(0.45f, 0.28f);
    glVertex2f(0.6f, 0.28f);
    glVertex2f(0.5f, 0.46f);
    glVertex2f(0.08f,0.66f);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.40f,0.52f);
    glVertex2f(0.28f,0.26f);
    glVertex2f(0.40f,0.7f);
    glVertex2f(0.56f,0.06f);
    glVertex2f(0.60f,0.9f);
    glVertex2f(0.84f,0.84f);
    glVertex2f(0.12f,0.4f);
    glVertex2f(0.32f,0.4f);
    glVertex2f(0.9f,0.83f);
    glVertex2f(0.8f,0.6f);
    glVertex2f(0.8f,0.9f);
    glVertex2f(0.95f,0.86f);
    glVertex2f(0.9f,0.66f);
    glVertex2f(0.97f,0.76f);
    glVertex2f(0.88f,0.56f);
    glVertex2f(0.98f,0.6f);
    glVertex2f(0.05f,0.8f);
    glVertex2f(0.06f,0.9f);
    glVertex2f(0.09f,0.86f);
    glVertex2f(0.16f,0.96f);
    glVertex2f(0.18f,0.83f);

    ///-----------addition


    glVertex2f(0.8f, 0.04f);
    glVertex2f(0.7f, 0.3f);
    glVertex2f(0.84f, 0.55f);
    glVertex2f(0.86f, 0.018f);
    glVertex2f(0.73f, 0.18f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.84f, 0.07f);
    glVertex2f(0.88f, 0.45f);
    glVertex2f(0.92f, 0.35f);

    glVertex2f(0.791f, 0.07f);
    glVertex2f(0.813f, 0.35f);
    glVertex2f(0.945f, 0.30f);

    glVertex2f(0.84f, 0.12f);
    glVertex2f(0.88f, 0.40f);
    glVertex2f(0.96f, 0.35f);

    glVertex2f(0.98f, 0.09f);
    glVertex2f(0.93f, 0.475f);
    glVertex2f(0.89f, 0.35f);
    glEnd();



    ///--------------------------/////////////////////

    ///________________________________Thruster____________________
   /* glPushMatrix();
    glTranslatef(0.0f,APosition,0.0f);
    glScalef(0.55f,0.4f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);
    glBegin(GL_POLYGON);


    glColor3ub(161, 102, 47);
    glVertex2f(0.39f,0.72f);
    glVertex2f(0.39f,0.34f);
    glVertex2f(0.48f,0.34f);
    glVertex2f(0.48f,0.72f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.39f,0.72f);
    glVertex2f(0.48f,0.72f);
    glVertex2f(0.43f,0.76f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(131,137,150);
    glVertex2f(0.40f,0.34f); glVertex2f(0.39f,0.72f);
    glVertex2f(0.40f,0.32f);
    glVertex2f(0.47f,0.32f);
    glVertex2f(0.47f,0.34f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(20,20,20);
    glVertex2f(0.39f,0.72f);
    glVertex2f(0.39f,0.34f);
    glVertex2f(0.48f,0.34f);
    glVertex2f(0.48f,0.72f);
    glVertex2f(0.39f,0.72f);
    glVertex2f(0.43f,0.76f);
    glVertex2f(0.48f,0.72f);
    glVertex2f(0.43f,0.76f);
    glEnd();

    ///----------Main thruster Fire ----///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.39f,0.33f);
    glVertex2f(0.36f,0.25f);
    glVertex2f(0.40f,0.27f);
    glVertex2f(0.435f,0.24f);
    glVertex2f(0.45f,0.27f);
    glVertex2f(0.51f,0.25f);
    glVertex2f(0.48f,0.33f);
    glEnd();
    glPopMatrix();
    glPopMatrix();*/




    ///---------Thruster left--------///
    glPushMatrix();
    glTranslatef(0.0f,BPosition,0.0f);
    glScalef(0.55f,0.4f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);

    ///---------Thruster left--------///
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.38f,0.34f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.405f,0.33f);
    glVertex2f(0.405f,0.34f);
    glEnd();
///---------Thruster left border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.370f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.405f,0.64f);
    glVertex2f(0.3885f,0.67f);
    glVertex2f(0.370f,0.34f);
    glVertex2f(0.405f,0.34f);
    glEnd();


    ///---------Thruster Right--------///

    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(113, 112, 110);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.495f,0.33f);
    glVertex2f(0.495f,0.34f);
    glEnd();
    ///---------Thruster right border--------///
    glBegin(GL_LINES);
    glColor3ub(20, 20,20);
    glVertex2f(0.465f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);
    glVertex2f(0.505f,0.64f);
    glVertex2f(0.465f,0.34f);
    glVertex2f(0.505f,0.34f);

     glVertex2f(0.465f,0.64f);
     glVertex2f(0.485f,0.67f);

    glVertex2f(0.505f,0.64f);
    glVertex2f(0.485f,0.67f);




    glEnd();

    ///-------------Thruster left fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.34f,0.26f);
    glVertex2f(0.367f,0.28f);
    glVertex2f(0.371f,0.24f);
    glVertex2f(0.379f,0.28f);
    glVertex2f(0.398f,0.26f);
    glVertex2f(0.405f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.38f,0.33f);
    glVertex2f(0.33f,0.27f);
    glVertex2f(0.364f,0.29f);
    glVertex2f(0.367f,0.27f);
    glVertex2f(0.375f,0.29f);
    glVertex2f(0.410f,0.27f);
    glVertex2f(0.405f,0.33f);
    glEnd();
///-------------Thruster right fire-----///
    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.45f,0.26f);
    glVertex2f(0.487f,0.28f);
    glVertex2f(0.491f,0.24f);
    glVertex2f(0.496f,0.28f);
    glVertex2f(0.513f,0.26f);
    glVertex2f(0.495f,0.33f);
    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.465f,0.33f);
    glVertex2f(0.445f,0.27f);
    glVertex2f(0.484f,0.29f);
    glVertex2f(0.488f,0.27f);
    glVertex2f(0.494f,0.29f);
    glVertex2f(0.510f,0.27f);
    glVertex2f(0.495f,0.33f);
    glEnd();
    glPopMatrix();
    glPopMatrix();


    ///_____________________________________________ROCKET(START)___________________________________________________///
    ///_________ 1________///
    glPushMatrix();
    glTranslatef(0.0f,PPosition,0.0f);
    glScalef(0.55f,0.4f,0.0f);
    glTranslatef(0.515f,-0.59f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(113, 112, 110);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);
    glVertex2f(0.46f,0.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);
    glVertex2f(0.46f,0.40f);
    glEnd();

    ///----------Border----------///
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.435f,0.67f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);

    ///---------Design---------///

    glVertex2f(0.41f,0.50f);
    glVertex2f(0.46f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);

    glVertex2f(0.41f,0.40f);
    glVertex2f(0.46f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);


    glEnd();


    ///------------Rocket left fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glEnd();
///------------Rocket right fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.53f,0.37f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);

    glEnd();

    ///------------rocket bottom part----///

    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.42f,0.34f);
    glVertex2f(0.42f,0.33f);
    glVertex2f(0.45f,0.33f);
    glVertex2f(0.45f,0.34f);
    glEnd();
     ///_____________________________Rocket TOP window___________________________________///
   ///_________ 11________///
    glColor3ub(255, 215, 0);
    GLfloat xrtw1=0.435f; GLfloat yrtw1=0.56f; GLfloat rrtw1 =.015f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 12________///
    glColor3f(0.314, 0.863, 0.98);
    GLfloat xrtw2=0.432f; GLfloat yrtw2=0.56f; GLfloat rrtw2 =.012f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket TOP window(Border)___________________________________///
    ///_________ 11________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrtwb1=0.435f; GLfloat yrtwb1=0.56f; GLfloat rrtwb1 =.015f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrtwb1, yrtwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrtwb1 + (rrtwb1 * cos(i *  twicePi / lineAmount)),
                        yrtwb1 + (rrtwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
///_____________________________Rocket bottom window___________________________________///
    ///_________ 13________///
    glColor3f(0.31, 0.847, 0.973);
    GLfloat xrbw3=0.435f; GLfloat yrbw3=0.45f; GLfloat rrbw3 =.010f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrbw3, yrbw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.31, 0.847, 0.973);
            glVertex2f( xrbw3 + (rrbw3 * cos(i *  twicePi / triangleAmount)),
                        yrbw3 + (rrbw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket bottom window(Border)___________________________________///
    ///_________ 13________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrbwb3=0.435f; GLfloat yrbwb3=0.45f; GLfloat rrbwb3 =.010f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrbwb3, yrbwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrbwb3 + (rrbwb3 * cos(i *  twicePi / lineAmount)),
                        yrbwb3 + (rrbwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
    ///---------Mini Window-------------///
    ///_________ 14________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw1=0.42f; GLfloat yrmw1=0.61f; GLfloat rrmw1 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw1, yrmw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw1 + (rrmw1 * cos(i *  twicePi / triangleAmount)),
                        yrmw1 + (rrmw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw2=0.435f; GLfloat yrmw2=0.61f; GLfloat rrmw2 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw2, yrmw2); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw2 + (rrmw2 * cos(i *  twicePi / triangleAmount)),
                        yrmw2 + (rrmw2 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 16________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw3=0.45f; GLfloat yrmw3=0.61f; GLfloat rrmw3 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw3, yrmw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw3 + (rrmw3 * cos(i *  twicePi / triangleAmount)),
                        yrmw3 + (rrmw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket Mini window(Border)___________________________________///
    ///_________ 14________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb1=0.42f; GLfloat yrmwb1=0.61f; GLfloat rrmwb1 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb1, yrmwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb1 + (rrmwb1 * cos(i *  twicePi / lineAmount)),
                        yrmwb1 + (rrmwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb2=0.435f; GLfloat yrmwb2=0.61f; GLfloat rrmwb2 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb2, yrmwb2); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb2 + (rrmwb2 * cos(i *  twicePi / lineAmount)),
                        yrmwb2 + (rrmwb2 * sin(i * twicePi /lineAmount)) );
        }
    glEnd();
     ///_________ 16________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb3=0.45f; GLfloat yrmwb3=0.61f; GLfloat rrmwb3 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb3, yrmwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb3 + (rrmwb3 * cos(i *  twicePi / lineAmount)),
                        yrmwb3 + (rrmwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();

    ///-----------------------------Fire -------------///


    ///_________ Fire main 1________///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.40f,0.26f);
    glVertex2f(0.429f,0.28f);
    glVertex2f(0.444f,0.24f);
    glVertex2f(0.459f,0.28f);
    glVertex2f(0.47f,0.26f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.39f,0.27f);
    glVertex2f(0.425f,0.29f);
    glVertex2f(0.440f,0.27f);
    glVertex2f(0.458f,0.29f);
    glVertex2f(0.48f,0.27f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glPopMatrix();



    ///-----------Rocket---------End--///


///STAR 2
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(1.60f,6.00f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();

    ///STAR 3
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(2.50f,3.20f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();

    ///STAR 4
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(2.40f,4.6f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();

    ///STAR 5
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(3.40f,4.f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();


    ///STAR 6
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(3.30f,6.f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();

    ///STAR 7
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(5.10f,6.20f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();

    ///STAR 8
	glPushMatrix();
	glScalef(.15,.15,0);
	glTranslatef(4.1f,5.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(.030f,.040f);
    glVertex2f(.050f,0.030f);
    glVertex2f(.040f,.050f);
    glVertex2f(.057f,.060f);
    glVertex2f(.037f,.060f);
    glVertex2f(.030f,.080f);
    glVertex2f(.023f,.060f);
    glVertex2f(.003f,.060f);
    glVertex2f(.020f,.050f);
    glVertex2f(.010f,0.030f);
    glEnd();
    glPopMatrix();



    ///........Meteor - 1..........................................
    glPushMatrix();
    glTranslatef(OPosition,0.0f, 0.0f);
    glScalef(.2,.2,0);
	glTranslatef(1.10f,4.10f,0.0f);
    glBegin(GL_POLYGON);
    glColor4f(1.0f,1.0f,1.0f,0.5f);
    glVertex2f(0.487f,0.5f);
    glVertex2f(0.43f,0.614f);
    glVertex2f(0.514f,0.4985f);
    glEnd();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor4f(0.722f,0.718f,0.706f,0.5f);
    glVertex2f(0.487f,0.5f);
    glVertex2f(0.48f,0.499f);
    glVertex2f(0.514f,0.4985f);
    glEnd();
    glPopMatrix();

    glEnable(GL_BLEND);
    glDepthMask(GL_FALSE);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    GLfloat A81=0.5f; GLfloat P81=0.5f; GLfloat O81 =0.013f;
    glColor3f(0.945f, 0.663f, 0.165f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A81, P81); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A81 + (O81 * cos(i *  twicePi/ triangleAmount)),
                        P81 + (O81 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    ///Meteor Inside Circle
    GLfloat A82=0.505f; GLfloat P82=0.5045f; GLfloat O82 =0.005f;
    glColor3f(0.965f, 0.859f, 0.518f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A82, P82); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A82 + (O82 * cos(i *  twicePi/ triangleAmount)),
                        P82 + (O82 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();


     ///........................................Earth.....................................................///

glPushMatrix();
    glTranslatef(0.42f, -0.20f, 0.0f);
    glPushMatrix();
    glScalef(0.9,0.9,0);

    GLfloat A0=0.10f; GLfloat P0=0.32f; GLfloat O0 =0.20f;
    glColor3f(0.0f, 0.651f, 0.886f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A0, P0); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A0 + (O0 * cos(i *  twicePi/ triangleAmount)),
                        P0 + (O0 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    glPopMatrix();


    ///Earth Inside Dark Green-1
    ///1
    GLfloat A5=0.03f; GLfloat P5=0.3f; GLfloat O5 =0.0107f;
    glColor3f(0.502f, 0.753f, 0.263f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A5, P5); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A5 + (O5 * cos(i *  twicePi / triangleAmount)),
                        P5 + (O5 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();

    ///3
    GLfloat A7=0.05f; GLfloat P7=0.2f; GLfloat O7 =0.0179f;
    glColor3f(0.502f, 0.753f, 0.263f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A7, P7); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A7 + (O7 * cos(i *  twicePi / triangleAmount)),
                        P7 + (O7 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///4
    GLfloat A8=0.1f; GLfloat P8=0.4f; GLfloat O8 =0.0135f;
    glColor3f(0.502f, 0.753f, 0.263f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A8, P8); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A8 + (O8 * cos(i *  twicePi / triangleAmount)),
                        P8 + (O8 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///5
    GLfloat A9=0.18f; GLfloat P9=0.3f; GLfloat O9 =0.0205f;
    glColor3f(0.502f, 0.753f, 0.263f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A9, P9); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A9 + (O9 * cos(i *  twicePi / triangleAmount)),
                        P9 + (O9 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///7
    GLfloat A1000=0.09f; GLfloat P1000=0.3f; GLfloat O1000 =0.0143f;
    glColor3f(0.502f, 0.753f, 0.263f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A1000, P1000); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A1000 + (O1000 * cos(i *  twicePi / triangleAmount)),
                        P1000 + (O1000 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();




    /// ................EARTH'S Border........................................................///
    glLineWidth(3);
    GLfloat A29=0.54f; GLfloat P29=0.32f; GLfloat O29 =0.27f;
    glColor3f(0.259f, 0.333f, 0.349f);

	glEnd();


    glPopMatrix();
    glPopMatrix();
    glPopMatrix();


	///..................................Planet.......Neptune....................................///
	glPushMatrix();
	glTranslatef(0.05f,0.2f,0.0f);
	glScalef(0.6f,0.6f,0.0f);
    GLfloat A30=0.09f; GLfloat P30=0.9f; GLfloat O30 =0.13f;
    glColor3f(0.290f, 0.451f, 0.729f);  // A bluish color for Neptune
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A30, P30); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A30 + (O30 * cos(i *  twicePi / triangleAmount)),
                        P30 + (O30 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();

    ///Black Spot
    ///6.
    GLfloat A43=0.13f; GLfloat P43=0.89f; GLfloat O43 =0.022f;
      glColor3f(0.160f, 0.251f, 0.410f); // A bluish color for Neptune    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A43, P43); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A43 + (O43 * cos(i *  twicePi / triangleAmount)),
                        P43 + (O43 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 6
    GLfloat A44=0.13f; GLfloat P44=0.89f; GLfloat O44 =0.013f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A44, P44); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A44 + (O44 * cos(i *  twicePi / triangleAmount)),
                        P44 + (O44 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///7.
    GLfloat A45=0.194f; GLfloat P45=0.93f; GLfloat O45 =0.022f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A45, P45); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A45 + (O45 * cos(i *  twicePi / triangleAmount)),
                        P45 + (O45 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 7
    GLfloat A46=0.19f; GLfloat P46=0.93f; GLfloat O46 =0.013f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A46, P46); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A46 + (O46 * cos(i *  twicePi / triangleAmount)),
                        P46 + (O46 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///8.
    GLfloat A47=0.15f; GLfloat P47=0.98f; GLfloat O47 =0.03f;
  glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A47, P47); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A47 + (O47 * cos(i *  twicePi / triangleAmount)),
                        P47 + (O47 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 8
    GLfloat A48=0.15f; GLfloat P48=0.985f; GLfloat O48 =0.019f;
    glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A48, P48); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A48 + (O48 * cos(i *  twicePi / triangleAmount)),
                        P48 + (O48 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///9.
    GLfloat A49=0.11f; GLfloat P49=0.94f; GLfloat O49 =0.015f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A49, P49); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A49 + (O49 * cos(i *  twicePi / triangleAmount)),
                        P49 + (O49 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 9
    GLfloat A50=0.11f; GLfloat P50=0.94f; GLfloat O50 =0.01f;
   glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A50, P50); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A50 + (O50 * cos(i *  twicePi / triangleAmount)),
                        P50 + (O50 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///10.
    GLfloat A51=0.07f; GLfloat P51=0.9f; GLfloat O51 =0.022f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A51, P51); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A51 + (O51 * cos(i *  twicePi / triangleAmount)),
                        P51 + (O51 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 10
    GLfloat A52=0.07f; GLfloat P52=0.9f; GLfloat O52 =0.013f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A52, P52); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A52 + (O52 * cos(i *  twicePi / triangleAmount)),
                        P52 + (O52 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///12.
    GLfloat A53=0.09f; GLfloat P53=0.99f; GLfloat O53 =0.025f;
      glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A53, P53); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A53 + (O53 * cos(i *  twicePi / triangleAmount)),
                        P53 + (O53 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 12
    GLfloat A54=0.09f; GLfloat P54=0.99f; GLfloat O54 =0.015f;
      glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A54, P54); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A54 + (O54 * cos(i *  twicePi / triangleAmount)),
                        P54 + (O54 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///13.
    GLfloat A55=0.038f; GLfloat P55=0.95f; GLfloat O55 =0.02f;
   glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A55, P55); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A55 + (O55 * cos(i *  twicePi / triangleAmount)),
                        P55 + (O55 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    /// Inside Round of Number 13
    GLfloat A56=0.038f; GLfloat P56=0.95f; GLfloat O56 =0.012f;
   glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A56, P56); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A56 + (O56 * cos(i *  twicePi / triangleAmount)),
                        P56 + (O56 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();

    /// Small Circle
    ///1.
    GLfloat A57=0.04f; GLfloat P57=0.995f; GLfloat O57 =0.015f;
  glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A57, P57); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A57 + (O57 * cos(i *  twicePi / triangleAmount)),
                        P57 + (O57 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///2.
    GLfloat A58=0.06f; GLfloat P58=0.835f; GLfloat O58 =0.01f;
  glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A58, P58); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A58 + (O58 * cos(i *  twicePi / triangleAmount)),
                        P58 + (O58 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///3.
    GLfloat A59=0.03f; GLfloat P59=0.9f; GLfloat O59 =0.013f;
    glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A59, P59); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A59 + (O59 * cos(i *  twicePi / triangleAmount)),
                        P59 + (O59 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///4.
    GLfloat A60=0.075f; GLfloat P60=0.945f; GLfloat O60 =0.013f;
   glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A60, P60); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A60 + (O60 * cos(i *  twicePi / triangleAmount)),
                        P60 + (O60 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///6.
    GLfloat A62=0.007f; GLfloat P62=0.97f; GLfloat O62 =0.013f;
      glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A62, P62); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A62 + (O62 * cos(i *  twicePi / triangleAmount)),
                        P62 + (O62 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///7.
    GLfloat A63=0.007f; GLfloat P63=0.92f; GLfloat O63 =0.01f;
     glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A63, P63); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A63 + (O63 * cos(i *  twicePi / triangleAmount)),
                        P63 + (O63 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    ///8.
    GLfloat A64=0.16f; GLfloat P64=0.92f; GLfloat O64 =0.01f;
   glColor3f(0.160f, 0.251f, 0.410f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A64, P64); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A64 + (O64 * cos(i *  twicePi / triangleAmount)),
                        P64 + (O64 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();
    glPopMatrix();

    ///.............................................Planet...........MARS....................................///
    GLfloat A31 = 0.50f;
GLfloat P31 = 0.94f;
GLfloat O31 = 0.112f;

// Set a more realistic and beautiful color for Mars
glColor3f(0.678f, 0.196f, 0.106f);  // A reddish color for Mars

glBegin(GL_TRIANGLE_FAN);
    glVertex2f(A31, P31); // center of circle
    for(int i = 0; i <= triangleAmount; i++) {
        glColor3f(0.878f, 0.4f, 0.263f);  // Border color for the circle
        glVertex2f(A31 + (O31 * cos(i * twicePi / triangleAmount)),
                    P31 + (O31 * sin(i * twicePi / triangleAmount)));
    }
glEnd();


    ///Planet...........Venus
    GLfloat A32=0.9f; GLfloat P32=0.20f; GLfloat O32 =0.045f;
    glColor3f(1.0,0.0,0.5);  // A yellowish-white color for Venus
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A32, P32); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
               glColor3f(0.545f, 0.439f, 0.231f);  // Border color for the circle
            glVertex2f( A32 + (O32 * cos(i *  twicePi/ triangleAmount)),
                        P32 + (O32 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    ///Circle Starts From 81

    ///...............................Planet...............Jupiter................................
    GLfloat A65=0.85f; GLfloat P65=0.90f; GLfloat O65 =0.065f;
 glColor3f(0.737f, 0.647f, 0.529f);  // A warm and subtle color for Jupiter
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A65, P65); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
                glColor3f(0.827f, 0.686f, 0.541f);  // Border color for the circle
            glVertex2f( A65 + (O65 * cos(i *  twicePi / triangleAmount)),
                        P65 + (O65 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();






///----------Saturn


glPushMatrix();
glScalef(0.7f, 0.9f, 0.0f);
glTranslatef(0.05f, 0.3f, 0.0f);

// Color for the main body of Saturn
glColor3f(0.824f, 0.518f, 0.337f); // A warm brownish color
drawEllipse3331(0.4f, 0.4f, 0.05f, 0.05f, 100);

// Color for the ring of Saturn
glColor3f(0.91f, 0.765f, 0.608f); // A pale yellowish color for the ring
drawEllipse3332(0.4f, 0.4f, 0.07f, 0.01f, 100);

// Color for the detail on the surface
glBegin(GL_QUADS);
glColor3f(0.725f, 0.467f, 0.306f); // A darker shade for some surface details
glVertex2f(0.351f, 0.413f);
glVertex2f(0.351f, 0.404f);
glVertex2f(0.449f, 0.404f);
glVertex2f(0.449f, 0.413f);
glEnd();

glPopMatrix();

///..............................More PLANET...................................................///

    /// PLANET A
    GLfloat A66=0.20f; GLfloat P66=0.20f; GLfloat O66 =0.01f;
    glColor3f(0.212f, 0.341f, 0.431f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A66, P66); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A66 + (O66 * cos(i *  twicePi / triangleAmount)),
                        P66 + (O66 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();

    ///PLANET B

    GLfloat A67=0.70f; GLfloat P67=0.50f; GLfloat O67 =0.01f;
    glColor3f(0.43f, 0.06f, 0.49f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A67, P67); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A67 + (O67 * cos(i *  twicePi / triangleAmount)),
                        P67 + (O67 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();

    ///PLANET C
    GLfloat A68=0.80f; GLfloat P68=0.50f; GLfloat O68 =0.01f;
    glColor3f(0.243f, 0.306f, 0.349f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A68, P68); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A68 + (O68 * cos(i *  twicePi / triangleAmount)),
                        P68 + (O68 * sin(i * twicePi / triangleAmount)) );

        }
      glEnd();


      ///............Moon.................///////
    GLfloat A69=0.30f; GLfloat P69=0.25f; GLfloat O69 =0.03f;
     glColor3f(0.925f, 0.925f, 0.925f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A69, P69); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A69 + (O69 * cos(i *  twicePi / triangleAmount)),
                        P69 + (O69 * sin(i * twicePi / triangleAmount)) );

        }
      glEnd();

      ///PLANET E
    GLfloat A70=0.15f; GLfloat P70=0.85f; GLfloat O70 =0.01f;
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A70, P70); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A70 + (O70 * cos(i *  twicePi / triangleAmount)),
                        P70 + (O70 * sin(i * twicePi / triangleAmount)) );

        }
    glEnd();




    ///...................................Satellite...................................................///
    glPushMatrix();
    glScalef(0.2f,0.2f,0.03f);
    glTranslatef(1.8f,0.4f, 0.0f);
    glRotatef(P,0.0,0.30,1.0);
    ///body
    glBegin(GL_QUADS);
    glColor3f(0.071f, 0.035f, 0.035f);
    glVertex2f(0.10f,0.60f);
    glColor3f(0.898f,0.898f,0.898f);
    glVertex2f(0.12f,0.60f);
    glColor3f(0.898f,0.898f,0.898f);
    glVertex2f(0.12f,0.65f);
    glColor3f(0.071f, 0.035f, 0.035f);
    glVertex2f(0.10f,0.65f);
    ///RIGHT WINGS
    glColor3f(0.341f, 0.561f, 0.557f);
    glVertex2f(0.125f,0.605f);
    glColor3f(0.486f, 0.561f, 0.557f);
    glVertex2f(0.175f,0.605f);
    glColor3f(0.486f, 0.561f, 0.557f);
    glVertex2f(0.175f,0.645f);
    glColor3f(0.341f, 0.561f, 0.557f);
    glVertex2f(0.125f,0.645f);
    ///LEFT WINGS
    glColor3f(0.341f, 0.561f, 0.557f);
    glVertex2f(0.095f,0.605f);
    glColor3f(0.486f, 0.561f, 0.557f);
    glVertex2f(0.045f,0.605f);
    glColor3f(0.486f, 0.561f, 0.557f);
    glVertex2f(0.045f,0.645f);
    glColor3f(0.341f, 0.561f, 0.557f);
    glVertex2f(0.095,0.645f);
    glEnd();
///LINES



    ///mini circle
    GLfloat A83=0.11f, P83=0.70f, O83=.005;
    GLfloat twicePi = 2.0f * PI;
    glColor3f(0.812f, 0.89f, 0.98f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(A83, P83); // center of circle

    glEnd();
    ///HALF CIRCLE
    GLfloat A84=0.11f, P84=0.68f, O84=.025;
    twicePi= -1.0f *PI;
    glColor3f(0.086f, 0.149f, 0.149f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(A84, P84); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( A84 + (O84 * cos(i *  twicePi / triangleAmount)),
                    P84 + (O84 * sin(i * twicePi / triangleAmount)) );
        glColor3f(0.294f, 0.388f, 0.388f);
    }
    glEnd();
    P+=0.003f;
    glPopMatrix();







glFlush();
}



///...........Separate
void updateA3331(int value)
{
    if(APosition >2.0 )
        APosition = -1.0f;
    APosition += Aspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateA3331, 0);
}

void updateB3331(int value)
{
    if(BPosition >2.0 )
        BPosition = -1.0f;
    BPosition += Bspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateB3331, 0);
}
///.........Rocket
void updateP3331(int value)
{
    if(PPosition >2.0 )
        PPosition = -1.0f;
    PPosition += Pspeed;
    glutPostRedisplay();
    glutTimerFunc(100, updateP3331, 0);
}


///-----------------tanu dispaly end









                                             ///--------------sharup display start

void display441()
{
    glClearColor(0.11f, 0.271f, 0.49f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

///........................................................full screen................................................................................................
    // Draw the sky and space background
    //-------------1--------------
    glBegin(GL_QUADS);
    glColor3f(0.859, 0.400, 0.325);  // Mars surface color
    glVertex2f(0.0f, 0.44f);

    glColor3f(0.859, 0.400, 0.325);  // Mars surface color
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(1.0f, 0.0f);

    glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(1.0f, 0.44f);
    glEnd();

    //--------------2---------------
    glBegin(GL_QUADS);
    glColor4f(0.859, 0.400, 0.325, 0.8);  // Mars surface color with lower density
    glVertex2f(0.0f, 0.44f);

    glColor4f(0.859, 0.400, 0.325, 0.3);  // Lower density Mars color
    glVertex2f(1.0f, 0.44f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(1.0f, 0.66f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(0.0f, 0.66f);
    glEnd();

    //--------------3---------------
    glBegin(GL_QUADS);
    glColor4f(0.149, 0.149, 0.149, 0.8);  // Darker space color with lower density
    glVertex2f(0.0f, 0.66f);

    glColor4f(0.149, 0.149, 0.149, 0.4);  // Lower density space color
    glVertex2f(1.0f, 0.66f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(1.0f, 0.84f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(0.0f, 0.84f);
    glEnd();

    //--------------4---------------
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(0.0f, 0.84f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(1.0f, 0.84f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(1.0f, 1.0f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(0.0f, 1.0f);
    glEnd();

    ///-------------------star---------point
    glPointSize(1.5);
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.10f, 0.99f);
    glVertex2f(0.05f, 0.68f);
    glVertex2f(0.15f, 0.75f);
    glVertex2f(0.20f, 0.80f);
    glVertex2f(0.25f, 0.65f);
    glVertex2f(0.30f, 0.694f);
    glVertex2f(0.35f, 0.763f);
    glVertex2f(0.45f, 0.72f);
    glVertex2f(0.55f, 0.70f);
    glVertex2f(0.60f, 0.77f);
    glVertex2f(0.65f, 0.85f);
    glVertex2f(0.70f, 0.73f);
    glVertex2f(0.75f, 0.79f);
    glVertex2f(0.80f, 0.75f);
    glVertex2f(0.85f, 0.87f);
    glVertex2f(0.90f, 0.88f);
    glVertex2f(0.95f, 0.99f);
    glVertex2f(0.02f, 0.81f);
    glVertex2f(0.08f, 0.91f);
    glVertex2f(0.13f, 0.85f);
    glVertex2f(0.28f, 0.89f);
    glVertex2f(0.39f, 0.97f);
    glVertex2f(0.425f,0.86f);
    glVertex2f(0.53f, 0.81f);
    glVertex2f(0.54f, 0.90f);
    glVertex2f(0.535f,0.93f);
    glVertex2f(0.66f, 0.91f);
    glVertex2f(0.73f, 0.75f);
    glVertex2f(0.81f, 0.77f);
    glVertex2f(0.87f, 0.77f);
    glVertex2f(0.92f, 0.86f);
    glVertex2f(0.86f, 0.99f);
    glVertex2f(0.99f, 0.93f);
    glVertex2f(0.24f, 0.99f);


    glEnd();

    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.07f, 0.90f);
    glVertex2f(0.02f, 0.80f);
    glVertex2f(0.10f, 0.760f);
    glVertex2f(0.20f, 0.72f);
    glVertex2f(0.26f, 0.69f);
    glVertex2f(0.22f, 0.95f);
    glVertex2f(0.50f, 0.912f);
    glVertex2f(0.67f, 0.81f);
    glVertex2f(0.45f, 0.95f);
    glVertex2f(0.91f, 0.86f);
    glEnd();



    glPushMatrix();
    glTranslatef(meteorP2,meteorP1,0.0f);

    ///Meteor - 1
    glPushMatrix();
    glScalef(.2,.2,0);
	glTranslatef(1.10f,4.10f,0.0f);
    glBegin(GL_POLYGON);
    glColor4f(1.0f,1.0f,1.0f,0.5f);
    glVertex2f(0.487f,0.5f);
    glVertex2f(0.43f,0.614f);
    glVertex2f(0.514f,0.4985f);
    glEnd();
    glPushMatrix();
    //glScalef(0.5f,0.5f,0.0f);
    glBegin(GL_POLYGON);
    glColor4f(0.722f,0.718f,0.706f,0.5f);
    glVertex2f(0.487f,0.5f);
    glVertex2f(0.48f,0.499f);
    glVertex2f(0.514f,0.4985f);
    glEnd();
    glPopMatrix();

    glEnable(GL_BLEND);
    glDepthMask(GL_FALSE);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    GLfloat A63=0.5f; GLfloat P63=0.5f; GLfloat O63 =0.012f;
    glColor3f(0.945f, 0.663f, 0.165f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A63, P63); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A63 + (O63 * cos(i *  twicePi/ triangleAmount)),
                        P63 + (O63 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    ///Meteor Inside Circle
    GLfloat A64=0.505f; GLfloat P64=0.5045f; GLfloat O64 =0.005f;
    glColor3f(0.965f, 0.859f, 0.518f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(A64, P64); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( A64 + (O64 * cos(i *  twicePi/ triangleAmount)),
                        P64 + (O64 * sin(i * twicePi / triangleAmount)));
        }
    glEnd();
    glPopMatrix();
    k +=0.009f;
    glPopMatrix();


    glPopMatrix();



    ///----------------for stop seeing metor

     //-------------1--------------
    glBegin(GL_QUADS);
    glColor3f(0.859, 0.400, 0.325);  // Mars surface color
    glVertex2f(0.0f, 0.44f);

    glColor3f(0.859, 0.400, 0.325);  // Mars surface color
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(1.0f, 0.0f);

    glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(1.0f, 0.44f);
    glEnd();

    //--------------2---------------
    glBegin(GL_QUADS);
    glColor4f(0.859, 0.400, 0.325, 0.8);  // Mars surface color with lower density
    glVertex2f(0.0f, 0.44f);

    glColor4f(0.859, 0.400, 0.325, 0.3);  // Lower density Mars color
    glVertex2f(1.0f, 0.44f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(1.0f, 0.66f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(0.0f, 0.66f);
    glEnd();


    ///Moonland Right side
    glBegin(GL_QUADS);
    glColor3f(0.616, 0.247, 0.208);   // Mars surface color
    glVertex2f(.00f,0.16f);
    glVertex2f(0.72f,0.16f);
  glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(0.72f,0.0f);
    glVertex2f(.00f,0.0f);
    glEnd();

    ///-----------------------------------------------///

     /// Draw phobos
glColor3f(0.7f, 0.2f, 0.1f);// Brighter yellow for the sun
GLfloat xs = 0.19f; // Center x-coordinate
GLfloat ys = 0.89f; // Center y-coordinate
GLfloat rs = 0.04f; // Sun radius

glBegin(GL_TRIANGLE_FAN);
glVertex2f(xs, ys); // Center of circle

for (int i = 0; i <= triangleAmount; i++) {
    // Slightly brighter orange for sun rays
   glColor3f(0.5f, 0.2f, 0.1f);

    // Calculate vertex coordinates on the circle
    float x = xs + (rs * cos(i * twicePi / triangleAmount));
    float y = ys + (rs * sin(i * twicePi / triangleAmount));

    glVertex2f(x, y);
}

glEnd();




/// Draw deimos
glColor3f(0.7f, 0.2f, 0.1f);
GLfloat xd = 0.90f; // Center x-coordinate
GLfloat yd = 0.89f; // Center y-coordinate
GLfloat rd = 0.04f; // Sun radius

glBegin(GL_TRIANGLE_FAN);
glVertex2f(xd, yd); // Center of circle

for (int i = 0; i <= triangleAmount; i++) {
    // Slightly brighter orange for sun rays
   glColor3f(0.6f, 0.3f, 0.2f);
    // Calculate vertex coordinates on the circle
    float x = xd + (rd * cos(i * twicePi / triangleAmount));
    float y = yd + (rd * sin(i * twicePi / triangleAmount));

    glVertex2f(x, y);
}

glEnd();


    ///_______mountain 1_______//
glBegin(GL_TRIANGLES);

/// Dark brown color for the base of the mountain
glColor3f(0.545, 0.271, 0.075); // Brown
glVertex2f(-0.02f, 0.44f);

// Light brown color for the middle part of the mountain
glColor3f(0.627, 0.322, 0.176); // Light Brown
glVertex2f(0.38f, 0.78f);

// Snowy white color for the peak of the mountain
glColor3f(1.0, 1.0, 1.0); // White
glVertex2f(0.7f, 0.44f);
glEnd();

///_______mountain 2_______//
glBegin(GL_TRIANGLES);

// Dark brown color for the base of the mountain
glColor3f(0.545, 0.271, 0.075); // Brown
glVertex2f(0.4f, 0.42f);

// Light brown color for the middle part of the mountain
glColor3f(0.627, 0.322, 0.176); // Light Brown
glVertex2f(0.72f, 0.74f);

// Snowy white color for the peak of the mountain
glColor3f(1.0, 1.0, 1.0); // White
glVertex2f(1.1f, 0.42f);
glEnd();


///_______mountain 3_______//
glBegin(GL_TRIANGLES);

// Dark brown color for the base of the mountain
glColor3f(0.545, 0.271, 0.075); // Brown
glVertex2f(0.7f, 0.41f);

// Light brown color for the middle part of the mountain
glColor3f(0.627, 0.322, 0.176); // Light Brown
glVertex2f(0.90f, 0.68f);

// Snowy white color for the peak of the mountain
glColor3f(1.0, 1.0, 1.0); // White
glVertex2f(1.1f, 0.41f);
glEnd();



///-------------

///---------------------////

///------------circle rock 1
    GLfloat mt21 =0.13f, mr21=0.18f, mradi21 =.02f;
    twicePi = 2.0f * PI;

      glColor3f(0.859f, 0.412f, 0.235f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mt21, mr21); // center of circle
    for(int i1 = 0; i1 <= triangleAmount; i1++)
    {
        glVertex2f( mt21 + (mradi21 * cos(i1 *  twicePi / triangleAmount)),
                    mr21 + (mradi21 * sin(i1 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///------------circle rock 2
    GLfloat mt22 =0.08f, mr22=0.13f, mradi22 =.01f;
    twicePi = 2.0f * PI;

      glColor3f(0.859f, 0.412f, 0.235f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mt22, mr22); // center of circle
    for(int i2 = 0; i2 <= triangleAmount; i2++)
    {
        glVertex2f( mt22 + (mradi22 * cos(i2 *  twicePi / triangleAmount)),
                    mr22 + (mradi22 * sin(i2 * twicePi / triangleAmount)) );
    }
    glEnd();


        ///------------circle rock 3
    GLfloat mt23 =0.27f, mr23=0.23f, mradi23 =.034f;
    twicePi = 2.0f * PI;

      glColor3f(0.859f, 0.412f, 0.235f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(mt23, mr23); // center of circle
    for(int i3 = 0; i3 <= triangleAmount; i3++)
    {
        glVertex2f( mt23 + (mradi22 * cos(i3 *  twicePi / triangleAmount)),
                    mr23 + (mradi22 * sin(i3 * twicePi / triangleAmount)) );
    }
    glEnd();

/// mars rock and stones


glBegin(GL_POLYGON);
  glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.1f,.080f);
    glVertex2f(.16f,0.090f);
    glVertex2f(.18f,.12f);
    glVertex2f(.17f,.18f);
      glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.11f,.18f);
    glVertex2f(.10f,.11f);
    glColor3f(0.8f, 0.4f, 0.2f);
    glVertex2f(.09f,.11f);
    glVertex2f(.1f,.08f);
glEnd();

glBegin(GL_POLYGON);
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.3f,.1f);
    glVertex2f(.36f,0.08f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.42f,.123f);
    glVertex2f(.32f,.13f);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.12f,.22f);
    glVertex2f(.16f,0.23f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.19f,.255f);
    glVertex2f(.15f,.28f);
     glVertex2f(.1f,.26f);
     glVertex2f(.12f,.22f);

    glEnd();



    glBegin(GL_POLYGON);// B-1 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.91f,.33f);
    glVertex2f(.945f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.95f,.39f);
    glVertex2f(.93f,.41f);
    glVertex2f(.90f,.39f);
    glVertex2f(.91f,.33f);
    glEnd();

    glBegin(GL_POLYGON);// B-2 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.81f,.33f);
    glVertex2f(.845f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.85f,.39f);
    glVertex2f(.83f,.41f);
    glVertex2f(.80f,.39f);
    glVertex2f(.81f,.33f);
    glEnd();

    glBegin(GL_POLYGON);// B-3 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.11f,.33f);
    glVertex2f(.145f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.15f,.39f);
    glVertex2f(.13f,.41f);
    glVertex2f(.10f,.39f);
    glVertex2f(.11f,.33f);
    glEnd();

    glBegin(GL_POLYGON);// B-4 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.21f,.33f);
    glVertex2f(.245f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.25f,.39f);
    glVertex2f(.23f,.41f);
    glVertex2f(.20f,.39f);
    glVertex2f(.21f,.33f);
    glEnd();

    glBegin(GL_POLYGON);// B-6 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.41f,.33f);
    glVertex2f(.445f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.45f,.39f);
    glVertex2f(.43f,.41f);
    glVertex2f(.40f,.39f);
    glVertex2f(.41f,.33f);
    glEnd();

    glBegin(GL_POLYGON);// B-7 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.66f,.33f);
    glVertex2f(.70f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.70f,.39f);
    glVertex2f(.68f,.41f);
    glVertex2f(.65f,.39f);
    glVertex2f(.66f,.33f);
    glEnd();


    glBegin(GL_POLYGON);// B-8 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.61f,.13f);
    glVertex2f(.645f,0.15f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.65f,.19f);
    glVertex2f(.63f,.21f);
    glVertex2f(.60f,.19f);
    glVertex2f(.61f,.13f);
    glEnd();

    glBegin(GL_POLYGON);// B-9 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.74f,.23f);
    glVertex2f(.785f,0.25f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.79f,.29f);
    glVertex2f(.77f,.31f);
    glVertex2f(.74f,.29f);
    glVertex2f(.75f,.23f);
    glEnd();



    glBegin(GL_POLYGON);// B-10 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.91f,.03f);
    glVertex2f(.945f,0.035f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.95f,.139f);
    glVertex2f(.93f,.141f);
    glVertex2f(.90f,.039f);
    glVertex2f(.91f,.033f);
    glEnd();

    glBegin(GL_POLYGON);// B-11 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.51f,.03f);
    glVertex2f(.545f,0.035f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.55f,.139f);
    glVertex2f(.53f,.141f);
    glVertex2f(.50f,.039f);
    glVertex2f(.51f,.033f);
    glEnd();

    glBegin(GL_POLYGON);// B-12 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.46f,.23f);
    glVertex2f(.495f,0.265f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.50f,.279f);
    glVertex2f(.48f,.341f);
    glVertex2f(.45f,.289f);
    glVertex2f(.46f,.233f);
    glEnd();

    ///----------updated
     glBegin(GL_POLYGON);// B-13 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.91f,.03f);
    glVertex2f(.945f,0.035f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.95f,.139f);
    glVertex2f(.93f,.141f);
    glVertex2f(.90f,.039f);
    glVertex2f(.91f,.033f);
    glEnd();


  ///----------------------------sharup part start

///Man in Mars
    ///***********************Man
    GLfloat m=0.2f, a=0.28f, n =0.02f;
    glPushMatrix();
    glScalef(0.7,0.6,0);
    glTranslatef(positions4 , 0.257f, 0.0f);
    glTranslatef(+0.4f, 0.0f, 0.0f);
    glColor3f(0.78f, 0.788f, 0.839f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(m, a); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( m + (n * cos(i *  twicePi / triangleAmount)),
                       a + (n * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();

    ///Border
    glLineWidth(1);
    GLfloat m1=0.2f; GLfloat a12=0.28f; GLfloat n1 =0.02f;
    glColor3f(0.008f,0.043f,0.031f);
	glBegin(GL_LINE_LOOP);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    m1 + (n1 * cos(i *  twicePi / lineAmount)),
			    a12 + (n1  * sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    ///Helmate glass
    glVertex2f(0.181f,0.288f);
    glVertex2f(0.218f,0.288f);
    glVertex2f(0.21f,0.27f);
    glVertex2f(0.182f,0.27f);
    ///Neck
   glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.182f,0.263f);
    glVertex2f(0.175f,0.235f);
    glVertex2f(0.224f,0.235f);
    glVertex2f(0.218f,0.265f);




    ///Right Hand with Sholder
    glVertex2f(0.218f,0.265f);
    glVertex2f(0.224f,0.235f);
    glVertex2f(0.255f,0.24f);
    glVertex2f(0.243f,0.26f);
    ///Right Hand Rest part
    glVertex2f(0.255f,0.24f);
    glVertex2f(0.243f,0.26f);
    glVertex2f(0.26f,0.276f);
    glVertex2f(0.27f,0.27f);

    ///Left Hand with Sholder
    glVertex2f(0.182f,0.263f);
    glVertex2f(0.175f,0.235f);
    glVertex2f(0.144f,0.24f);
    glVertex2f(0.157f,0.26f);

    ///Left Hand Rest part
    glVertex2f(0.144f,0.24f);
    glVertex2f(0.157f,0.26f);
    glVertex2f(0.14f,0.276f);
    glVertex2f(0.13f,0.27f);
    ///Body
    glVertex2f(0.175f,0.235f);
    glVertex2f(0.175f,0.19f);
    glVertex2f(0.224f,0.19f);
    glVertex2f(0.224f,0.235f);
    ///Pant Upper Part
    glVertex2f(0.175f,0.19f);
    glVertex2f(0.173f,0.175f);
    glVertex2f(0.226f,0.175f);
    glVertex2f(0.224f,0.19f);

    ///Right Leg1
    glVertex2f(0.198f,0.175f);
    glVertex2f(0.206f,0.14f);
    glVertex2f(0.229f,0.14f);
    glVertex2f(0.226f,0.175f);
    ///Right Leg2
    glVertex2f(0.206f,0.14f);
    glVertex2f(0.209f,0.12f);
    glVertex2f(0.232f,0.118f);
    glVertex2f(0.229f,0.14f);
    ///Right Leg shoe
    glVertex2f(0.208f,0.12f);
    glVertex2f(0.208f,0.1f);
    glVertex2f(0.24f,0.1f);
    glVertex2f(0.237f,0.116f);
    ///Left Leg1
    glVertex2f(0.173f,0.175f);
    glVertex2f(0.1667f,0.14f);
    glVertex2f(0.1897f,0.14f);
    glVertex2f(0.199f,0.175f);
    ///Left Leg2
    glVertex2f(0.1667f,0.14f);
    glVertex2f(0.1664f,0.12f);
    glVertex2f(0.1894f,0.117f);
    glVertex2f(0.1897f,0.14f);
    ///Left Leg shoe
    glVertex2f(0.159f,0.117f);
    glVertex2f(0.159f,0.1f);
    glVertex2f(0.1895f,0.1f);
    glVertex2f(0.1895f,0.12f);
    glEnd();

    ///Right Hand
    GLfloat m13=0.27f, a13=0.278f, n13 =0.009f;

    glColor3f(0.78f, 0.788f, 0.839f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(m13, a13); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( m13 + (n13 * cos(i *  twicePi / triangleAmount)),
                       a13 + (n13 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();

    /// Right Border
    glLineWidth(1);
    GLfloat m14=0.27f; GLfloat a14=0.278f; GLfloat n14 =0.009f;
    glColor3f(0.008f,0.043f,0.031f);
	glBegin(GL_LINE_LOOP);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    m14 + (n14 * cos(i *  twicePi / lineAmount)),
			    a14 + (n14  * sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	///Left Hand
    GLfloat m15=0.13f, a15=0.278f, n15 =0.009f;

    glColor3f(0.78f, 0.788f, 0.839f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(m15, a15); // center of circle
        for(int i = 0; i <= triangleAmount;i++) {
            glVertex2f( m15 + (n15 * cos(i *  twicePi / triangleAmount)),
                       a15 + (n15 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();

    /// Left Border
    glLineWidth(1);
    GLfloat m16=0.13f; GLfloat a16=0.278f; GLfloat n16 =0.009f;
    glColor3f(0.008f,0.043f,0.031f);
	glBegin(GL_LINE_LOOP);
		for(int i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    m16 + (n16 * cos(i *  twicePi / lineAmount)),
			    a16 + (n16  * sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

    ///Detailing
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.008f,0.043f,0.031f);

    ///Belt
    glVertex2f(0.175f,0.19f);
    glVertex2f(0.175f,0.2f);

    glVertex2f(0.224f,0.2f);
    glVertex2f(0.224f,0.19f);

    glVertex2f(0.175f,0.2f);
    glVertex2f(0.224f,0.2f);

    glVertex2f(0.175f,0.19f);
    glVertex2f(0.224f,0.19f);

    ///Middle Line
    glVertex2f(0.18f,0.19f);
    glVertex2f(0.18f,0.2f);

    glVertex2f(0.19f,0.19f);
    glVertex2f(0.19f,0.2f);

    glVertex2f(0.2f,0.19f);
    glVertex2f(0.2f,0.2f);

    glVertex2f(0.21f,0.19f);
    glVertex2f(0.21f,0.2f);

    glVertex2f(0.22f,0.19f);
    glVertex2f(0.22f,0.2f);

    ///Neck Border
    glVertex2f(0.187f,0.263f);
    glVertex2f(0.182f,0.263f);

    glVertex2f(0.215f,0.265f);
    glVertex2f(0.218f,0.265f);

    ///Right Hand with Sholder Border
    glVertex2f(0.218f,0.265f);
    glVertex2f(0.243f,0.26f);

    glVertex2f(0.255f,0.24f);
    glVertex2f(0.224f,0.235f);
    ///Right Hand Rest part Border
    glVertex2f(0.255f,0.24f);
    glVertex2f(0.27f,0.27f);

    glVertex2f(0.243f,0.26f);
    glVertex2f(0.26f,0.276f);

    ///Left Hand with Sholder Border
    glVertex2f(0.182f,0.263f);
    glVertex2f(0.157f,0.26f);

    glVertex2f(0.175f,0.235f);
    glVertex2f(0.144f,0.24f);
    ///Left Hand Rest part Border
    glVertex2f(0.144f,0.24f);
    glVertex2f(0.13f,0.27f);

    glVertex2f(0.157f,0.26f);
    glVertex2f(0.14f,0.276f);
    ///Body Border
    glVertex2f(0.175f,0.235f);
    glVertex2f(0.175f,0.19f);

    glVertex2f(0.224f,0.19f);
    glVertex2f(0.224f,0.235f);

    ///Suit Design
    glVertex2f(0.2f,0.26f);
    glVertex2f(0.2f,0.19f);

    glVertex2f(0.2f,0.26f);
    glVertex2f(0.185f,0.265f);

    glVertex2f(0.2f,0.26f);
    glVertex2f(0.215f,0.265f);

    ///Pant Upper Part Border
    glVertex2f(0.175f,0.19f);
    glVertex2f(0.173f,0.175f);

    glVertex2f(0.226f,0.175f);
    glVertex2f(0.224f,0.19f);

    ///Right Leg1 Border
    glVertex2f(0.198f,0.175f);
    glVertex2f(0.206f,0.14f);

    glVertex2f(0.229f,0.14f);
    glVertex2f(0.226f,0.175f);

    ///Right Leg2 Border
    glVertex2f(0.206f,0.14f);
    glVertex2f(0.209f,0.12f);

    glVertex2f(0.232f,0.118f);
    glVertex2f(0.229f,0.14f);

    ///Right Leg shoe Border
    glVertex2f(0.208f,0.12f);
    glVertex2f(0.208f,0.1f);

    glVertex2f(0.24f,0.1f);
    glVertex2f(0.237f,0.116f);

    glVertex2f(0.232f,0.118f);
    glVertex2f(0.237f,0.116f);

    glVertex2f(0.208f,0.1f);
    glVertex2f(0.24f,0.1f);

    ///RIGHT Shoe lines
    glVertex2f(0.207f,0.13f);
    glVertex2f(0.232f,0.13f);

    glVertex2f(0.207f,0.135f);
    glVertex2f(0.23f,0.135f);
    ///Left Leg1 Border
    glVertex2f(0.173f,0.175f);
    glVertex2f(0.1667f,0.14f);

    glVertex2f(0.1897f,0.14f);
    glVertex2f(0.199f,0.175f);
    ///Left Leg2 Border
    glVertex2f(0.1667f,0.14f);
    glVertex2f(0.1664f,0.12f);

    glVertex2f(0.1894f,0.12f);
    glVertex2f(0.1897f,0.14f);
    ///Left Leg shoe Border
    glVertex2f(0.159f,0.117f);
    glVertex2f(0.159f,0.1f);

    glVertex2f(0.1895f,0.1f);
    glVertex2f(0.1895f,0.12f);

    glVertex2f(0.1664f,0.12f);
    glVertex2f(0.159f,0.117f);

    glVertex2f(0.159f,0.1f);
    glVertex2f(0.1895f,0.1f);

    ///LEFT Shoe lines
    glVertex2f(0.1667f,0.13f);
    glVertex2f(0.1895f,0.13f);

    glVertex2f(0.1667f,0.135f);
    glVertex2f(0.1895f,0.135f);

    glEnd();


    ///Bag
    glBegin(GL_QUADS);
    glColor3f(0.78f, 0.788f, 0.839f);
    glVertex2f(0.173f,0.17f);
    glVertex2f(0.173f,0.29f);
    glVertex2f(0.227f,0.29f);
    glVertex2f(0.227f,0.17f);

    /// Inside Boxes lower
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.19f,0.18f);
    glVertex2f(0.19f,0.21f);
    glVertex2f(0.21f,0.21f);
    glVertex2f(0.21f,0.18f);

    /// Inside Boxes lower
    glVertex2f(0.21f,0.23f);
    glVertex2f(0.19f,0.23f);
    glVertex2f(0.19f,0.26f);
    glVertex2f(0.21f,0.26f);


    glEnd();
    /// Bag Border
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.008f,0.043f,0.031f);
    glVertex2f(0.173f,0.17f);
    glVertex2f(0.173f,0.29f);

    glVertex2f(0.227f,0.29f);
    glVertex2f(0.227f,0.17f);


    glVertex2f(0.173f,0.17f);
    glVertex2f(0.227f,0.17f);

    glVertex2f(0.173f,0.29f);
    glVertex2f(0.227f,0.29f);

    ///Bag Style
    ///Lower Side
    glVertex2f(0.19f,0.18f);
    glVertex2f(0.21f,0.18f);

    glVertex2f(0.19f,0.21f);
    glVertex2f(0.19f,0.18f);

    glVertex2f(0.21f,0.21f);
    glVertex2f(0.21f,0.18f);

    glVertex2f(0.19f,0.21f);
    glVertex2f(0.21f,0.21f);


    ///Upper Side
    glVertex2f(0.21f,0.23f);
    glVertex2f(0.19f,0.23f);


    glVertex2f(0.19f,0.23f);
    glVertex2f(0.19f,0.26f);

    glVertex2f(0.21f,0.23f);
    glVertex2f(0.21f,0.26f);

    glVertex2f(0.19f,0.26f);
    glVertex2f(0.21f,0.26f);


    glEnd();


    glPopMatrix();



    ///----------------------------------------------------------Bangladesh Flag-----------------------------------------------------------///



    glPushMatrix();
    glScalef(0.5,0.5,0);
    glTranslatef(positions5, 0.0f, 0.0f);
    glTranslatef(+0.5f, 0.3f, 0.0f);
    glLineWidth(5);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINES);
    glVertex2f(0.5f,0.43f);
    glVertex2f(0.5f,0.15f);
    glEnd();

    GLfloat x[4], y[4], yy[4];
    GLdouble xt[300], yt[300], yyt[300], t;
    int i, c;

    x[0]=0.5;x[1]=0.55;x[2]=0.55;x[3]=0.6-xa;
    y[0]=0.41;y[1]=0.41+ya;y[2]=0.41-ya;y[3]=0.41;
    yy[0]=0.31;yy[1]=0.31+ya;yy[2]=0.31-ya;yy[3]=0.31;

    for(i=0, t=0, c=0; t<=1; i++, t=t+0.02)
    {
        xt[i] = pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*pow(t,2)*(1-t)*x[2]+pow(t,3)*x[3];
        yt[i] = pow(1-t,3)*y[0]+3*t*pow(1-t,2)*y[1]+3*pow(t,2)*(1-t)*y[2]+pow(t,3)*y[3];
        yyt[i] = pow(1-t,3)*yy[0]+3*t*pow(1-t,2)*yy[1]+3*pow(t,2)*(1-t)*yy[2]+pow(t,3)*yy[3];
        c++;
    }

    glPointSize(4);
    glColor3f(0.0f, 0.404f, 0.298f);
    glBegin(GL_QUAD_STRIP);
    for(i=0; i<c; i++)
    {
        glVertex2d(xt[i],yt[i]);
        glVertex2d(xt[i],yyt[i]);
    }
    glEnd();

    ///red circle
    GLfloat xc=0.55f-xa, yc=0.36f, radiusc =.03f;

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc, yc); // center of circle
    for(int ic = 0; ic <= triangleAmount; ic++)
    {
        glVertex2f( xc + (radiusc * cos(ic *  twicePi / triangleAmount)),
                    yc + (radiusc * sin(ic * twicePi / triangleAmount)) );
    }
    glEnd();
    glPopMatrix();

///Moonland Right side
    glBegin(GL_QUADS);
    glColor3f(0.616, 0.247, 0.208);   // Mars surface color
    glVertex2f(1.0f,0.4f);
    glVertex2f(0.86f,0.4f);
  glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(0.86f,0.0f);
    glVertex2f(1.0f,0.0f);
    glEnd();

     ///----------updated
     glBegin(GL_POLYGON);// B-13 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.91f,.03f);
    glVertex2f(.945f,0.035f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.95f,.139f);
    glVertex2f(.93f,.141f);
    glVertex2f(.90f,.039f);
    glVertex2f(.91f,.033f);
    glEnd();

   glBegin(GL_POLYGON);// B-14 Rock
   glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.91f,.33f);
    glVertex2f(.945f,0.35f);
   glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.95f,.39f);
    glVertex2f(.93f,.41f);
    glVertex2f(.90f,.39f);
    glVertex2f(.91f,.33f);
    glEnd();

glBegin(GL_POLYGON);
  glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.70f,.080f);
    glVertex2f(.76f,0.090f);
    glVertex2f(.78f,.12f);
    glVertex2f(.77f,.16f);
      glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.81f,.16f);
    glVertex2f(.80f,.11f);
    glColor3f(0.8f, 0.4f, 0.2f);
    glVertex2f(.79f,.11f);
    glVertex2f(.70f,.08f);
glEnd();



///----------------------------sharup part end

///-----------------------------


///-------------Rocket------------///

///_________ Main Rocket________///
    glPushMatrix();

    glTranslatef(0.0f,DPosition4,0.0f);
     glScalef(1.5f,0.7f,0.0f);
    glTranslatef(0.1f,1.2f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(113, 112, 110);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);
    glVertex2f(0.46f,0.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(8, 143, 143);
    glVertex2f(0.41f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);
    glVertex2f(0.46f,0.40f);
    glEnd();

    ///----------Border----------///
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.41f,0.34f);
    glVertex2f(0.46f,0.34f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.41f,0.64f);
    glVertex2f(0.435f,0.67f);
    glVertex2f(0.46f,0.64f);
    glVertex2f(0.435f,0.67f);

    ///---------Design---------///

    glVertex2f(0.41f,0.50f);
    glVertex2f(0.46f,0.50f);
    glVertex2f(0.41f,0.48f);
    glVertex2f(0.46f,0.48f);

    glVertex2f(0.41f,0.40f);
    glVertex2f(0.46f,0.40f);
    glVertex2f(0.41f,0.38f);
    glVertex2f(0.46f,0.38f);


    glEnd();


    ///------------Rocket left fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.41f,0.37f);
    glVertex2f(0.41f,0.51f);
    glVertex2f(0.34f,0.37f);
    glVertex2f(0.41f,0.37f);
    glEnd();
///------------Rocket right fin------///

    glBegin(GL_TRIANGLES);
    glColor3ub(233, 220, 201);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);
    glEnd();
    ///------------Border---------///

    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.46f,0.51f);
    glVertex2f(0.53f,0.37f);
    glVertex2f(0.46f,0.37f);
    glVertex2f(0.53f,0.37f);

    glEnd();

    ///------------rocket bottom part----///

    glBegin(GL_POLYGON);
    glColor3ub(240, 234, 214);
    glVertex2f(0.42f,0.34f);
    glVertex2f(0.42f,0.33f);
    glVertex2f(0.45f,0.33f);
    glVertex2f(0.45f,0.34f);
    glEnd();
     ///_____________________________Rocket TOP window___________________________________///
   ///_________ 11________///
    glColor3ub(255, 215, 0);
    GLfloat xrtw1=0.435f; GLfloat yrtw1=0.56f; GLfloat rrtw1 =.015f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 12________///
    glColor3f(0.314, 0.863, 0.98);
    GLfloat xrtw2=0.432f; GLfloat yrtw2=0.56f; GLfloat rrtw2 =.012f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrtw1, yrtw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.976, 0.482, 0.125);
            glVertex2f( xrtw1 + (rrtw1 * cos(i *  twicePi / triangleAmount)),
                        yrtw1 + (rrtw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket TOP window(Border)___________________________________///
    ///_________ 11________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrtwb1=0.435f; GLfloat yrtwb1=0.56f; GLfloat rrtwb1 =.015f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrtwb1, yrtwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrtwb1 + (rrtwb1 * cos(i *  twicePi / lineAmount)),
                        yrtwb1 + (rrtwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
///_____________________________Rocket bottom window___________________________________///
    ///_________ 13________///
    glColor3f(0.31, 0.847, 0.973);
    GLfloat xrbw3=0.435f; GLfloat yrbw3=0.45f; GLfloat rrbw3 =.010f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrbw3, yrbw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
                glColor3f(0.31, 0.847, 0.973);
            glVertex2f( xrbw3 + (rrbw3 * cos(i *  twicePi / triangleAmount)),
                        yrbw3 + (rrbw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket bottom window(Border)___________________________________///
    ///_________ 13________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrbwb3=0.435f; GLfloat yrbwb3=0.45f; GLfloat rrbwb3 =.010f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrbwb3, yrbwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrbwb3 + (rrbwb3 * cos(i *  twicePi / lineAmount)),
                        yrbwb3 + (rrbwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
    ///---------Mini Window-------------///
    ///_________ 14________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw1=0.42f; GLfloat yrmw1=0.61f; GLfloat rrmw1 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw1, yrmw1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw1 + (rrmw1 * cos(i *  twicePi / triangleAmount)),
                        yrmw1 + (rrmw1 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw2=0.435f; GLfloat yrmw2=0.61f; GLfloat rrmw2 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw2, yrmw2); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw2 + (rrmw2 * cos(i *  twicePi / triangleAmount)),
                        yrmw2 + (rrmw2 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_________ 16________///
    glColor3f(0.808, 0.839, 0.847);
    GLfloat xrmw3=0.45f; GLfloat yrmw3=0.61f; GLfloat rrmw3 =.005f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xrmw3, yrmw3); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f( xrmw3 + (rrmw3 * cos(i *  twicePi / triangleAmount)),
                        yrmw3 + (rrmw3 * sin(i * twicePi / triangleAmount)) );
        }
    glEnd();
    ///_____________________________Rocket Mini window(Border)___________________________________///
    ///_________ 14________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb1=0.42f; GLfloat yrmwb1=0.61f; GLfloat rrmwb1 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb1, yrmwb1); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb1 + (rrmwb1 * cos(i *  twicePi / lineAmount)),
                        yrmwb1 + (rrmwb1 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();
     ///_________ 15________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb2=0.435f; GLfloat yrmwb2=0.61f; GLfloat rrmwb2 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb2, yrmwb2); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb2 + (rrmwb2 * cos(i *  twicePi / lineAmount)),
                        yrmwb2 + (rrmwb2 * sin(i * twicePi /lineAmount)) );
        }
    glEnd();
     ///_________ 16________///
    glColor3f(0.0,0.0,0.0);
    GLfloat xrmwb3=0.45f; GLfloat yrmwb3=0.61f; GLfloat rrmwb3 =.005f;
    glBegin(GL_LINE_LOOP);
        glVertex2f(xrmwb3, yrmwb3); // center of circle
        for(i = 0; i <= lineAmount;i++) {
            glVertex2f( xrmwb3 + (rrmwb3 * cos(i *  twicePi / lineAmount)),
                        yrmwb3 + (rrmwb3 * sin(i * twicePi / lineAmount)) );
        }
    glEnd();

    ///-----------------------------Fire -------------///


    ///_________ Fire main 1________///

    glBegin(GL_POLYGON);
    glColor3f(0.953f, 0.906f, 0.396f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.40f,0.26f);
    glVertex2f(0.429f,0.28f);
    glVertex2f(0.444f,0.24f);
    glVertex2f(0.459f,0.28f);
    glVertex2f(0.47f,0.26f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.988f, 0.702f, 0.11f);
    glVertex2f(0.42f,0.32f);
    glVertex2f(0.39f,0.27f);
    glVertex2f(0.425f,0.29f);
    glVertex2f(0.440f,0.27f);
    glVertex2f(0.458f,0.29f);
    glVertex2f(0.48f,0.27f);
    glVertex2f(0.45f,0.32f);
    glEnd();

    glPopMatrix();



    ///-----------Rocket---------End--///


///Moonland Right side
    glBegin(GL_QUADS);
    glColor3f(0.616, 0.247, 0.208);   // Mars surface color
    glVertex2f(.87f,0.16f);
    glVertex2f(0.72f,0.16f);
  glColor3f(0.616, 0.247, 0.208);  // Mars horizon color
    glVertex2f(0.72f,0.0f);
    glVertex2f(.87f,0.0f);
    glEnd();

glBegin(GL_POLYGON);
  glColor3f(0.8, 0.6, 0.4);
    glVertex2f(.70f,.080f);
    glVertex2f(.76f,0.090f);
    glVertex2f(.78f,.12f);
    glVertex2f(.77f,.14f);
      glColor3f(0.3, 0.15, 0.1);
    glVertex2f(.81f,.16f);
    glVertex2f(.80f,.11f);
    glColor3f(0.8f, 0.16f, 0.2f);
    glVertex2f(.79f,.11f);
    glVertex2f(.70f,.08f);
glEnd();


     glFlush();

}







///.........Rocket

void updateD441(int value)
{
    if(DPosition4 >2.0 )
        DPosition4 = -1.0f;
    DPosition4 += Dspeed4;
    glutPostRedisplay();
    glutTimerFunc(100, updateD441, 0);
}
///----------------sharup dispaly end
///-------------sound

///-----------------------------------------------Cover top view------------------------------------------///









///---------------------------------------------Cover top view end----------------------------------------///



///------------------------------------------------------------------------------------------------------------------------------------------------///



///---------------------------------------Cover Dispaly Start------------------------------////

void display1() {
	glClearColor(0.f, 0.f, 0.f, .0f); // Set background color to gray and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
//........................................................full screen................................................................................................
    // Draw the sky and space background
     ///-------------1------------///
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.702, 0.945);  // Blue sky color
    glVertex2f(0.0f, 0.44f);

    glColor3f(0.184, 0.702, 0.945);  // Blue sky color
    glVertex2f(0.0f, 0.0f);

    glColor3f(0.514, 0.792, 0.976);  // Gradually less blue sky color
    glVertex2f(1.0f, 0.0f);

    glColor3f(0.514, 0.792, 0.976);  // Gradually less blue sky color
    glVertex2f(1.0f, 0.44f);
    glEnd();

    ///--------------2---------------///
    glBegin(GL_QUADS);
    glColor3f(0.514, 0.792, 0.976);  // Gradually less blue sky color
    glVertex2f(0.0f, 0.44f);

    glColor3f(0.514, 0.792, 0.976);  // Gradually less blue sky color
    glVertex2f(1.0f, 0.44f);

    glColor3f(0, 0.502, 0.757);  // Light dark space color
    glVertex2f(1.0f, 0.66f);

    glColor3f(0, 0.502, 0.757);  // Light dark space color
    glVertex2f(0.0f, 0.66f);
    glEnd();

    ///--------------3---------------///
    glBegin(GL_QUADS);
    glColor3f(0, 0.502, 0.757);  // Light dark space color
    glVertex2f(0.0f, 0.66f);

    glColor3f(0, 0.502, 0.757);  // Light dark space color
    glVertex2f(1.0f, 0.66f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(1.0f, 0.84f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(0.0f, 0.84f);
    glEnd();

    ///--------------4---------------///
    glBegin(GL_QUADS);
    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(0.0f, 0.84f);

    glColor3f(0.149, 0.149, 0.149);  // Gradually getting space color
    glVertex2f(1.0f, 0.84f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(1.0f, 1.0f);

    glColor3f(0.0, 0.0, 0.0);  // Dark space color
    glVertex2f(0.0f, 1.0f);
    glEnd();
///-------------------star---------point
    glPointSize(1.5);
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.10f, 0.99f);
    glVertex2f(0.05f, 0.68f);
    glVertex2f(0.15f, 0.75f);
    glVertex2f(0.20f, 0.80f);
    glVertex2f(0.25f, 0.65f);
    glVertex2f(0.30f, 0.694f);
    glVertex2f(0.35f, 0.763f);
    glVertex2f(0.45f, 0.72f);
    glVertex2f(0.55f, 0.70f);
    glVertex2f(0.60f, 0.77f);
    glVertex2f(0.65f, 0.85f);
    glVertex2f(0.70f, 0.73f);
    glVertex2f(0.75f, 0.79f);
    glVertex2f(0.80f, 0.75f);
    glVertex2f(0.85f, 0.87f);
    glVertex2f(0.90f, 0.88f);
    glVertex2f(0.95f, 0.99f);
    glVertex2f(0.02f, 0.81f);
    glVertex2f(0.08f, 0.91f);
    glVertex2f(0.13f, 0.85f);
    glVertex2f(0.28f, 0.89f);
    glVertex2f(0.39f, 0.97f);
    glVertex2f(0.425f,0.86f);
    glVertex2f(0.53f, 0.81f);
    glVertex2f(0.54f, 0.90f);
    glVertex2f(0.535f,0.93f);
    glVertex2f(0.66f, 0.91f);
    glVertex2f(0.73f, 0.75f);
    glVertex2f(0.81f, 0.77f);
    glVertex2f(0.87f, 0.77f);
    glVertex2f(0.92f, 0.86f);
    glVertex2f(0.86f, 0.99f);
    glVertex2f(0.99f, 0.93f);
    glVertex2f(0.24f, 0.99f);


    glEnd();

    glPointSize(2.5);
    glBegin(GL_POINTS);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.07f, 0.90f);
    glVertex2f(0.02f, 0.80f);
    glVertex2f(0.10f, 0.760f);
    glVertex2f(0.20f, 0.72f);
    glVertex2f(0.26f, 0.69f);
    glVertex2f(0.22f, 0.95f);
    glVertex2f(0.50f, 0.912f);
    glVertex2f(0.67f, 0.81f);
    glVertex2f(0.45f, 0.95f);
    glVertex2f(0.91f, 0.86f);
    glEnd();
    ///-----------------------------------------------------1st cloud ----------------------------------------------------------------------///


/// Circle 1
GLfloat t30 = 0.05f, r30 = 0.265f, radi30 = 0.065f;

glColor3f(0.9f, 0.9f, 0.9f); // w and g
glBegin(GL_TRIANGLE_FAN);
glVertex2f(t30, r30); // center of circle
for (int i12 = 0; i12 <= triangleAmount; i12++)
{
    glVertex2f(t30 + (radi30 * cos(i12 * twicePi / triangleAmount)),
               r30 + (radi30 * sin(i12 * twicePi / triangleAmount)));
}
glEnd();

/// Circle 2
GLfloat t31 = 0.3f, r31 = 0.2f, radi31 = 0.05f;

    glColor3f(0.9f, 0.9f, 0.9f); // w and g
glBegin(GL_TRIANGLE_FAN);
glVertex2f(t31, r31); // center of circle
for (int i12 = 0; i12 <= triangleAmount; i12++)
{
    glVertex2f(t31 + (radi31 * cos(i12 * twicePi / triangleAmount)),
               r31 + (radi31 * sin(i12 * twicePi / triangleAmount)));
}
glEnd();

/// Circle 3
GLfloat t32 = 0.38f, r32 = 0.20f, radi32 = 0.06f;

    glColor3f(0.9f, 0.9f, 0.9f); // w and g
glBegin(GL_TRIANGLE_FAN);
glVertex2f(t32, r32); // center of circle
for (int i12 = 0; i12 <= triangleAmount; i12++)
{
    glVertex2f(t32 + (radi32 * cos(i12 * twicePi / triangleAmount)),
               r32 + (radi32 * sin(i12 * twicePi / triangleAmount)));
}
glEnd();

   ///circle 4
    GLfloat t33=0.44f, r33=0.21f, radi33 =.042f;

       glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t33, r33);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t33 + (radi33 * cos(i12 *  twicePi / triangleAmount)),
                    r33+ (radi33 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();
     ///circle 5
    GLfloat t34=0.24f, r34=0.22f, radi34=.04f;

      glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t34, r34);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t34 + (radi34 * cos(i12 *  twicePi / triangleAmount)),
                    r34 + (radi34 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();
    ///circle 6
    GLfloat t35=0.6f, r35=0.22f, radi35 =.03f;

    glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t35, r35);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t35 + (radi35 * cos(i12 *  twicePi / triangleAmount)),
                    r35+ (radi35 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

     ///circle 7
    GLfloat t36=0.65f, r36=0.20f, radi36 =.05f;
    glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t36, r36);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t36 + (radi36 * cos(i12 *  twicePi / triangleAmount)),
                    r36+ (radi36 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 8
    GLfloat t37=0.69f, r37=0.14f, radi37 =.05f;

       glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t37, r37);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t37 + (radi37 * cos(i12 *  twicePi / triangleAmount)),
                    r37+ (radi37 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();
    ///circle 9
    GLfloat t38=0.72f, r38=0.14f, radi38 =.051f;

      glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t38, r38);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t38 + (radi38 * cos(i12 *  twicePi / triangleAmount)),
                    r38+ (radi38 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 10
    GLfloat t39=0.79f, r39=0.16f, radi39 =.07f;

      glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t39, r39);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t39 + (radi39 * cos(i12 *  twicePi / triangleAmount)),
                    r39 + (radi39 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 11
    GLfloat t40=0.90f, r40=0.18f, radi40=.08f;

       glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t40, r40);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t40 + (radi40 * cos(i12 *  twicePi / triangleAmount)),
                    r40 + (radi40 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 12
    GLfloat t41=0.95f, r41=0.25f, radi41=.06f;
    glColor3f(0.9f, 0.9f, 0.9f); // w and g
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t41, r41);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t41 + (radi41 * cos(i12 *  twicePi / triangleAmount)),
                    r41 + (radi41 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();



/// 2nd Cloud-------------------////


///.........................................................CLOUD 2ND LAYER....................................................................................///

   ///circle 11

    GLfloat t21 =0.13f, r21=0.18f, radi21 =.07f;
    twicePi = 2.0f * PI;

      glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t21, r21); // center of circle
    for(int i1 = 0; i1 <= triangleAmount; i1++)
    {
        glVertex2f( t21 + (radi21 * cos(i1 *  twicePi / triangleAmount)),
                    r21 + (radi21 * sin(i1 * twicePi / triangleAmount)) );
    }
    glEnd();

   ///circle 2

    GLfloat t22=0.25f, r22=0.20, radi22 =.065f;
    twicePi = 2.0f * PI;

     glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t22, r22); // center of circle
    for(int i2 = 0; i2 <= triangleAmount; i2++)
    {
        glVertex2f( t22 + (radi22 * cos(i2 *  twicePi / triangleAmount)),
                    r22 + (radi22 * sin(i2 * twicePi / triangleAmount)) );
    }
    glEnd();

///circle 3

    GLfloat t23=0.43f, r23=0.14f, radi23 =.075f;
    twicePi = 2.0f * PI;
    glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t23, r23); // center of circle
    for(int i3 = 0; i3 <= triangleAmount; i3++)
    {
        glVertex2f( t23 + (radi23 * cos(i3 *  twicePi / triangleAmount)),
                    r23 + (radi23 * sin(i3 * twicePi / triangleAmount)) );
    }
    glEnd();

   ///circle 4

    GLfloat t24=0.5f, r24=0.22f, radi24 =.055f;
    twicePi = 2.0f * PI;

     glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t24, r24); // center of circle
    for(int i4 = 0; i4 <= triangleAmount; i4++)
    {
        glVertex2f( t24 + (radi24 * cos(i4 *  twicePi / triangleAmount)),
                    r24 + (radi24 * sin(i4 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 5

    GLfloat t25=0.56, r25=0.18f, radi25 =.07f;
     glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t25, r25); // center of circle
    for(int i5 = 0; i5 <= triangleAmount; i5++)
    {
        glVertex2f( t25 + (radi25 * cos(i5 *  twicePi / triangleAmount)),
                    r25 + (radi25 * sin(i5 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 6

    GLfloat t26=0.60f, r26=0.06f, radi26 =.05f;
    glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t26, r26); // center of circle
    for(int i6 = 0; i6 <= triangleAmount; i6++)
    {
        glVertex2f( t26 + (radi26 * cos(i6 *  twicePi / triangleAmount)),
                    r26 + (radi26 * sin(i6 * twicePi / triangleAmount)) );
    }
    glEnd();





    ///circle 7
    GLfloat t27=0.64f, r27=0.1f, radi27 =.063f;
    glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t27, r27); // center of circle
    for(int i10 = 0; i10 <= triangleAmount; i10++)
    {
        glVertex2f( t27 + (radi27 * cos(i10 *  twicePi / triangleAmount)),
                    r27 + (radi27 * sin(i10 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 8
    GLfloat t28=0.69f, r28=0.09f, radi28 =.05f;

    glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t28, r28); // center of circle
    for(int i11 = 0; i11 <= triangleAmount; i11++)
    {
        glVertex2f( t28 + (radi28 * cos(i11 *  twicePi / triangleAmount)),
                    r28 + (radi28 * sin(i11 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 9
    GLfloat t29=0.8f, r29=0.12f, radi29 =.07f;
   glColor3f(0.760f, 0.773f, 0.792f);  // Light grayish cloud

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t29, r29);// center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t29 + (radi29 * cos(i12 *  twicePi / triangleAmount)),
                    r29+ (radi29 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

///.........................................................................initial part.......................................................

    ///circle 1

    GLfloat t =0.0f, r=0.278f, radi =.07f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t, r); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( t + (radi * cos(i *  twicePi / triangleAmount)),
                    r + (radi * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 2

    GLfloat t1 =0.045f, r1=0.19f, radi1 =.065f;

    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t1, r1); // center of circle
    for(int i1 = 0; i1 <= triangleAmount; i1++)
    {
        glVertex2f( t1 + (radi1 * cos(i1 *  twicePi / triangleAmount)),
                    r1 + (radi1 * sin(i1 * twicePi / triangleAmount)) );
    }
    glEnd();

   ///circle 3

    GLfloat t2=0.105f, r2=0.123, radi2 =.045f;


    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t2, r2); // center of circle
    for(int i2 = 0; i2 <= triangleAmount; i2++)
    {
        glVertex2f( t2 + (radi2 * cos(i2 *  twicePi / triangleAmount)),
                    r2 + (radi2 * sin(i2 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 4

    GLfloat t3=0.153f, r3=0.11f, radi3 =.047f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t3, r3); // center of circle
    for(int i3 = 0; i3 <= triangleAmount; i3++)
    {
        glVertex2f( t3 + (radi3 * cos(i3 *  twicePi / triangleAmount)),
                    r3 + (radi3 * sin(i3 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 5

    GLfloat t4=0.19f, r4=0.13f, radi4 =.039f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t4, r4); // center of circle
    for(int i4 = 0; i4 <= triangleAmount; i4++)
    {
        glVertex2f( t4 + (radi4 * cos(i4 *  twicePi / triangleAmount)),
                    r4 + (radi4 * sin(i4 * twicePi / triangleAmount)) );
    }
    glEnd();


   ///circle 6

    GLfloat t5=0.24, r5=0.12f, radi5 =.04f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t5, r5); // center of circle
    for(int i5 = 0; i5 <= triangleAmount; i5++)
    {
        glVertex2f( t5 + (radi5 * cos(i5 *  twicePi / triangleAmount)),
                    r5 + (radi5 * sin(i5 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 7

    GLfloat t6=0.33f, r6=0.085f, radi6 =.08f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t6, r6); // center of circle
    for(int i6 = 0; i6 <= triangleAmount; i6++)
    {
        glVertex2f( t6 + (radi6 * cos(i6 *  twicePi / triangleAmount)),
                    r6 + (radi6 * sin(i6 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 8

    GLfloat t7=0.4f, r7=0.035f, radi7 =.04f;

   glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t7, r7); // center of circle
    for(int i7 = 0; i7 <= triangleAmount; i7++)
    {
        glVertex2f( t7 + (radi7 * cos(i7 *  twicePi / triangleAmount)),
                    r7 + (radi7 * sin(i7 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 9

    GLfloat t8=0.45f, r8=0.06f, radi8 =.040f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t8, r8); // center of circle
    for(int i8 = 0; i8 <= triangleAmount; i8++)
    {
        glVertex2f( t8 + (radi8 * cos(i8 *  twicePi / triangleAmount)),
                    r8 + (radi8 * sin(i8 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 10
    GLfloat t9=0.5f, r9=0.10f, radi9 =.045f;

   glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t9, r9); // center of circle
    for(int i9 = 0; i9 <= triangleAmount; i9++)
    {
        glVertex2f( t9 + (radi9 * cos(i9 *  twicePi / triangleAmount)),
                    r9 + (radi9 * sin(i9 * twicePi / triangleAmount)) );
    }
    glEnd();


    ///circle 11
    GLfloat t10=0.545f, r10=0.07f, radi10 =.048f;

  glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t10, r10); // center of circle
    for(int i10 = 0; i10 <= triangleAmount; i10++)
    {
        glVertex2f( t10 + (radi10 * cos(i10 *  twicePi / triangleAmount)),
                    r10 + (radi10 * sin(i10 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 12
    GLfloat t11=0.6f, r11=0.091f, radi11 =.045f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t11, r11); // center of circle
    for(int i11 = 0; i11 <= triangleAmount; i11++)
    {
        glVertex2f( t11 + (radi11 * cos(i11 *  twicePi / triangleAmount)),
                    r11 + (radi11 * sin(i11 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 13
    GLfloat t12=0.64f, r12=0.068f, radi12 =.035f;

   glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t12, r12); // center of circle
    for(int i12 = 0; i12 <= triangleAmount; i12++)
    {
        glVertex2f( t12 + (radi12 * cos(i12 *  twicePi / triangleAmount)),
                    r12 + (radi12 * sin(i12 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 14
    GLfloat t13=0.69f, r13=0.00f, radi13 =.105f;

    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t13, r13); // center of circle
    for(int i13 = 0; i13 <= triangleAmount; i13++)
    {
        glVertex2f( t13 + (radi13 * cos(i13 *  twicePi / triangleAmount)),
                    r13 + (radi13 * sin(i13 * twicePi / triangleAmount)) );
    }
    glEnd();

 ///circle 15
    GLfloat t14=0.81f, r14=0.01f, radi14 =.05f;

   glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t14, r14); // center of circle
    for(int i14 = 0; i14 <= triangleAmount; i14++)
    {
        glVertex2f( t14 + (radi14 * cos(i14 *  twicePi / triangleAmount)),
                    r14 + (radi14 * sin(i14 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 16
    GLfloat t15=0.86f, r15=0.05f, radi15 =.05f;

    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t15, r15); // center of circle
    for(int i15 = 0; i15 <= triangleAmount; i15++)
    {
        glVertex2f( t15 + (radi15 * cos(i15 *  twicePi / triangleAmount)),
                    r15 + (radi15 * sin(i15 * twicePi / triangleAmount)) );
    }
    glEnd();

    ///circle 17
   GLfloat t16=0.9f, r16=0.09f, radi16 =.04f;

   glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t16, r16); // center of circle
    for(int i16 = 0; i16 <= triangleAmount; i16++)
    {
        glVertex2f( t16 + (radi16 * cos(i16 *  twicePi / triangleAmount)),
                    r16 + (radi16 * sin(i16 * twicePi / triangleAmount)) );
    }
    glEnd();

        ///circle 18
   GLfloat t17=0.95f, r17=0.14f, radi17 =.05f;

    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t17, r17); // center of circle
    for(int i17 = 0; i17 <= triangleAmount; i17++)
    {
        glVertex2f( t17 + (radi17 * cos(i17 *  twicePi / triangleAmount)),
                    r17 + (radi17 * sin(i17 * twicePi / triangleAmount)) );
    }
    glEnd();
       ///circle 19
   GLfloat t18=0.99f, r18=0.20f, radi18 =.09f;
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t18, r18); // center of circle
    for(int i18 = 0; i18 <= triangleAmount; i18++)
    {
        glVertex2f( t18 + (radi18 * cos(i18 *  twicePi / triangleAmount)),
                    r18 + (radi18 * sin(i18 * twicePi / triangleAmount)) );
    }
    glEnd();



     glBegin(GL_QUADS);
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glVertex2f(0.00f,0.05f);
    glVertex2f(0.0f,0.00f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(1.0f,0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glVertex2f(0.00f,0.11f);
    glVertex2f(0.0f,0.00f);
    glVertex2f(0.3f,0.0f);
    glVertex2f(0.3f,0.11f);
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glVertex2f(0.00f,0.14f);
    glVertex2f(0.0f,0.00f);
    glVertex2f(0.15f,0.0f);
    glVertex2f(0.15f,0.14f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glVertex2f(0.9f,0.12f);
    glVertex2f(0.9f,0.00f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(1.0f,0.12f);
    glEnd();

       glBegin(GL_QUADS);
    glColor3f(0.949f, 0.964f, 0.976f);  // Linen white
    glVertex2f(0.45f,0.0565f);
    glVertex2f(0.45f,0.00f);
    glVertex2f(0.55f,0.0f);
    glVertex2f(0.55f,0.0565f);
    glEnd();



	///Text
    glPushMatrix();
    glTranslatef(0.0f, -0.10f, 0.0f);
    glColor3f(0.18f, 0.38f, 0.773f);
    renderBitmapString(0.30f, 0.9f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "AMERICAN INTERNATION UNIVERSITY BANGLADESH");

    glColor3f(0.478f, 0.824f, 0.686f);  //
    renderBitmapString(0.45f, 0.85f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "MAHFUJUR RAHMAN");

     glColor3f(0.682f, 0.235f, 0.259f);
    renderBitmapString(0.42f, 0.80f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "PROJECT Journey TO The Mars ");

    glColor3f(0.596f, 0.812f, 0.557f);  //
    renderBitmapString(0.30f, 0.70f, 0.0f, GLUT_BITMAP_HELVETICA_18, "ID:21-45809-3  NAME: MD Foysal Rahaman");

    glColor3f(0.596f, 0.812f, 0.557f);  //
    renderBitmapString(0.30f, 0.65f, 0.0f, GLUT_BITMAP_HELVETICA_18 , "ID:21-45836-3  NAME: Sharup Paul");

    glColor3f(0.596f, 0.812f, 0.557f);  //
    renderBitmapString(0.30f, 0.60f, 0.0f, GLUT_BITMAP_HELVETICA_18, "ID:21-45015-2  NAME: Munira Haque Prioty");

    glColor3f(0.596f, 0.812f, 0.557f) ;//
    renderBitmapString(0.30f, 0.55f, 0.0f, GLUT_BITMAP_HELVETICA_18, "ID:21-45042-2  NAME: Tirtha Das Tanu");

    glColor3f(0.596f, 0.812f, 0.557f) ;//
    renderBitmapString(0.30f, 0.50f, 0.0f, GLUT_BITMAP_HELVETICA_18, " Section : E ");


    glPopMatrix();





	glFlush();



}

///--------------------------------------Cover Display End----------------------------------////






///-------------------------------------------------------------------------------------------------------------------------------------///


///
void handleKeypressT(unsigned char key, int x, int y)

{

    switch(key)

    {

    case '1':
    glutDisplayFunc(display1);
    sndPlaySound("sound0.wav", SND_ASYNC);
    glutPostRedisplay();
    break;

    case '2':
    glutDisplayFunc(display1112);


    glutPostRedisplay();
    break;
    case '3':
    glutDisplayFunc(display22219);

    glutPostRedisplay();
    break;
    case '4':
    glutDisplayFunc(display3331);
    glutPostRedisplay();
    break;
    case '5':
    glutDisplayFunc(display441);
    glutPostRedisplay();
    break;

///---------------------------

      ///................Cloud and Bus start
                        case 'b':
                         Speed1=-0.005f;
                         Speed3=0.015f;
                         break;
                         ///Cloud and Bus stop
                         case 'v':
                         Speed1=0.0f;
                         Speed3=0.0f;
                         break;
                         ///Rocket start
                         case 'm':
                         Speed2=0.015f;
                         break;
                         ///Rocket stop
                         case 'n':
                         Speed2=0.0f;
                         break;
///-----------prioty key
                       case 'w':
                         Aspeed229=0.015f;
                         Bspeed229=0.015f;
                         Pspeed229=0.015f;
                         break;
                         case 's':
                         Aspeed229=-0.02f;
                         break;

                        /* case 'z':
                         Bspeed229=-0.02f;
                         break;*/


                         case 'a':
                         Pspeed229=-0.02f;
                         break;
                         ///.......Rocket
                         case 'd':
                         Pspeed229=0.0f;
                         Aspeed229=0.0f;
                         break;


///----------------tanu key
                         ///-----3----------///
                          case 'p':
                         Aspeed=0.015f;
                         Bspeed=0.015f;
                         Pspeed=0.015f;
                         break;
                         case 'r':
                         Aspeed=-0.02f;
                         break;

                         case 'q':
                         Bspeed=-0.02f;
                         break;


                         case 'j':
                         Pspeed=-0.02f;
                         break;
                         ///.......Rocket
                         case 'k':
                         Pspeed=0.0f;
                         Aspeed=0.0f;
                         break;

    ///---------sharup key

                         case 't':
                         Tspeed4=0.004f;
                         Dspeed4=0.004f;
                         break;
                         case 'u':
                         Tspeed4=-0.004f;
                         Dspeed4=-0.004f;
                         break;
                         ///.......Rocket
                         case 'y':
                         Tspeed4=0.0f;
                         Dspeed4=0.0f;
                         break;




        glutPostRedisplay();

    }

}


    /* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600); // Set the window's initial width & height
    glutInitWindowPosition(0, 0);  // Set the window's initial position according to the monitor
    glutCreateWindow("Journey To The Mars"); // Create a window with the given title
    glutFullScreen();
    init();
    glutDisplayFunc(display1);



    glutTimerFunc(0, update1112, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update213, 0);
    glutTimerFunc(100, update3, 0);
    glutIdleFunc(Idle);

    ///-----------prioty-------///
    glutKeyboardFunc(handleKeypressT);

    glutTimerFunc(100, updateA22219, 0);
    glutTimerFunc(100, updateB22219, 0);
    glutTimerFunc(100, updateP22229, 0);
    glutTimerFunc(0, updatep22219, 0);


    glutTimerFunc(2500, meteorUp22219, 0);

    ///----------Tanu-----------///
    glutTimerFunc(100, updateA3331, 0);
    glutTimerFunc(100, updateB3331, 0);
    glutTimerFunc(100, updateP3331, 0);
    glutTimerFunc(3000, meteorUpp3331, 0);


    glutTimerFunc(2500, meteorUp2221, 0);

    ///----------sharup---------///

   glutTimerFunc(100, updateD441, 0);


    glutTimerFunc(100, updates4441, 0);
     glutTimerFunc(60000, updates34441, 0);

      glutTimerFunc(0, updatep4441, 0);


    //glutDisplayFunc(drawHalfCircle);
    glutTimerFunc(25000, meteorUp2221, 0);
    glutMainLoop();
    return 0;
}


