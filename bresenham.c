#include <stdio.h>

// include graphics and plot the points
int main()
{
    int x1 = 5, y1 = 6, x2 = 11, y2 = 11;
    int y0 = y2 - y1;
    int x0 = x2 - x1;
    float slope = y0 / x0;
    if (slope <= 1)
    {
        int P = 2 * y0 - x0;
        while (x1 <= x2 && y1 <= y2)
        {
            printf("(%d, %d)", x1, y1);
            if (P < 0)
            {
                x1 += 1;
                P += 2 * y0;
            }
            else
            {
                x1 += 1;
                y1 += 1;
                P += 2 * y0 - 2 * x0;
            }
        }
    }
    else
    {
        printf("(%d, %d)", x1, y1);
        int P = 2 * x0 - y0;
        while (x1 <= x2 && y1 <= y2)
        {
            if (P < 0)
            {
                x1 += 1;
                y1 += 1;
                P += 2 * x0 - 2 * y0;
            }
            else
            {
                y1 += 1;
                P += 2 * x0;
            }
        }
    }
    return 0;
}
