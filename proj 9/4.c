#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);

    // Draw two triangles
    int tri1[] = {200, 100, 350, 200, 200, 200, 200, 100};
    int tri2[] = {200, 200, 400, 350, 200, 350, 200, 200};
    fillpoly(4, tri1);
    fillpoly(4, tri2);

    // Blue border
    setcolor(BLUE);
    rectangle(195, 95, 405, 355);

    getch();
    closegraph();
    return 0;
}

