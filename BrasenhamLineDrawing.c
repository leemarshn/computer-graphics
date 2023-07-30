#include <stdio.h>
#include <GL/glut.h>

int screenWidth = 800;
int screenHeight = 600;

void drawLine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int absDx = (dx < 0) ? -dx : dx;
    int absDy = (dy < 0) ? -dy : dy;

    int stepX = (x0 < x1) ? 1 : -1;
    int stepY = (y0 < y1) ? 1 : -1;

    int x = x0;
    int y = y0;
    int interchange = 0;

    if (absDy > absDx) {
        int temp = absDx;
        absDx = absDy;
        absDy = temp;
        interchange = 1;
    }

    int d = 2 * absDy - absDx;
    glBegin(GL_POINTS);
    for (int i = 0; i <= absDx; i++) {
        glVertex2i(x, y);
        while (d >= 0) {
            if (interchange)
                x += stepX;
            else
                y += stepY;
            d -= 2 * absDx;
        }
        if (interchange)
            y += stepY;
        else
            x += stepX;
        d += 2 * absDy;
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    int x0 = 100, y0 = 100;
    int x1 = 700, y1 = 400;

    drawLine(x0, y0, x1, y1);

    glFlush();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    screenWidth = w;
    screenHeight = h;
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(screenWidth, screenHeight);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bresenham Line Drawing");
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
