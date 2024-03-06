 #include <conio.h>
#include <graphics.h>
#include <dos.h>

#define AnchoPantalla getmaxx()
#define LargoPantalla getmaxy()

/**********FUNCION PARA INICIAR MODO GRAFICO***********/
void modo_grafico();
/**********FUNCION PARA INICIAR LA MUSICA***********/
void musica();
/**********FUNCIONES DE PRESENTACION***********/
void fondo_presentacion();
void presentacion_texto();
void logo();
/********** FUNCIONES DE DIBUJO-ELEMENTOS***********/
void background_animation();
void mountain();
void tree();
void casa();
void moto();
void poro();
void nieve();

int main(){
    //modo_grafico();
    fondo_presentacion();
    musica();
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

    if (resultado != grOk){ //se comprueba si ha ocurrido un error al iniciar el modo grafico
        getch();
        exit(1);
    }

}

void musica(){
 /* sound(261.63); delay(400); nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(349.23);delay(200);nosound();delay(100);
    sound(392);delay(200);nosound();delay(100);
    sound(349.23);delay(200);nosound();delay(100);
    sound(329.63);delay(200);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(392);delay(400);nosound();delay(100);
    sound(392);delay(200);nosound();delay(100);
    sound(440);delay(200);nosound();delay(100);
    sound(392);delay(200);nosound();delay(100);
    sound(349.23);delay(200);nosound();delay(100);
    sound(329.63);delay(400);nosound();delay(100);
    sound(261.63);delay(400);nosound();delay(100);
    sound(261.63);delay(400);nosound();delay(100);
    sound(440);delay(400);nosound();delay(100);
    sound(440);delay(200);nosound();delay(100);
    sound(466.16);delay(200);nosound();delay(100);
    sound(440);delay(200);nosound();delay(100);
    sound(392);delay(200);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(261.63);delay(200);nosound();delay(100);
    sound(261.63);delay(200);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(392);delay(400);nosound();delay(100);
    sound(329.63);delay(400);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(200);

    sound(261.63);delay(800);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(329.63);delay(400);nosound();delay(200);
    sound(329.63);delay(800);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(329.63);delay(400);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(261.63);delay(400);nosound();delay(200);
    sound(392);delay(800);nosound();delay(100);
    sound(440);delay(400);nosound();delay(100);
    sound(392);delay(400);nosound();delay(100);
    sound(349.23);delay(400);nosound();delay(100);
    sound(523.25);delay(400);nosound();delay(100);
    sound(261.63);delay(400);nosound();delay(100);
    sound(261.63);delay(200);nosound();delay(100);
    sound(261.63);delay(200);nosound();delay(100);
    sound(293.66);delay(400);nosound();delay(100);
    sound(392);delay(400);nosound();delay(100);
    sound(329.63);delay(400);nosound();delay(200);
    sound(349.23);delay(800);nosound();delay(100);*/
}

void fondo_presentacion(){
    //DWORD screenWidth = GetSystemMetrics (SM_CXSCREEN);
    //DWORD screenHeight = GetSystemMetrics (SM_CYSCREEN);

    initwindow(AnchoPantalla,LargoPantalla,"Sistema de Facturacion Carnico",50,0,false,true);

    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(0,0,760,800);
    setfillstyle(SOLID_FILL,WHITE);
    bar(760,0,1280,800);
}

