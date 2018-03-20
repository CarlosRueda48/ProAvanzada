#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    int heightFirst = 0;
    int heightLast = H - 1;
    int heightMiddle = Y0;

    int widthFirst = 0;
    int widthLast = W - 1;
    int widthMiddle = X0;


    // game loop
    while (1)
    {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        if (bombDir[0] == 'D' || bombDir[1] == 'D')
            heightFirst = heightMiddle + 1;
        else if (bombDir[0] == 'U' || bombDir[1] == 'U')
            heightLast = heightMiddle - 1;

        heightMiddle = (heightFirst + heightLast) / 2;

        if (bombDir[0] == 'R' || bombDir[1] == 'R')
            widthFirst = widthMiddle + 1;
        else if (bombDir[0] == 'L' || bombDir[1] == 'L')
            widthLast = widthMiddle - 1;


        widthMiddle = (widthFirst + widthLast) / 2;



        // the location of the next window Batman should jump to.
        printf("%d %d\n", widthMiddle, heightMiddle);
    }

    return 0;
}
