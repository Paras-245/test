#include <graphics.h>
#include <iostream.h>
#include <conio.h>



void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw rectangle
    rectangle(100, 100, 500, 400);

    // Display corner coordinates
    outtextxy(90, 90, "100,100");
    outtextxy(500, 90, "500,100");
    outtextxy(500, 410, "500,400");
    outtextxy(100, 410, "100,400");

    // Input x and y coordinates of a point
    int x, y;
    cout << "Enter x and y coordinates of the point: ";
    cin >> x >> y;

    // Perform clipping
    int clippedX = x;
    int clippedY = y;

    if (x < 100) {
        clippedX = 100; // Clip to the left boundary
    } else if (x > 500) {
        clippedX = 500; // Clip to the right boundary
    }

    if (y < 100) {
        clippedY = 100; // Clip to the top boundary
    } else if (y > 400) {
        clippedY = 400; // Clip to the bottom boundary
    }

    // Check if clipping was required
    if (x != clippedX || y != clippedY) {
        cout << "Point was outside. Clipping applied." << endl;
        cout << "Clipped coordinates: (" << clippedX << ", " << clippedY << ")" << endl;
    } else {
        cout << "Point is inside or on the boundary. No clipping required." << endl;
    }

    // Display the clipped point
    putpixel(clippedX, clippedY, WHITE); // Mark the clipped or original point

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
}