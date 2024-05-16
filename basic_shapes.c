#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TurboC3//BGI");

    // first initialization
    line(100, 100, 200, 200);
    circle(100, 100, 50);

    // human
    circle(250, 250, 60);
    circle(220, 250, 10);
    circle(270, 250, 10);
    rectangle(210, 270, 280, 280);
    rectangle(200, 310, 300, 400);
    rectangle(200, 400, 220, 450);
    rectangle(280, 400, 300, 450);

    // dog
    rectangle(410, 300, 500, 380);
    circle(380, 300, 30);
    circle(360, 300, 4);
    circle(400, 300, 4);
    rectangle(370, 310, 390, 315);

    return 0;
}