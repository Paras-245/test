#include <graphics.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

void drawTriangle(int x[], int y[]) {
    // Draw a triangle based on coordinates (x[], y[])
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}

void translate(int x[], int y[], int tx, int ty) {
    // Translate the triangle by (tx, ty)
    for (int i = 0; i < 3; i++) {
	x[i] += tx;
	y[i] += ty;
    }
}

void rotate(int x[], int y[], int xc, int yc, float angle) {
    // Rotate the triangle around (xc, yc) by 'angle' degrees
    float rad = angle * 3.14159 / 180;  // Convert degrees to radians
    for (int i = 0; i < 3; i++) {
	int xNew = xc + (x[i] - xc) * cos(rad) - (y[i] - yc) * sin(rad);
	int yNew = yc + (x[i] - xc) * sin(rad) + (y[i] - yc) * cos(rad);
	x[i] = xNew;
	y[i] = yNew;
    }
}

void scale(int x[], int y[], int xc, int yc, float sx, float sy) {
    // Scale the triangle relative to (xc, yc) by sx and sy factors
    for (int i = 0; i < 3; i++) {
	x[i] = xc + (x[i] - xc) * sx;
	y[i] = yc + (y[i] - yc) * sy;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x[3], y[3];
    int tx, ty;
    float angle, sx, sy;

    // Input coordinates of the triangle
    cout << "Enter coordinates of the triangle vertices:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Vertex " << i + 1 << " (x, y): ";
        cin >> x[i] >> y[i];
    }

    // Draw original triangle
    setcolor(WHITE);
    drawTriangle(x, y);
    getch();

    // Translation
    cout << "\nEnter translation factors (tx, ty): ";
    cin >> tx >> ty;
    translate(x, y, tx, ty);
    setcolor(YELLOW);
    drawTriangle(x, y);  // Draw translated triangle
    getch();

    // Rotation
    cout << "\nEnter rotation angle (in degrees): ";
    cin >> angle;
    int xc = x[0], yc = y[0];  // Rotate around the first vertex (x[0], y[0])
    rotate(x, y, xc, yc, angle);
    setcolor(GREEN);
    drawTriangle(x, y);  // Draw rotated triangle
    getch();

    // Scaling
    cout << "\nEnter scaling factors (sx, sy): ";
    cin >> sx >> sy;
    scale(x, y, xc, yc, sx, sy);  // Scale relative to the first vertex
    setcolor(RED);
    drawTriangle(x, y);  // Draw scaled triangle
    getch();

    closegraph();
    return 0;
}