void presentacion_texto(){
    setbkcolor(WHITE);
    settextstyle(10,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(820,130,"UNIVERSIDAD NACIONAL");
    outtextxy(890,160,"DE INGENIERIA");

    settextstyle(10,HORIZ_DIR,2);
    setcolor(RED);
    outtextxy(800,250,"GRUPO:");
    setcolor(BLUE);
    outtextxy(910,250,"IM5-CO");

    setcolor(RED);
    outtextxy(800,290,"ASIGNATURA:");
    setcolor(BLUE);
    outtextxy(825,320,"LENGUAJES DE PROGRAMACION");

    setcolor(RED);
    outtextxy(800,360,"INTEGRANTES:");
    setcolor(BLUE);
    outtextxy(825,390,"SCARLETT A. SOTELO SERRANO");
    setcolor(0);
    outtextxy(825,420,"CARNE:   ");
    setcolor(BLUE);
    outtextxy(925,420,"2016-0006U");
    outtextxy(825,450,"MARCELA D.P SAENZ MONTANO");
    setcolor(0);
    outtextxy(825,480,"CARNE:");
    setcolor(BLUE);
    outtextxy(925,480,"2016-0624U");
    setcolor(BLUE);
    outtextxy(825,510,"ABRAHAM ");
    setcolor(0);
    outtextxy(825,540,"CARNE:");
    setcolor(BLUE);
    outtextxy(925,540,"");

    setcolor(RED);
    outtextxy(825,570,"DOCENTE:");
    setcolor(1);
    outtextxy(825,600,"ING. JACQUELINE LOPEZ");

    setcolor(4);
    outtextxy(825,630,"FECHA DE ENTREGA:");
    setcolor(1);
    outtextxy(825,660,"&& DE NOVIEMBRE 2016");

}

void logo(){
    int logo_parte_1[18] = {
    906, 20
    ,906, 92
    ,971, 92
    ,971, 43
    ,953, 43
    ,953, 73
    ,925, 73
    ,925, 20
    ,906, 20

    };

    int logo_parte_2[26] = {
    931, 20
    ,931, 68
    ,949, 68
    ,949, 38
    ,977, 38
    ,977, 92
    ,1018, 92
    ,1018, 41
    ,999, 41
    ,999, 74
    ,994, 74
    ,994, 20
    ,931, 20

    };

    int logo_parte_3[10] = {
    909, 36
    ,1018, 36
    ,1018, 20
    ,999, 20
    ,999, 36

    };

    setcolor(1);
    setfillstyle(SOLID_FILL,1);
    fillpoly(9,logo_parte_1);

    setcolor(1);
    setfillstyle(SOLID_FILL,1);
    fillpoly(12,logo_parte_2);

    setcolor(1);
    setfillstyle(SOLID_FILL,1);
    fillpoly(5,logo_parte_3);

}

void background_animation(){
    int i;

    /*BARRA DE BASE BLANCA*/
    for (i=60;i<690;i++){
        setcolor(WHITE);
        circle(i,549,24);
    }

    /*ARCO*/
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    pieslice(375,490,0,180,360);

    /*BARRA DE BASE GRIS CLARO*/
    for (i=40;i<710;i++){
        setcolor(LIGHTGRAY);
        circle(i,500,26);
    }

    mountain();
    tree();
    casa();
    moto();
    poro();
    nieve();
}

void mountain(){
    int i;

    /*COORDENADAS DE LA PRIMER MONTANNA*/
    int mountain_1_1[14] = {67,474,147,298,175,274,181,302,199,269,198,475,67,475};

    int mountain_1_2[14] = {198,267,198,475,331,475,255,306,218,269,213,305,198,267};

    int mountain_copa_1_1[16] = {148, 293,197, 184,197, 270,180, 301,175, 274,149, 297,149, 295,147, 296};

    int mountain_copa_1_2[12] = {198, 270,197, 183,256, 305,218, 271,212, 304,198, 270};

    /*COORDENADAS DE LA SEGUNDA MONTANNA*/
    int mountain_2_1[14] = {330, 474,369, 389,383, 378,386, 393,394, 376,394, 474,330, 474};

    int mountain_2_2[14] = {394, 473,393, 377,400, 392,404, 377,421, 393,458, 475,394, 474};

    int mountain_copa_2_1[12] = {370, 387,393, 335,393, 375,385, 392,382, 378,369, 387};

    int mountain_copa_2_2[12] = {393, 374,393, 334,422, 394,404, 376,401, 394,393, 374};

    /*COORDENADAS DE LA TERCERA MONTANNA*/
    int mountain_3_1[16] = {435, 427,449, 398,460, 390,463, 399,470, 389,471, 476,457, 475,435, 426};

    int mountain_3_2[16] = {471, 475,471, 389,475, 402,479, 386,494, 403,506, 428,483, 473,471, 475};

    int mountain_copa_3_1[14] = {450, 396,470, 353,470, 389,463, 399,460, 390,459, 390,451, 396};

    int mountain_copa_3_2[12] = {470, 351,470, 389,475, 401,478, 388,494, 403,471, 351};

    /*COORDENADAS DE LA CUARTA MONTANNA*/
    int mountain_4_1[14] = {481, 476,544, 350,564, 335,567, 355,582, 330,582, 476,482, 476};

    int mountain_4_2[14] = {581, 475,581, 328,593, 354,597, 329,624, 354,683, 476,581, 475};

    int mountain_copa_4_1[12] = {544, 349,581, 269,581, 327,568, 353,565, 334,545, 349};

    int mountain_copa_4_2[12] = {581, 327,581, 269,625, 354,596, 328,591, 356,581, 327};

    /*PRIMER MONTANNA*/
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(7,mountain_1_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(7,mountain_1_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(8,mountain_copa_1_1);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(6,mountain_copa_1_2);

    /*SEGUNDA MONTANNA*/
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(7,mountain_2_1);

    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(7,mountain_2_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(6,mountain_copa_2_1);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(6,mountain_copa_2_2);

    /*TERCER MONTANNA*/
    setcolor(LIGHTMAGENTA);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    fillpoly(7,mountain_3_1);

    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL,MAGENTA);
    fillpoly(7,mountain_3_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(7,mountain_copa_3_1);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(6,mountain_copa_3_2);

    /*CUARTA MONTANNA*/
    setcolor(LIGHTMAGENTA);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    fillpoly(7,mountain_4_1);

    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL,MAGENTA);
    fillpoly(7,mountain_4_2);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    fillpoly(6,mountain_copa_4_1);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(6,mountain_copa_4_2);

}

void tree(){
    /*COORDENADAS DEL PRIMER ARBOL*/
    int tree_1_1[20] = {
    121, 499
    ,119, 373
    ,89, 425
    ,101, 425
    ,100, 430
    ,82, 460
    ,94, 462
    ,94, 467
    ,76, 500
    ,121, 498
    };

    int tree_1_2[20] = {
    121, 498
    ,119, 374
    ,150, 426
    ,139, 425
    ,139, 430
    ,155, 462
    ,143, 462
    ,144, 466
    ,164, 500
    ,121, 498

    };

    int tree_tronco_1[10] = {
    111, 500
    ,111, 517
    ,123, 517
    ,125, 499
    ,111, 501

    };

    /*COORDENADAS DEL SEGUNDO ARBOL*/
    int tree_2[8] = {
    185, 480
    ,219, 374
    ,253, 482
    ,186, 481

    };

    int tree_tronco_2[10] = {
    215, 480
    ,215, 497
    ,222, 497
    ,223, 479
    ,214, 479

    };

    /*COORDENADAS DEL TERCER ARBOL*/
    int tree_3_1[20] = {
    266, 395
    ,268, 493
    ,234, 493
    ,249, 469
    ,250, 465
    ,239, 464
    ,253, 442
    ,254, 436
    ,245, 437
    ,266, 395

    };

    int tree_3_2[20] = {
    267, 396
    ,269, 492
    ,299, 492
    ,287, 468
    ,286, 465
    ,296, 465
    ,280, 440
    ,280, 436
    ,291, 437
    ,267, 396

    };

    int tree_tronco_3[10] = {
    262, 493
    ,262, 507
    ,273, 507
    ,273, 494
    ,263, 494

    };

    /*COORDENADAS DEL CUARTO ARBOL*/
    int tree_4[8] = {
    320, 500
    ,357, 382
    ,395, 500
    ,321, 500

    };

    int tree_tronco_4[10] = {
    353, 501
    ,353, 519
    ,361, 518
    ,360, 500
    ,352, 500

    };

    /*COORDENADAS DEL QUINTO ARBOL*/
    int tree_5_1[20] = {
    433, 473
    ,430, 407
    ,414, 435
    ,421, 434
    ,422, 437
    ,412, 455
    ,417, 454
    ,417, 456
    ,407, 473
    ,432, 475

    };

    int tree_5_2[20] = {
    431, 406
    ,433, 473
    ,454, 473
    ,442, 457
    ,443, 455
    ,451, 454
    ,442, 439
    ,441, 435
    ,448, 435
    ,431, 406

    };

    int tree_tronco_5[10] = {
    427, 475
    ,427, 485
    ,435, 485
    ,435, 475
    ,426, 476

    };

    /*COORDENADAS DEL SEXTO ARBOL*/
    int tree_6[8] = {
    605, 497
    ,634, 404
    ,664, 497
    ,606, 497

    };

    int tree_tronco_6[10] = {
    631, 497
    ,632, 513
    ,638, 512
    ,638, 498
    ,632, 498

    };

    /*PRIMER ARBOL*/
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(10,tree_1_1);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(10,tree_1_2);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_1);

    /*SEGUNDO ARBOL*/
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(4,tree_2);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_2);

    /*TERCER ARBOL*/
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(10,tree_3_1);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(10,tree_3_2);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_3);

    /*CUARTO ARBOL*/
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(4,tree_4);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_4);

    /*QUINTO ARBOL*/
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    fillpoly(10,tree_5_1);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(10,tree_5_2);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_5);

    /*SEXTO ARBOL*/
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(4,tree_6);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    fillpoly(5,tree_tronco_6);

}

