#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;
static int year = 0, day = 0,d2=360;
static int y2=0;
int flag=0;
int RedCross=0;
int line_width=1;
static int micros=20;
GLfloat ak=0,bk=0;
int counts =0;
GLfloat ab=4.8;
GLfloat conepos=4.2;
int result=0;
int resflag=0;
int rotflag=0;
int nl=0;

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}
void Background()
{
    //glColor3f (1.0, 1.0, 1.0);

    glBegin(GL_QUADS);
    glPushMatrix();

    // glColor3f(0.0,0.6,0.2);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-3.0,-3.0,0);
    //glColor3f(0.0,1.0,0.0);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-3.0,3.0,0);
    //glColor3f(0.0,1.0,0.0);
    glTexCoord2f(1.0,1.0);
    glVertex3f(3.0,3.0,0);
    //glColor3f(0.0,1.0,0.0);
    glTexCoord2f(1.0,0.0);
    glVertex3f(3.0,-3.0,0);

    glPopMatrix();
    glEnd();

}

void AllFunc()
{
    ///.White.......................
    glPushMatrix();
    glColor3f (1.0, 1.0, 1.0);
    //  glutWireSphere(1.0, 20, 16);   /* draw sun */
    glRotatef ((GLfloat) y2, 0.0, 0.0, 1.0);
    //cout<<"year="<<year<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    //cout<<"day="<<day<<"\n";

    glutWireSphere(0.26, 10, 8);/* draw smaller planet */
    glPopMatrix();
    // glTranslatef (.2, 0.0, 0.7);


    /// Green........................
    glColor3f (0.0, 1.0, 1.0);

    glPushMatrix();
    glRotatef ((GLfloat) y2+35, 0.0, 0.0, 1.0);
    //cout<<"y22="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();

///....Yellow................
    glColor3f (1.0, 1.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) y2+70, 0.0, 0.0, 1.0);
    //cout<<"y333="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();




///....Red................
    glColor3f (1.0, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) y2+105, 0.0, 0.0, 1.0);
    //cout<<"y444="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();



///....Blue................
    glColor3f (0.0, 0.0, 1.0);
    glPushMatrix();
    glRotatef ((GLfloat) y2+140, 0.0, 0.0, 1.0);
    // cout<<"y555="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();



    ///........light green............
    glColor3f (0.0, 1.0, 0.5);
    glPushMatrix();
    glRotatef ((GLfloat) y2+175, 0.0, 0.0, 1.0);
    //cout<<"y666="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();



    ///........purple............
    glColor3f (0.7, 0.0, 0.5);
    glPushMatrix();
    glRotatef ((GLfloat) y2+210, 0.0, 0.0, 1.0);
    //  if(y2==60)
    //      cout<<"y777="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();



    ///........light green............
    glColor3f (0.0, 1.0, 0.5);
    glPushMatrix();
    glRotatef ((GLfloat) y2+245, 0.0, 0.0, 1.0);
    //cout<<"y88="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.26, 10, 8);
    glPopMatrix();


    ///........light Blue............
    glColor3f (0.0, .40, 0.8);
    glPushMatrix();
    glRotatef ((GLfloat) y2+280, 0.0, 0.0, 1.0);
    //cout<<"y99="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.28, 10, 8);
    glPopMatrix();



