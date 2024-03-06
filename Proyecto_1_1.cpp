#include <conio.h>
#include <graphics.h>
#include <windows.h>

#define AnchoPantalla getmaxx()
#define LargoPantalla getmaxy()

/**********FUNCION PARA INICIAR MODO GRAFICO***********/
void modo_grafico();
/**********FUNCIONES DE PRESENTACION***********/
void fondo_presentacion();
void presentacion_texto();
void logo();
/********** FUNCIONES DE DIBUJO-ELEMENTOS***********/
void background_animation();
void mountain();
void tree();
void letrero();
void moto();
void poro();
void nieve();

int main(){
    modo_grafico();
    fondo_presentacion();
    presentacion_texto();
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

void presentacion_texto(){
    setbkcolor(WHITE);
    settextstyle(10,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(90,130,"UNIVERSIDAD NACIONAL");
    outtextxy(160,160,"DE INGENIERIA");

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
    outtextxy(25,450,"MARCELA DEL PILAR SAENZ MONTANO");
    setcolor(0);
    outtextxy(25,480,"CARNE: ");
    setcolor(BLUE);
    outtextxy(120,480,"2016-0624U");

    setcolor(RED);
    outtextxy(10,520,"DOCENTE:");
    setcolor(1);
    outtextxy(25,550,"ING. JACQUELINE LOPEZ ALVARADO");

    setcolor(4);
    outtextxy(10,590,"FECHA DE ENTREGA:");
    setcolor(1);
    outtextxy(25,620,"&& DE NOVIEMBRE 2016");

}

void logo(){
    int i;

    //RECTANGULOS VERTICALEW
    for ( i=10;i<126;i++){
        setcolor(1);
        rectangle(170,10,210,i);
    }
    for (i=50;i<126;i++){
        rectangle(260,60,290,i);
    }
    for (i=10;i<90;i++){
        rectangle(220,10,250,i);
    }
    for (i=40;i<126;i++){
        rectangle(300,70,330,i);
    }
    for (i=10;i<40;i++){
        rectangle(340,10,370,i);
    }
    for (i=50;i<126;i++){
        rectangle(340,50,370,i);
    }
    //RECTANGULOS HORIZONTALES
    for (i=210;i<260;i++){
        rectangle(210,100,i,125);
    }
    for (i=220;i<331;i++){
        rectangle(240,10,i,40);
    }
    for (i=330;i<340;i++){
        rectangle(330,100,i,125);
    }

}

void background_animation(){
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

    mountain();
    tree();
    letrero();
    moto();
    poro();
    nieve();
}

void mountain(){
    /*COORDENADAS DE LA PRIMER MONTANNA*/
    int mountain_1_1[]={620,430,700,240,700,430,620,430};
    int mountain_1_2[]={700,430,700,240,780,430,700,430};
    int mountain_1_2_1[]={736,297,700,240,780,430,736,297};
    int c_mountain_1_1[]={676,297,700,240,700,302,676,297};
    int c_mountain_1_2[]={701,290,701,240,730,290,701,290};
    /*COORDENADAS DE LA SEGUNDA MONTANNA*/
    int mountain_2_1[]={810,430,870,280,870,430,810,430};
    int mountain_2_2[]={870,430,870,280,950,430,870,430};
    int c_mountain_2_1[]={854,320,870,280,870,320,854,320};
    int c_mountain_2_2[]={870,320,870,280,890,320,870,320};
    /*COORDENADAS DE LA MONTANNA DE FONDO*/
    int mountain_f_1[]={900,430,970,290,970,430,900,430};
    int mountain_f_2[]={1050,430,970,290,970,430,960,430};
    int c_mountain_f_1[]={955,320,970,290,970,320,955,320};
    int c_mountain_f_2[]={970,320,970,290,988,320,970,320};
    /*COORDENADAS DE LA TERCER MONTANNA*/
    int mountain_3_1[]={1000,430,1110,220,1110,430,1000,430};
    int mountain_3_2[]={1110,430,1110,220,1220,430,1110,430};
    int mountain_3_1_1[]={1000,430,1050,300,1110,220,1000,430};
    int c_mountain_3_1[]={1087,250,1110,220,1110,250,1087,250};
    int c_mountain_3_2[]={1110,250,1110,220,1125,250,1110,250};

    //PRIMER MONTANNA
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(4,mountain_1_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(4,mountain_1_2);
    fillpoly(4,mountain_1_2_1);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    pieslice(688,300,170,350,12);
    fillpoly(4,c_mountain_1_1);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    pieslice(715,290,190,360,14);
    fillpoly(4,c_mountain_1_2);

    //MONTANNA DE FONDO
    setcolor(LIGHTMAGENTA);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    fillpoly(4,mountain_f_1);

    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL,MAGENTA);
    fillpoly(4,mountain_f_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    pieslice(970,320,170,270,15);
    fillpoly(4,c_mountain_f_1);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    pieslice(971,320,270,360,18);
    fillpoly(4,c_mountain_f_2);

    //SEGUNDA MONTANNA
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(4,mountain_2_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(4,mountain_2_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    pieslice(870,320,170,270,15);
    fillpoly(4,c_mountain_2_1);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    pieslice(871,320,270,360,18);
    fillpoly(4,c_mountain_2_2);

    //TERCER MONTANNA
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(4,mountain_3_1);
    //setcolor(0);
    fillpoly(4,mountain_3_1_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(4,mountain_3_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    pieslice(1110,250,170,270,20);
    fillpoly(4,c_mountain_3_1);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    pieslice(1111,250,270,360,16);
    fillpoly(4,c_mountain_3_2);
}

void tree(){
    /*COORDENADAS DEL PRIMER ARBOL*/
    int tree_1_1_1[]={615,440,635,415,660,415,660,440,615,440};
    int tree_1_1_2[]={625,415,640,390,660,390,660,415,625,415};
    int tree_1_1_3[]={635,390,650,365,660,365,660,390,635,390};
    int tree_1_1_4[]={640,365,660,340,660,340,660,365,640,365};
    int tree_1_2_1[]={660,414,660,440,705,440,685,414,660,414};
    int tree_1_2_2[]={660,415,660,390,680,390,700,415,660,415};
    int tree_1_2_3[]={660,390,660,365,670,365,690,390,660,390};
    int tree_1_2_4[]={660,365,660,340,660,340,680 ,365,660,365};
    /*COORDENAS DEL SEGUNDO ARBOL [ARBOL1 - +160(x) -24(y)]*/
    int tree_2_1_1[]={775,416,795,391,820,391,820,416,775,416};
    int tree_2_1_2[]={785,391,800,366,820,366,820,391,785,391};
    int tree_2_1_3[]={795,366,810,341,820,341,820,366,795,366};
    int tree_2_1_4[]={800,341,820,316,820,316,820,341,800,341};
    int tree_2_2_1[]={820,390,820,416,865,416,845,390,820,390};
    int tree_2_2_2[]={820,391,820,366,840,366,860,391,820,391};
    int tree_2_2_3[]={820,366,820,341,830,341,850,366,820,366};
    int tree_2_2_4[]={820,341,820,316,820,316,840,341,820,341};
    /*COORDENADAS DEL TERCER ARBOL [ARBOL2 - +50(x) +12(y)]*/
    int tree_3_1_1[]={825,428,845,403,870,403,870,428,825,428};
    int tree_3_1_2[]={835,403,850,378,870,378,870,403,835,403};
    int tree_3_1_3[]={845,378,860,353,870,353,870,378,845,378};
    int tree_3_1_4[]={850,353,870,328,870,328,870,353,850,353};
    int tree_3_2_1[]={870,402,870,428,915,428,895,402,870,402};
    int tree_3_2_2[]={870,403,870,378,890,378,910,403,870,403};
    int tree_3_2_3[]={870,378,870,353,880,353,900,378,870,378};
    int tree_3_2_4[]={870,453,870,328,870,328,890,353,870,353};
    /*COORDENADAS DEL CUARTO ARBOL [ARBOL3 - +100(x) +14(y)]*/
    int tree_4_1_1[]={925,442,945,417,970,417,970,442,925,442};
    int tree_4_1_2[]={935,417,950,392,970,392,970,417,935,417};
    int tree_4_1_3[]={945,392,960,367,970,367,970,392,945,392};
    int tree_4_1_4[]={950,367,970,342,970,342,970,367,950,367};
    int tree_4_2_1[]={970,416,970,442,1015,442,995,416,970,416};
    int tree_4_2_2[]={970,417,970,392,990,392,1010,417,970,417};
    int tree_4_2_3[]={970,392,970,367,980,367,1000,392,970,392};
    int tree_4_2_4[]={970,467,970,342,970,342,990,367,970,367};
    /*COORDENADAS DEL QUINTO ARBOL [ARBOL1 - +410(x) +0(y)]*/
    int tree_5_1_1[]={1025,440,1045,415,1070,415,1070,440,1025,440};
    int tree_5_1_2[]={1035,415,1050,390,1070,390,1070,415,1035,415};
    int tree_5_1_3[]={1045,390,1060,365,1070,365,1070,390,1045,390};
    int tree_5_1_4[]={1050,365,1070,340,1070,340,1070,365,1050,365};

    int tree_5_2_1[]={1070,414,1070,440,1115,440,1095,414,1070,414};
    int tree_5_2_2[]={1070,415,1070,390,1090,390,1110,415,1070,415};
    int tree_5_2_3[]={1070,390,1070,365,1080,365,1100,390,1070,390};
    int tree_5_2_4[]={1070,365,1070,340,1070,340,1090,365,1070,365};
    /*COORDENADAS DEL SEXTO ARBOL [ARBOL5 - +120(x) +18(y)]*/
    int tree_6_1_1[]={1145,458,1165,433,1190,433,1190,458,1145,458};
    int tree_6_1_2[]={1155,433,1170,408,1190,408,1190,433,1155,433};
    int tree_6_1_3[]={1165,408,1180,383,1190,383,1190,408,1165,408};
    int tree_6_1_4[]={1170,383,1190,358,1190,358,1190,383,1170,383};

    int tree_6_2_1[]={1190,432,1190,458,1235,458,1215,432,1190,432};
    int tree_6_2_2[]={1190,433,1190,408,1210,408,1230,433,1190,433};
    int tree_6_2_3[]={1190,408,1190,383,1200,383,1220,408,1190,408};
    int tree_6_2_4[]={1190,383,1190,358,1190,358,1210,383,1190,383};

    /*PRIMER ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(650,440,670,464);
    //LATERAL IZQUIERDO
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_1_1_1);
    fillpoly(5,tree_1_1_2);
    fillpoly(5,tree_1_1_3);
    fillpoly(5,tree_1_1_4);
    //LATERAL DERECHO
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_1_2_1);
    fillpoly(5,tree_1_2_2);
    fillpoly(5,tree_1_2_3);
    fillpoly(5,tree_1_2_4);

    /*SEGUNDO ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(810,416,830,440);
    //LATERAL IZQUIERDO
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_2_1_1);
    fillpoly(5,tree_2_1_2);
    fillpoly(5,tree_2_1_3);
    fillpoly(5,tree_2_1_4);
    //LATERAL DERECHO
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_2_2_1);
    fillpoly(5,tree_2_2_2);
    fillpoly(5,tree_2_2_3);
    fillpoly(5,tree_2_2_4);

    /*TERCER ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(860,428,880,452);
    //LATERAL IZQUIERDO
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_3_1_1);
    fillpoly(5,tree_3_1_2);
    fillpoly(5,tree_3_1_3);
    fillpoly(5,tree_3_1_4);
    //LATERAL DERECHO
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_3_2_1);
    fillpoly(5,tree_3_2_2);
    fillpoly(5,tree_3_2_3);
    fillpoly(5,tree_3_2_4);

    /*CUARTO ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(960,442,980,466);
    //LATERAL IZQUIERDO
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_4_1_1);
    fillpoly(5,tree_4_1_2);
    fillpoly(5,tree_4_1_3);
    fillpoly(5,tree_4_1_4);
    //LATERAL DERECHO
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_4_2_1);
    fillpoly(5,tree_4_2_2);
    fillpoly(5,tree_4_2_3);
    fillpoly(5,tree_4_2_4);

    /*QUINTO ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(1060,440,1080,464);
    //LATERAL IZQUIERDO
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_5_1_1);
    fillpoly(5,tree_5_1_2);
    fillpoly(5,tree_5_1_3);
    fillpoly(5,tree_5_1_4);
    //LATERAL DERECHO
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_5_2_1);
    fillpoly(5,tree_5_2_2);
    fillpoly(5,tree_5_2_3);
    fillpoly(5,tree_5_2_4);

    /*SEXTO ARBOL*/
    //TRONCO
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    bar(1182,446,1204,478);
    //LATERAL IZQUIERDO
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(5,tree_6_1_1);
    fillpoly(5,tree_6_1_2);
    fillpoly(5,tree_6_1_3);
    fillpoly(5,tree_6_1_4);
    //LATERAL DERECHO
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(5,tree_6_2_1);
    fillpoly(5,tree_6_2_2);
    fillpoly(5,tree_6_2_3);
    fillpoly(5,tree_6_2_4);

}

void letrero(){
    int punta_sign[]={1170,430,1170,400,1190,415,1170,430};
    setbkcolor(YELLOW);
    setfillstyle(1,BLACK);
    bar(1130,390,1142,480);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(1110,400,1170,430);
    fillpoly(4,punta_sign);
    setcolor(RED);
    settextstyle(10,HORIZ_DIR,3);
    outtextxy(1118,401,"UNI");
}

void moto(){
    int i;
    int moto_front[]={775,511,775,490,840,490,820,511,775,511};
    setbkcolor(RED);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    pieslice(775,490,0,90,65);

    bar(620,470,774,490);
    //bar(620,460,680,470);

    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(680,460,774,470);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(5,moto_front);

    /*FONDO RUEDAS*/
    setcolor(0);
    setfillstyle(SOLID_FILL,0);
    bar(658,490,775,512);

    pieslice(658,501,90,270,11);
    /*FIN FONDO RUEDAS*/

    /*RUEDAS*/
    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(662,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(662,501,5,5);

    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(682,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(682,501,5,5);

    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(702,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(702,501,5,5);

    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(722,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(722,501,5,5);

    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(742,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(742,501,5,5);

    setcolor(LIGHTGRAY);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(762,501,10,10);
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(762,501,5,5);
    /*FIN RUEDAS*/

    /*CAJA*/
    setbkcolor(LIGHTMAGENTA);
    setcolor(WHITE);
    settextstyle(11,HORIZ_DIR,1);
    outtextxy(620,424," C  &  C++ ");

    setbkcolor(LIGHTBLUE);
    setfillstyle(3,LIGHTBLUE);
    bar(620,440,680,470);

    setfillstyle(3,LIGHTBLUE);
    bar(617,410,684,425);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    bar(646,410,653,470);
    /*FIN CAJA*/
}

void poro(){
    int poro_P[]={713,368,713,418,685,388,713,368};

    /*PIES PORO*/
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillellipse(715,455,9,6);
    fillellipse(740,455,9,6);
    /*FIN PIES PORO*/

    /*CUERPO DEL PORO PARTE BLANCA*/
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    bar(700,438,754,453);
    pieslice(715,418,0,90,50);
    pieslice(715,416,130,180,40);
    fillpoly(4,poro_P);
    pieslice(715,416,180,250,40);
    pieslice(715,406,290,330,50);
    pieslice(710,433,336,362,50);
    //setcolor(BLACK);
    //setfillstyle(SOLID_FILL,BLACK);
    bar(700,413,730,443);
    /*FIN CUERPO DEL PORO*/

    /*OJO DEL PORO*/
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(730,400,6,9);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillellipse(732,402,3,6);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(727,397,2,4);
    /*FIN OJO DEL PORO*/

    /*LENGUA DEL PORO*/
    int lengua[]={770,428,768,442,735,418,746,418,770,428};
    setcolor(LIGHTMAGENTA);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    pieslice(770,435,180,360,4);
    pieslice(766,435,180,360,8);
    fillpoly(5,lengua);
    pieslice(766,435,0,90,8);
    /*FIN LENGUA DEL PORO*/

    /*CUERNOS DEL PORO*/

    /*FIN CUERNOS DEL PORO*/

}

void nieve(){
    int i;

    /*for (i=0;i<454;i++){
        circle(700,i,1);

    }*/
}