void casa(){
    int casa[12] = {
    476, 512
    ,477, 437
    ,521, 400
    ,564, 437
    ,565, 512
    ,477, 513

    };

    int casa_techo[42] = {
    520, 401
    ,564, 438
    ,564, 440
    ,567, 441
    ,571, 439
    ,574, 435
    ,573, 432
    ,568, 429
    ,525, 391
    ,521, 390
    ,519, 391
    ,515, 394
    ,467, 431
    ,464, 437
    ,464, 441
    ,465, 444
    ,472, 445
    ,475, 444
    ,476, 443
    ,477, 436
    ,521, 400

    };

    int casa_chimenea[18] = {
    484, 417
    ,485, 398
    ,482, 397
    ,482, 390
    ,502, 390
    ,502, 395
    ,498, 397
    ,500, 405
    ,484, 416

    };

    int casa_ventana_1[10] = {
    512, 420
    ,512, 439
    ,528, 439
    ,528, 420
    ,513, 420

    };

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(6,casa);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(21,casa_techo);

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(9,casa_chimenea);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    fillpoly(5,casa_ventana_1);
}

void moto(){
    int moto_parte_morada[30] = {
    77, 531
    ,251, 533
    ,249, 526
    ,245, 522
    ,219, 509
    ,201, 503
    ,192, 500
    ,185, 499
    ,177, 516
    ,176, 519
    ,169, 518
    ,158, 518
    ,101, 515
    ,87, 517
    ,76, 521

    };

    int moto_parte_amarilla[74] = {
    76, 530
    ,239, 535
    ,245, 533
    ,251, 531
    ,248, 525
    ,244, 521
    ,232, 513
    ,215, 506
    ,203, 502
    ,186, 499
    ,175, 518
    ,171, 517
    ,174, 507
    ,175, 502
    ,181, 494
    ,187, 490
    ,189, 487
    ,198, 489
    ,209, 493
    ,219, 498
    ,227, 500
    ,236, 507
    ,245, 514
    ,251, 524
    ,254, 531
    ,253, 535
    ,251, 538
    ,248, 543
    ,246, 544
    ,238, 546
    ,205, 546
    ,176, 545
    ,151, 544
    ,127, 541
    ,96, 540
    ,78, 538
    ,77, 529

    };

    int moto_parte_morada_2[44] = {
    253, 531
    ,250, 520
    ,244, 513
    ,233, 504
    ,214, 493
    ,195, 488
    ,190, 488
    ,197, 483
    ,202, 482
    ,205, 482
    ,209, 478
    ,214, 479
    ,221, 479
    ,223, 483
    ,224, 489
    ,224, 492
    ,232, 498
    ,238, 503
    ,242, 508
    ,246, 511
    ,248, 519
    ,253, 531

    };


    int moto_parte_gris[44] = {
    191, 559
    ,191, 547
    ,180, 547
    ,180, 559
    ,170, 559
    ,170, 565
    ,236, 565
    ,238, 564
    ,240, 563
    ,242, 560
    ,261, 541
    ,261, 537
    ,259, 536
    ,256, 536
    ,253, 539
    ,235, 558
    ,224, 558
    ,224, 547
    ,214, 547
    ,214, 559
    ,214, 560
    ,191, 560
    };

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    fillpoly(15,moto_parte_morada);

    setcolor(YELLOW );
    setfillstyle(SOLID_FILL,YELLOW);
    fillpoly(37,moto_parte_amarilla);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    fillpoly(22,moto_parte_morada_2);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(22,moto_parte_gris);


    /*RUEDAS*/
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(146,555,10,10);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(84,555,10,10);

    bar(86,544,144,566);

    setbkcolor(RED);
    setcolor(RED);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(90,555,8,8);

    setcolor(RED);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(115,555,8,8);

    setcolor(RED);
    setfillstyle(5,LIGHTGRAY);
    fillellipse(140,555,8,8);

}

