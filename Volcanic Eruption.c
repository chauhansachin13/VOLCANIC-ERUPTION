#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int gd = DETECT, gm;
    float i = 0, j = 0;
    int k = 0, l = 0;
    int trpz[] = {349, 380, 325, 150, 324, 150, 300, 380};
    int trpzl[] = {140, 380, 300, 380, 323, 160, 300, 204, 260, 248, 210, 292, 160, 340, 150, 360, 140 380};
    int trpzr[] = {349, 380, 560, 380, 510, 340, 460, 290, 410, 240, 350, 190, 326, 160, 349, 380};

    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    setcolor(13);
    outtextxy(50, 150, " VOLCANIC ERUPTION ");
    setcolor(6);
    rectangle(0, 380, 300, 400);
    setfillstyle(1, 6);
    floodfill(1, 381, 6);
    rectangle(349, 380, 620, 400);
    setfillstyle(1, 6);
    floodfill(350, 381, 6);
    drawpoly(4, trpz);
    drawpoly(9, trpzl);
    setfillstyle(1, 6);
    floodfill(141, 379, 6);
    drawpoly(8, trpzr);
    setfillstyle(1, 6);
    floodfill(350, 379, 6);

    for (k = 0; k < 300; k++)
    {
        setcolor(14);
        line(0 + k, 420, 0 + k, 435);
        line(640 - k, 420, 640 - k, 435);
        delay(10);
    }

    setcolor(14);
    ellipse(325, 425, 0, 360, 160, 25);
    setfillstyle(1, 14);
    floodfill(326, 426, 14);

    for (; i < 27 && j < 400;)
    {
        if (j < 80)
            setcolor(14);
        else if (j >= 80 && j < 200)
            setcolor(LIGHTRED);
        else if (j > 255 && j < 400)
        {
            setcolor(4);
            pieslice(325, 185, 50, 130, 55);
            setfillstyle(1, 4);
            floodfill(326, 151, 4);
        }
        else
            setcolor(RED);
        line(300 + i, 400 - j, 350 - i, 400 - j);
        delay(20);
        i = i + 0.1;
        j = j + 1;
    }

    setcolor(4);
    line(325, 125, 325, 90);
    line(340, 125, 350, 92);
    line(355, 130, 380, 108);
    line(365, 150, 398, 150);
    line(360, 165, 389, 190);
    line(310, 125, 300, 92);
    line(295, 130, 272, 111);
    line(285, 150, 260, 150);
    line(293, 165, 273, 188);

    for (l = 0; l <= 5; l++)
    {
        setcolor(7);
        ellipse(325, 70 - (10 * l), 0, 360, 40 + (20 * l), 15);
        setfillstyle(1, 7);
        floodfill(326, 71 - (10 * l), 7);
        delay(40);
    }

    for (l = 1; l <= 5; l++)
    {
        setcolor(4);
        pieslice(325, 150, 244 - l, 246, 15 * l);
        pieslice(325, 157, 310, 324 - l, 14 * l);
        setfillstyle(1, 4);
        floodfill(320, 159, 4);
        delay(200);
    }

    getch();
    closegraph();
    return 0;
}