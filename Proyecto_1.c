#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>

int huge DetectVGA256(){
    return 4;
}

void main (){
    int driver = DETECT, modo;

    installuserdriver("Svga256",DetectVGA256);
    initgraph(&driver,&modo, "");

    //setbkcolor(15);

    getch();

    closegraph();

}
