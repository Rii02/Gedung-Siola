#include <GL/glut.h> 

float sudutX = 0;
float sudutY = 0;
float sudutZ = 0;
float camera = 9;

void init() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    GLfloat light_ambient[] = { 0, 0, 0, 1 };
    GLfloat light_diffuse[] = { 0.5, 0.5, 0.5, 1 };
    GLfloat light_specular[] = { 0.6, 0.6, 0.6, 1 };
    GLfloat light_position[] = { 6, 6, -6, 1 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
}

void tulisan(const char* text, float x, float y, float z, float scale) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glScalef(scale, scale, scale);
    glColor3f(1, 1, 1);
    while (*text) {
        glutStrokeCharacter(GLUT_STROKE_ROMAN, *text++);
    }
    glPopMatrix();
}

void siola() {
    //tengah
    glPushMatrix();
    glColor3f(1, 0, 0);
    glScalef(1, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    //kanan
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(0.8, 0, -0.2);
    glRotatef(30, 0, 1, 0);
    glScalef(0.8, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(1.4, 0, -0.8);
    glRotatef(55, 0, 1, 0);
    glScalef(1, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(1.85, 0, -1.6);
    glRotatef(65, 0, 1, 0);
    glScalef(1.4, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    //kiri
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(-0.8, 0, -0.2);
    glRotatef(-30, 0, 1, 0);
    glScalef(0.8, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(-1.4, 0, -0.8);
    glRotatef(-55, 0, 1, 0);
    glScalef(1, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(-1.85, 0, -1.6);
    glRotatef(-65, 0, 1, 0);
    glScalef(1.4, 3, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    //atribut garis keatas
    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-1.85, 0, -1.3);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(1.85, 0, -1.3);
    glRotatef(65, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-1.4, 0, -0.4);
    glRotatef(-55, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(1.4, 0, -0.4);
    glRotatef(55, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-0.6, 0, 0.08);
    glRotatef(-30, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(0.6, 0, 0.08);
    glRotatef(30, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(0, 0.5, 0.1);
    glScalef(0.07, 2, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-0.2, 0.5, 0.1);
    glScalef(0.07, 2, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-0.4, 0.5, 0.1);
    glScalef(0.07, 2, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(0.2, 0.5, 0.1);
    glScalef(0.07, 2, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(0.4, 0.5, 0.1);
    glScalef(0.07, 2, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-2.2, 0, -2.1);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(2.2, 0, -2.1);
    glRotatef(65, 0, 1, 0);
    glScalef(0.2, 3, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //atribut garis kesamping
    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 1.16, 0.1);
    glScalef(1, 0.15, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    //3
    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-2, 1.16, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(1, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-2, 0.485, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-2, -0.18, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-2, -0.83, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(2, 1.16, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(1, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(2, 0.485, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(2, -0.18, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(2, -0.83, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(1, 0.1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //2
    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-1.6, 1.16, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-1.6, 0.485, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-1.6, -0.18, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-1.6, -0.83, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(1.6, 1.16, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(1.6, 0.485, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(1.6, -0.18, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(1.6, -0.83, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.79, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //1
    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-0.9, 1.16, -0.15);
    glRotatef(-28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-0.9, 0.485, -0.15);
    glRotatef(-28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-0.9, -0.18, -0.15);
    glRotatef(-28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(-0.9, -0.83, -0.15);
    glRotatef(-28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0.9, 1.16, -0.15);
    glRotatef(28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0.9, 0.485, -0.15);
    glRotatef(28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0.9, -0.18, -0.15);
    glRotatef(28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0.9, -0.83, -0.15);
    glRotatef(28, 0, 1, 0);
    glScalef(0.92, 0.15, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //pintu
    glPushMatrix();
    glColor3f(0.05, 0.05, 0.05);
    glTranslatef(0, -1, 0.15);
    glScalef(1, 1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, -0.45, 0.1);
    glScalef(1, 0.13, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, -1.04, 0.2);
    glScalef(0.75, 0.85, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //atap
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 1.4, -1.35);
    glScalef(1, 0.2, 2.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0.3, 1.4, -1.3);
    glRotatef(30, 0, 1, 0);
    glScalef(0.8, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(-0.3, 1.4, -1.3);
    glRotatef(-30, 0, 1, 0);
    glScalef(0.8, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0.7, 1.4, -1.7);
    glRotatef(45, 0, 1, 0);
    glScalef(1, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(-0.7, 1.4, -1.7);
    glRotatef(-45, 0, 1, 0);
    glScalef(1, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(-1, 1.4, -2.4);
    glRotatef(-65, 0, 1, 0);
    glScalef(1.2, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(1, 1.4, -2.4);
    glRotatef(65, 0, 1, 0);
    glScalef(1.2, 0.2, 2.2);
    glutSolidCube(1);
    glPopMatrix();

    //belakang
    glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef(0, 0, -3.7);
    glScalef(4.5, 3.1, 3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 1.6, -3.7);
    glScalef(4.8, 0.1, 3.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 1.16, -3.8);
    glScalef(4.8, 0.1, 3.17);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 0.485, -3.8);
    glScalef(4.8, 0.1, 3.17);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, -0.18, -3.8);
    glScalef(4.8, 0.1, 3.17);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, -0.83, -3.8);
    glScalef(4.8, 0.1, 3.17);
    glutSolidCube(1);
    glPopMatrix();

    //bola atas
    glPushMatrix();
    glColor3f(0.3, 0.3, 0.3);
    glTranslatef(0, 1.35, -0.5);
    glScalef(0.8, 0.8, 0.8);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 1.8, -0.5);
    glScalef(0.7, 0.7, 0.7);
    glutSolidSphere(0.5, 100, 100);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glTranslatef(0, 1.9, -0.5);
    glScalef(0.1, 1, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //jendela paling kiri & kanan
    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-2, 0.8, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-2, 0.15, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-2, -0.5, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-2, -1.15, -1.7);
    glRotatef(-65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(2, 0.8, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(2, 0.15, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(2, -0.5, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(2, -1.15, -1.7);
    glRotatef(65, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //jendela ke 2
    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1.6, 0.8, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1.6, 0.15, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1.6, -0.5, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1.6, -1.15, -0.86);
    glRotatef(-57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1.6, 0.8, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1.6, 0.15, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1.6, -0.5, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1.6, -1.15, -0.86);
    glRotatef(57, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //jendela pertama
    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1, 0.8, -0.2);
    glRotatef(-25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1, 0.15, -0.2);
    glRotatef(-25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1, -0.5, -0.2);
    glRotatef(-25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(-1, -1.15, -0.2);
    glRotatef(-25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1, 0.8, -0.2);
    glRotatef(25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1, 0.15, -0.2);
    glRotatef(25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1, -0.5, -0.2);
    glRotatef(25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(1, -1.15, -0.2);
    glRotatef(25, 0, 1, 0);
    glScalef(0.5, 0.5, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    //jendela tengah
    glPushMatrix();
    glColor3f(0.1, 0.1, 0.1);
    glTranslatef(0, -0.2, 0.07);
    glScalef(1, 0.4, 0.1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7, 0.7, 0.7);
    glTranslatef(0, 0.07, 0.1);
    glScalef(1, 0.13, 0.2);
    glutSolidCube(1);
    glPopMatrix();

    tulisan("SIOLA", -0.9, 1.5, 0, 0.005);


}

void alas() {

    glPushMatrix();
    glColor3f(0.2, 0.2, 0.2);
    glTranslatef(0, -1.5, 0);
    glScalef(15, 0.1, 15);
    glutSolidCube(1);
    glPopMatrix();

    //Jalan
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(0.8, -1.45, 1.5);
    glRotatef(30, 0, 1, 0);
    glScalef(0.8, 0.05, 1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-0.8, -1.45, 1.5);
    glRotatef(-30, 0, 1, 0);
    glScalef(0.8, 0.05, 1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(1.4, -1.45, 1.1);
    glRotatef(-55, 0, 1, 0);
    glScalef(0.999, 0.05, 1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-1.4, -1.45, 1.1);
    glRotatef(55, 0, 1, 0);
    glScalef(0.999, 0.05, 1.2);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-4, -1.45, -0.75);
    glRotatef(55, 0, 1, 0);
    glScalef(0.97, 0.05, 6);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(4, -1.45, -0.75);
    glRotatef(-55, 0, 1, 0);
    glScalef(0.97, 0.05, 6);
    glutSolidCube(1);
    glPopMatrix();

    //jalan tengah
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(0, -1.45, 1.6);
    glScalef(1.5, 0.05, 1.04);
    glutSolidCube(1);
    glPopMatrix();

    //kotak bawah pohon
    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(1.2, -1.5, 0.3);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(-1.2, -1.5, 0.3);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(2, -1.5, -0.3);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(-2, -1.5, -0.3);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(-2.8, -1.5, -1);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.5, 0);
    glTranslatef(2.8, -1.5, -1);
    glScalef(0.3, 0.3, 0.3);
    glutSolidCube(1);
    glPopMatrix();
}

void pohon() {
    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(2, -1, -0.3);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(2, -1, -0.3);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(-2, -1, -0.3);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(-2, -1, -0.3);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(-1.2, -1, 0.3);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(-1.2, -1, 0.3);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(1.2, -1, 0.3);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(1.2, -1, 0.3);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(2.8, -1, -1);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(2.8, -1, -1);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.5, 0.25, 0.1);
    glTranslatef(-2.8, -1, -1);
    glScalef(0.07, 1, 0.07);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0.7, 0);
    glTranslatef(-2.8, -1, -1);
    glRotatef(270, 1, 0, 0);
    glScalef(1, 1, 1);
    glutSolidCone(0.3, 0.7, 16, 16);
    glPopMatrix();
}

void matahari() {
    glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef(6, 6, -6);
    glutSolidSphere(0.5, 50, 50);
    glPopMatrix();
}

void display() {
    glClearColor(0.53, 0.81, 0.92, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 0, camera, 0, 0, 0, 0, 1, 0);

    glRotatef(sudutX, 1, 0, 0);
    glRotatef(sudutY, 0, 1, 0);
    glRotatef(sudutZ, 0, 0, 1);

    siola();
    alas();
    pohon();
    matahari();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (GLfloat)w / (GLfloat)h, 1, 100);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'x':
        sudutX += 5;
        break;
    case 'X':
        sudutX -= 5;
        break;
    case 'y':
        sudutY += 5;
        break;
    case 'Y':
        sudutY -= 5;
        break;
    case 'z':
        sudutZ += 5;
        break;
    case 'Z':
        sudutZ -= 5;
        break;
    case 27:
        exit(0);
        break;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_RIGHT_BUTTON) {
        if (state == GLUT_DOWN) {
            camera -= 3;
        }
        else if (state == GLUT_UP) {
            camera = 9;
        }
        glutPostRedisplay();
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Siola");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);

    glutMainLoop();
    return 0;
}
