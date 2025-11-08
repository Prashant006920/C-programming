#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");   // Initialize graphics window

    // Draw basic shapes
    setcolor(RED);
    circle(200, 200, 50);      // Draw circle

    setcolor(GREEN);
    rectangle(300, 150, 450, 250);  // Draw rectangle

    setcolor(BLUE);
    line(100, 100, 500, 100);  // Draw line

    // Display text
    setcolor(YELLOW);
    outtextxy(200, 300, "Graphics Demonstration in C");

    getch();       // Wait for key press
    closegraph();  // Close graphics window
    return 0;
}

