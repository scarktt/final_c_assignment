#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>

void modo_grafico();
void fondo_presentacion();
void presentacion();
void background_animation();
void logo();

int main(){
    modo_grafico();
    fondo_presentacion();
    presentacion();
    background_animation();
    logo();

    getch();
    closegraph();
    return 0;
}

void modo_grafico(){
    int driver = DETECT;//Se utiliza para detectar el controlador de video
    int modo;//guarda el modo detectado
    int resultado;
    initgraph(&driver,&modo, "C:\\TC20\\BIN");//se utiliza para iniciar el modo grafico
    resultado = graphresult(); //se guarda en la variable resultado la evaluacion de la funcion graphresult()

    if (resultado != grOk){ //se comprueba si ha ocurido al iniciar el modo grafico
        getch();
        exit(1);
    }

}
void fondo_presentacion(){
    //DWORD screenWidth = GetSystemMetrics (SM_CXSCREEN);
    //DWORD screenHeight = GetSystemMetrics (SM_CYSCREEN);

    //printf("%d",screenWidth); 1280
    //printf("%d",screenHeight); 800

    //initwindow(screenWidth,screenHeight,"");

    setfillstyle(SOLID_FILL,WHITE);
    bar(0,0,540,800);
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(540,0,1280,800);
}

void presentacion(){
    setbkcolor(WHITE);
    settextstyle(3,HORIZ_DIR,4);
    setcolor(BLUE);
    outtextxy(70,130,"UNIVERSIDAD NACIONAL");
    outtextxy(140,160,"DE INGENIERIA");

    settextstyle(3,HORIZ_DIR,3);
    setcolor(RED);
    outtextxy(10,250,"GRUPO:");
    setcolor(BLUE);
    outtextxy(110,250,"IM5-CO");

    setcolor(RED);
    outtextxy(10,290,"ASIGNATURA:");
    setcolor(BLUE);
    outtextxy(25,320,"LENGUAJES DE PROGRAMACION");

    setcolor(RED);
    outtextxy(10,360,"INTEGRANTES:");
    setcolor(BLUE);
    outtextxy(25,390,"SCARLETT ALEJANDRA SOTELO SERRANO");
    setcolor(0);
    outtextxy(25,420,"CARNE: ");
    setcolor(BLUE);
    outtextxy(120,420,"2016-0006U");

    setcolor(RED);
    outtextxy(10,520,"DOCENTE:");
    setcolor(1);
    outtextxy(25,550,"ING. JACQUELINE LOPEZ ALVARADO");

    setcolor(4);
    outtextxy(10,590,"FECHA DE ENTREGA:");
    setcolor(1);
    outtextxy(25,620,"&& DE NOVIEMBRE 2016");

}

void background_animation(){
    int mountain_1_1[]={620,430,700,240,700,430,620,430};
    int mountain_1_2[]={700,430,700,240,780,430,700,430};
    int i;

    /*BARRA DE BASE BLANCA*/
    for (i=640;i<1180;i++){
        setcolor(WHITE);
        circle(i,500,20);
    }

    /*BARRA DE BASE GRIS CLARO*/
    for (i=600;i<1220;i++){
        setcolor(LIGHTGRAY);
        circle(i,454,26);
    }

    /*ARCO*/
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,1);
    pieslice(910,430,0,180,320);

    /*MONTANNAS*/
    //PRIMER MONTANNA
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(4,mountain_1_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(4,mountain_1_2);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    //pieslice();

}

void logo(){
    int i;

    //RECTANGULOS VERTICALEW
    for ( i=10;i<125;i++){
        setcolor(1);
        rectangle(100,10,130,i);
    }
    for (i=50;i<126;i++){
        rectangle(180,60,210,i);
    }
    for (i=10;i<90;i++){
        rectangle(140,10,170,i);
    }
    for (i=40;i<126;i++){
        rectangle(220,70,250,i);
    }
    for (i=10;i<40;i++){
        rectangle(260,10,290,i);
    }
    for (i=50;i<126;i++){
        rectangle(260,50,290,i);
    }
    //RECTANGULOS HORIZONTALES
    for (i=100;i<180;i++){
        rectangle(100,100,i,125);
    }
    for (i=160;i<251;i++){
        rectangle(180,10,i,40);
    }
    for (i=250;i<260;i++){
        rectangle(250,100,i,125);
    }

}