void poro(){
    int i;

   // while(!kbhit()){
        //for (i=0;i<690;i++){
            int poro_parte_blanca[176] = {
            84,463, 78,471, 77,474, 78,479, 78,484, 78,488, 75,490, 78,491, 79,496, 81,497, 84,504, 87,509, 91,513, 92,516, 98,516,103,513,
            107,513, 111,515, 117,516, 123,516, 125,516, 127,513, 130,511, 128,492, 130,489, 133,487, 137,484, 134,490, 139,488, 144,483,
            142,489, 145,489, 148,483, 149,484, 153,486, 152,483, 157,485, 160,488, 156,482, 161,483, 165,490, 168,502, 164,510, 159,514,
            159,516, 166,517, 169,517, 172,505, 172,503, 174,500, 177,498, 181,491, 182,488, 183,485, 186,487, 186,484, 183,479, 183,474,
            185,475, 187,475, 183,471, 182,467, 179,465, 181,465, 183,465, 181,463, 177,458, 176,453, 176,449, 173,447, 168,440, 163,436,
            159,435, 156,435, 150,437, 146,437, 143,435, 137,439, 134,440, 127,439, 123,440, 118,442, 108,440, 107,445, 99,451, 94,458,
            89,461, 85, 462};

            int poro_lengua[52] = {129, 490,129, 497,130, 502,133, 508,137, 514,143, 517,151, 517,157, 514,163, 512,167, 505,167, 499,166, 489
            ,160, 483,161, 488,154, 483,155, 486,150, 485,148, 482,145, 490,143, 489,145, 484,137, 489,136, 491,136, 485,132, 487,129, 491};

            int poro_lengua_detalle[10] = {148,487, 149,493, 150,498, 150,503, 151,505};

            int poro_cuerno_1[48] = {107, 439,107, 436,104, 431,100, 429,94, 429,89, 429,88, 431,85, 436,84, 440,83, 444,83, 448,82, 451
            ,80, 455,74, 456,70, 453,71, 449,70, 457,74, 461,80, 462,89, 460,95, 456,102, 450,105, 445,107, 439};

            int poro_cuerno_2[30] = {158, 433,159, 430,164, 428,168, 425,172, 424,176, 427,179, 431,180, 438,179, 443,175, 447,172, 445
            ,168, 440,166, 438,161, 434,158, 433};

            int poro_ojo_1[24] = {123, 468,127, 466,127, 463,126, 459,124, 457,121, 457,119, 459,118, 463,120, 465,119, 466,123, 468,123, 468};

            int poro_ojo_2[20] = {156, 461,159, 463,161, 461,161, 459,160, 456,160, 455,158, 453,156, 453,155, 457,156, 460};

            int poro_gorro_1[60] = {108, 439,114, 442,120, 441,124, 439,128, 438,133, 440,136, 438,140, 438,144, 435,148, 435,155, 436,157, 432
            ,158, 429,160, 427,159, 422,156, 418,153, 414,147, 412,128, 415,118, 416,110, 417,99, 417,96, 421,90, 424,92, 427,98, 427,103, 429
            ,107, 432,107, 436,108, 440};

            int poro_gorro_2[46] = {94, 423,99, 421,105, 418,109, 418,115, 417,121, 416,129, 415,138, 413,144, 412,151, 412,144, 406,135, 402
            ,125, 400,112, 401,102, 405,94, 412,85, 423,81, 429,76, 434,81, 437,86, 432,92, 427,93, 423};

            int poro_gorro_3[34] = {71, 436,75, 435,79, 436,80, 439,80, 447,77, 451,72, 453,71, 449,68, 448,68, 456,63, 454,62, 451,62, 445
            ,62, 441,65, 440,67, 438,72, 436};


            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(88,poro_parte_blanca);

            setcolor(LIGHTMAGENTA);
            setfillstyle(SOLID_FILL,LIGHTMAGENTA);
            fillpoly(26,poro_lengua);

            setcolor(MAGENTA);
            setfillstyle(SOLID_FILL,MAGENTA);
            fillpoly(5,poro_lengua_detalle);

            setcolor(BROWN);
            setfillstyle(SOLID_FILL,BROWN);
            fillpoly(24,poro_cuerno_1);

            setcolor(BROWN);
            setfillstyle(SOLID_FILL,BROWN);
            fillpoly(15,poro_cuerno_2);

            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(12,poro_ojo_1);

            setcolor(BLACK);
            setfillstyle(SOLID_FILL,BLACK);
            fillpoly(10,poro_ojo_2);

            setcolor(DARKGRAY);
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(30,poro_gorro_1);

            setcolor(RED);
            setfillstyle(SOLID_FILL,RED);
            fillpoly(23,poro_gorro_2);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(17,poro_gorro_3);

       // }

   // }

}

void nieve(){
    int i;

}

