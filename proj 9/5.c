#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int points[] = {300,150, 400,200, 400,300, 300,350, 200,300, 200,200, 300,150};
    drawpoly(7, points);

    getch();
    closegraph();
    return 0;
}

