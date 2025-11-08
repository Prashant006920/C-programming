#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 320, y = 240, r;
    for (r = 30; r <= 150; r += 30)
        circle(x, y, r);

    getch();
    closegraph();
    return 0;
}