///........light Red............

    glPushMatrix();
    glColor3f (1.0, .50, 0.5);


    glRotatef ((GLfloat) y2+315, 0.0, 0.0, 1.0);
    //cout<<"y1010="<<y2<<"\n";
    glTranslatef (2.0, 0.0, 0.0);
    glRotatef ((GLfloat) day, 0.0, 0.0, 1.0);
    glutWireSphere(0.28, 10, 8);
    glPopMatrix();


    /// RED CROSS

    if(RedCross==1)
    {
        line_width=1;
        glPushMatrix();
        glLineWidth((GLfloat)line_width);
        glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);

        glVertex3f(-2.0,1,0);
        glVertex3f(2.,-1.6,0);

        glVertex3f(2.0,1,0);
        glVertex3f(-2.,-1.6,0);
        glEnd();
        glPopMatrix();
        Sleep(5);
        RedCross=0;
    }


    ///...PIN........

    glPushMatrix();
    glColor3f (0.7, 0.0, 0.5);

    glScaled(.06,1,.04);   ///main
    glTranslatef (0,-ab,0);///main

    if(flag==1)
    {

        glutSolidCube(1);
    }

    if(ab==3.8)
    {
        flag=0;
    }


    if (result==3)
        micros=20;
    if(result==7)
        micros=10;
        if(result==8)
        micros=7;
    if(counts==100)
    {
      //  cout<<"Result="<<result;
        exit(-1);
    }


    glPopMatrix();


    glColor3f (1.0, 1.0, 0.5);
    glPushMatrix();
    glTranslated(0.0,-conepos,0);
    glRotated(65, -1.0, 0.0, 0.0);
    if(flag==1)
    {
       glutSolidCone(.1,.3,50,50);
    }




    glPopMatrix();


}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

///BACKGROUND..............
    /*glPushMatrix();
    Background();
    glPopMatrix();
    glEnd();*/

    AllFunc();

    glutPostRedisplay();

    glFlush();



    glutSwapBuffers();
}

void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(60.0, (GLfloat) (w)/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
     //gluLookAt (2.0, 0.0, 8.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    gluLookAt (0.0, 0.0, 6.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);///main
}

void animate()
{
    // year = (year+1 ) % 360;
    /// ak=year-.5;
    float rr;
    if(flag==1)
    {
        rr=ab;
        // glTranslatef (0,ab,-75);
        if(ab>2.8)
        {
            //cout<<"rr="<<rr<<"\n";
            ab=ab-.1;
            conepos=conepos-.1;

            // glutPostRedisplay();
        }
        else
        {
            ab=4.8;
            conepos=4.2;
            flag=0;
        }



    }
    day = (day - 10) % 360;
    d2 = (d2 - 1) % 360;


    glutPostRedisplay();
    //if(counts%4==0&&counts!=0)
    {
        rotflag++;
    }

    int u1=500;
    int u2=550;
    if(rotflag<=u1)
        y2 = (y2+1) % 360;
    else
        y2 = (y2-1) % 360;
    if(rotflag>u2)
        rotflag=0;

    if(result==5)
    {
        u1=u1*7;
        u2=u1+50;
    }
    if(y2<=0)
        y2=360;
    Sleep(micros);
    glutPostRedisplay();
}

void check()
{
    if(nl==0)
        cout<<"\n\n\n";
    nl=100;
    if(y2>=35&&y2<=46)//...R...purple........
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";

    }
    else if(y2>=68&&y2<=79)//...R...light green
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=102&&y2<=115)//......R.......deep blue
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=139&&y2<=151)//.....R...red...
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=178&&y2<=188)//....R...yellow...

    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }
    else if(y2>=208&&y2<=220)//....R...Paste......
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }


    else if(y2>=242&&y2<=253)//...R....white.......
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=288&&y2<=300)//...R....Mishti color....
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=324&&y2<=335)//....R....light blue....
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else if(y2>=358&&y2<=360||y2>=0&&y2<=10)//
    {
        result++;
        cout<<"\tProgress=1\n\tScore="<<result<<"\n";
    }

    else
    {
        RedCross=1;
       cout<<"\tProgress=0\n\tScore="<<result<<"\n";
    }


   // cout<<"yyy=="<<y2<<"rrrrrrr="<<result<<"\n";
    ///cout<<result<<"\n";
}


void keyboard (unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'q':
        exit(-1);
        break;

    default:
        break;
    }
}






static void Specialkey(int key, int x, int y)
{


    switch(key)
    {
    case GLUT_KEY_UP:
        flag=1;
        counts++;
        check();



        break;
    default:


        //dx=dx+.5;
        break;
    }


    glutPostRedisplay();

}






int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutDisplayFunc(display);

    // IMG();
    glutCreateWindow (argv[0]);


    //  init ();

    glutSpecialFunc(Specialkey);
    glutDisplayFunc(display);


    glutReshapeFunc(reshape);

    glutKeyboardFunc(keyboard);
    glutIdleFunc(animate);
    glutMainLoop();
    return 0;
}
