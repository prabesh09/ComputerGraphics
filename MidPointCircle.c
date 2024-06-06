#include <stdio.h>
#include <SDL2/SDL.h>

// include graphics and plot the points
int main()
{
    int radius = 10;
    int P = 1 - radius;
    int x = 0, y = 10;
    while (x <= y)
    {
        printf("(%d, %d)", x, y);
        printf("(%d, %d)", y, x);
        printf("(%d, %d)", y, -x);
        printf("(%d, %d)", x, -y);
        printf("(%d, %d)", -x, -y);
        printf("(%d, %d)", -y, -x);
        printf("(%d, %d)", -y, x);
        printf("(%d, %d)", -x, y);
        if (P < 0)
        {
            x += 1;
            P += 2 * x + 1;
        }
        else
        {
            x += 1;
            y -= 1;
            P += 2 * x - 2 * y + 1;
        }
    }
}