#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numlen(int x)
{
    int sum = 0;
    if (x < 0 || x > 0)
        sum++;
    while (x != 0)
    {
        sum++;
        x /= 10;
    }
    return sum;
}

int main()
{
    system("color 2");
    double a, b, c, z, ans;
    int x, y, back, i;

    printf("块x3Ωよ玒计 : ");
	scanf("%lf",&a);
	printf("块x2Ωよ玒计 : ");
	scanf(" %lf",&b);
	printf("块x1Ωよ玒计 : ");
	scanf(" %lf",&c);
	printf("块x0Ωよ玒计 : ");
	scanf(" %lf",&z);

    for (y = -20; y <= 43; y++)
    {
        back = 0;
        for (x = -60; x <= 60; x++)
        {
            if (y == 0 && x == 60)
                break;
            if (x == 0 && y == 0)
            {
                printf("0");
                continue;
            }
            if (y == 1 && x == 58)
            {
                printf("X");
                continue;
            }
            else if (y == 1 && x == 59)
            {
                printf("禸");
                continue;
            }
            if (y > 40)
            {
                if (x == 0)
                    printf("|");
                else if (y == 42 && x == 2)
                    printf("Y");
                else if (y == 42 && x == 3)
                {
                    printf("禸");
                    x++;
                }
                else if (x == 60)
                    printf("\n");
                else
                    printf(" ");
                continue;
            }
            ans = a * pow(x / 2.0, 3) + b * pow(x / 2.0, 2) + c * x / 2.0 + z;

            if ((int)round(ans) == y)
                printf("*");
            else if (y == -1)
            {
                if ((x + 1) % 20 == 0)
                {
                    if ((x + 1) / 2 == 30)
                        printf(" ");
                    else if ((x + 1) / 2 == -30)
                        printf("   ");
                    else
                        printf("%d", (x + 1) / 2);
                    if (x < 0)
                        back = 3;
                    else
                        back = 1;
                }
                if (x == 0)
                    printf("|");
                else if (back == 0)
                    printf(" ");
                else
                    back--;
            }
            else if (y == 0)
            {
                if (x % 20 == 0)
                    printf("|");
                else
                    printf("-");
            }
            else if (x == 0)
            {
                if (y % 10 == 0)
                {
                    printf("%d", y);
                    back = numlen(y) - 2;
                }
                else
                    printf("|");
            }
            else
            {
                if (back == 0)
                    printf(" ");
                else
                    back--;
            }
        }
        if (y == 0)
            printf("-->");
        printf("\n");
    }

    return 0;
}
