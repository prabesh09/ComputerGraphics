// Digital Differential Analyzer

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

int main()
{
    int x1, y1, x2, y2;
    int gd = DETECT, gm;
    float slope;

    printf("Enter the x1 and x2: ");
    scanf("%d %d", &x1, &x2);
    printf("Enter the y1 and y2: ");
    scanf("%d %d", &y1, &y2);

    slope = (float)(y2 - y1) / (x2 - x1);
    initgraph(&gd, &gm, "C://TurboC3//BGI");
    if (slope < 1)
    {
        while (x1 <= x2)
        {
            delay(20);
            putpixel(x1, y1, RED);
            x1 = x1 + 1;
            y1 = y1 + slope;
        }
    }
    else
    {
        while (y1 <= y2)
        {
            delay(20);
            putpixel(x1, y1, RED);
            y1 = y1 + 1;
            x1 = x1 + 1 / slope;
        }
    }
    outtextxy(x2, y2, "Monkey D. Luffy");
    getch();
    return 0;
}
