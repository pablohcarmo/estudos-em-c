#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i, j, mes, dia, ano;
    char jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez;

    system("CLS");
    system("COLOR 8B");

    printf("                     CALENDARIO         \n\n");
    printf("OBS: Jan (Janeiro)\n     Fev (Fevereiro)\n     Mar (Marco)\n     Abr (Abril)\n     Mai (Maio)\n     Jun (Junho)\n     Jul (Julho)\n     Ago (Agosto)\n     Set (Setembro)\n     Out (Outubro)\n     Nov (Novembro)\n     Dez (Dezembro)\n");
    getch();
    system("CLS");

    printf("                     CALENDARIO         \n\n");
    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("Informe o dia: ");
    scanf("%d", &dia);


/*
   *ARMARZENAR O DIA, SE FOR <=30, PROCURAR EM FEV, ABR, JUN, SET, NOV  
                     *SE FOR <=31, PROCURAR NOS DEMAIS
   *SE FOR FEVEREIRO, VERIFICAR SE O ANO É BISEXTO OU NÃO, POIS PODE CONTER 29 DIAS NO MÊS DE FEV
   *PERGUNTAR PARA O USUÁRIO QUAL MÊS DESEJA
   *MOSTRAR NA TELA O DIA DA SEMANA
    printf("Dom\nSeg\nTer\nQua\nQui\nSex\nSab\n\n\n\n\n\n\n");

    if(dia <=30){
           switch(mes){
                       case jan:
                            janeiro [0][0] = 29, //Dezembro 2014 -> Segunda
                            janeiro [0][1] = 30, //Dezembro 2014 -> Terça
                            janeiro [0][2] = 31, //Dezembro 2014 -> Quarta
                            janeiro [0][3] = 1,  //Janeiro  2015 -> Quinta
                            janeiro [0][4] = 2,
                            janeiro [0][5] = 3,
                            janeiro [0][6] = 4,
                            janeiro [1][0] = 5,
                            janeiro [1][1] = 6,
                            janeiro [1][2] = 7,
                            janeiro [1][3] = 8,
                            janeiro [1][4] = 9,
                            janeiro [1][5] = 10,
                            janeiro [1][6] = 11,
                            janeiro [2][0] = 12,
                            janeiro [2][1] = 13,
                            janeiro [2][2] = 14,
                            janeiro [2][3] = 15,
                            janeiro [2][4] = 16,
                            janeiro [2][5] = 17,
                            janeiro [2][6] = 18,
                            janeiro [3][0] = 19,
                            janeiro [3][1] = 20,
                            janeiro [3][2] = 21,
                            janeiro [3][3] = 22,
                            janeiro [3][4] = 23,
                            janeiro [3][5] = 24,
                            janeiro [3][6] = 25,
                            janeiro [4][0] = 26,
                            janeiro [4][1] = 27,
                            janeiro [4][2] = 28,
                            janeiro [4][3] = 29,
                            janeiro [4][4] = 30,
                            janeiro [4][5] = 31,
                            janeiro [4][6] = 1;  //Fevereiro 2015 -> Domingo

/*
            printf("Dom\nSeg\nTer\nQua\nQui\nSex\nSab\n\n\n\n\n\n\n");
        janeiro [0][0] = 29, //Dezembro 2014 -> Segunda
        janeiro [0][1] = 30, //Dezembro 2014 -> Terça
        janeiro [0][2] = 31, //Dezembro 2014 -> Quarta
        janeiro [0][3] = 1,  //Janeiro  2015 -> Quinta
        janeiro [0][4] = 2,
        janeiro [0][5] = 3,
        janeiro [0][6] = 4,
        janeiro [1][0] = 5,
        janeiro [1][1] = 6,
        janeiro [1][2] = 7,
        janeiro [1][3] = 8,
        janeiro [1][4] = 9,
        janeiro [1][5] = 10,
        janeiro [1][6] = 11,
        janeiro [2][0] = 12,
        janeiro [2][1] = 13,
        janeiro [2][2] = 14,
        janeiro [2][3] = 15,
        janeiro [2][4] = 16,
        janeiro [2][5] = 17,
        janeiro [2][6] = 18,
        janeiro [3][0] = 19,
        janeiro [3][1] = 20,
        janeiro [3][2] = 21,
        janeiro [3][3] = 22,
        janeiro [3][4] = 23,
        janeiro [3][5] = 24,
        janeiro [3][6] = 25,
        janeiro [4][0] = 26,
        janeiro [4][1] = 27,
        janeiro [4][2] = 28,
        janeiro [4][3] = 29,
        janeiro [4][4] = 30,
        janeiro [4][5] = 31,
        janeiro [4][6] = 1;  //Fevereiro 2015 -> Domingo
   
    int fevereiro[4][6];

        fevereiro [0][0] = 26, //Janeiro   2015 -> Segunda
        fevereiro [0][1] = 27, //Janeiro   2015 -> Terça
        fevereiro [0][2] = 28, //Janeiro   2015 -> Quarta
        fevereiro [0][3] = 29, //Janeiro   2015 -> Quinta
        fevereiro [0][4] = 30, //Janeiro   2015 -> Sexta
        fevereiro [0][5] = 31, //Janeiro   2015 -> Sábado
        fevereiro [0][6] = 1,  //Fevereiro 2015 -> Domingo
        fevereiro [1][0] = 2,
        fevereiro [1][1] = 3,
        fevereiro [1][2] = 4,
        fevereiro [1][3] = 5,
        fevereiro [1][4] = 6,
        fevereiro [1][5] = 7,
        fevereiro [1][6] = 8,
        fevereiro [2][0] = 9,
        fevereiro [2][1] = 10,
        fevereiro [2][2] = 11,
        fevereiro [2][3] = 12,
        fevereiro [2][4] = 13,
        fevereiro [2][5] = 14,
        fevereiro [2][6] = 15,
        fevereiro [3][0] = 16,
        fevereiro [3][1] = 17,
        fevereiro [3][2] = 18,
        fevereiro [3][3] = 19,
        fevereiro [3][4] = 20,
        fevereiro [3][5] = 21,
        fevereiro [3][6] = 22,
        fevereiro [4][0] = 23,
        fevereiro [4][1] = 24,
        fevereiro [4][2] = 25,
        fevereiro [4][3] = 26,
        fevereiro [4][4] = 27,
        fevereiro [4][5] = 28,
        fevereiro [4][6] = 1;   //Março  2015 -> Domingo

    int marco [5][6];

        marco     [0][0] = 23,  //Fevereiro 2015 -> Segunda
        marco     [0][1] = 24,  //Fevereiro 2015 -> Terça
        marco     [0][2] = 25,  //Fevereiro 2015 -> Quarta
        marco     [0][3] = 26,  //Fevereiro 2015 -> Quinta
        marco     [0][4] = 27,  //Fevereiro 2015 -> Sexta
        marco     [0][5] = 28,  //Fevereiro 2015 -> Sábado
        marco     [0][6] = 1,   //Março     2015 -> Domingo
        marco     [1][0] = 2,
        marco     [1][1] = 3,
        marco     [1][2] = 4,
        marco     [1][3] = 5,
        marco     [1][4] = 6,
        marco     [1][5] = 7,
        marco     [1][6] = 8,
        marco     [2][0] = 9,
        marco     [2][1] = 10,
        marco     [2][2] = 11,
        marco     [2][3] = 12,
        marco     [2][4] = 13,
        marco     [2][5] = 14,
        marco     [2][6] = 15,
        marco     [3][0] = 16,
        marco     [3][1] = 17,
        marco     [3][2] = 18,
        marco     [3][3] = 19,
        marco     [3][4] = 20,
        marco     [3][5] = 21,
        marco     [3][6] = 22,
        marco     [4][0] = 23,
        marco     [4][1] = 24,
        marco     [4][2] = 25,
        marco     [4][3] = 26,
        marco     [4][4] = 27,
        marco     [4][5] = 28,
        marco     [4][6] = 29,
        marco     [5][0] = 30,
        marco     [5][1] = 31,
        marco     [5][2] = 1,   //Abril     2015 -> Quarta
        marco     [5][3] = 2,   //Abril     2015 -> Quinta
        marco     [5][4] = 3,   //Abril     2015 -> Sexta
        marco     [5][5] = 4,   //Abril     2015 -> Sábado
        marco     [5][6] = 5;   //Abril     2015 -> Domingo

    int abril [4][6];

        abril     [0][0] = 30,  //Março     2015 -> Quarta
        abril     [0][1] = 31,  //Março     2015 -> Quinta
        abril     [0][2] = 1,   //Abril     2015 -> Sexta
        abril     [0][3] = 2,
        abril     [0][4] = 3,
        abril     [0][5] = 4,
        abril     [0][6] = 5,
        abril     [1][0] = 6,
        abril     [1][1] = 7,
        abril     [1][2] = 8,
        abril     [1][3] = 9,
        abril     [1][4] = 10,
        abril     [1][5] = 11,
        abril     [1][6] = 12,
        abril     [2][0] = 13,
        abril     [2][1] = 14,
        abril     [2][2] = 15,
        abril     [2][3] = 16,
        abril     [2][4] = 17,
        abril     [2][5] = 18,
        abril     [2][6] = 19,
        abril     [3][0] = 20,
        abril     [3][1] = 21,
        abril     [3][2] = 22,
        abril     [3][3] = 23,
        abril     [3][4] = 24,
        abril     [3][5] = 25,
        abril     [3][6] = 26,
        abril     [4][0] = 27,
        abril     [4][1] = 28,
        abril     [4][2] = 29,
        abril     [4][3] = 30,
        abril     [4][4] = 31,
        abril     [4][5] = 1,    //Maio      2015 -> Domingo
        abril     [4][6] = 2;    //Maio      2015 -> Domingo

    int maio [4][6];

        maio      [0][0] = 27,   //Abril     2015 -> Segunda
        maio      [0][1] = 28,   //Abril     2015 -> Terça
        maio      [0][2] = 29,   //Abril     2015 -> Quarta
        maio      [0][3] = 30,   //Abril     2015 -> Quinta
        maio      [0][4] = 1,    //Maio      2015 -> Sexta
        maio      [0][5] = 2,
        maio      [0][6] = 3,
        maio      [1][0] = 4,
        maio      [1][1] = 5,
        maio      [1][2] = 6,
        maio      [1][3] = 7,
        maio      [1][4] = 8,
        maio      [1][5] = 9,
        maio      [1][6] = 10,
        maio      [2][0] = 11,
        maio      [2][1] = 12,
        maio      [2][2] = 13,
        maio      [2][3] = 14,
        maio      [2][4] = 15,
        maio      [2][5] = 16,
        maio      [2][6] = 17,
        maio      [3][0] = 18,
        maio      [3][1] = 19,
        maio      [3][2] = 20,
        maio      [3][3] = 21,
        maio      [3][4] = 22,
        maio      [3][5] = 23,
        maio      [3][6] = 24,
        maio      [4][0] = 25,
        maio      [4][1] = 26,
        maio      [4][2] = 27,
        maio      [4][3] = 28,
        maio      [4][4] = 29,
        maio      [4][5] = 30,
        maio      [4][6] = 31;

    int junho [4][6];

        junho     [0][0] = 1,   //Maio      2015 -> Segunda
        junho     [0][1] = 2,   //Maio      2015 -> Terça
        junho     [0][2] = 3,   //Maio      2015 -> Quarta
        junho     [0][3] = 4,   //Maio      2015 -> Quinta
        junho     [0][4] = 5,   //Maio      2015 -> Sexta
        junho     [0][5] = 6,
        junho     [0][6] = 7,
        junho     [1][0] = 8,
        junho     [1][1] = 9,
        junho     [1][2] = 10,
        junho     [1][3] = 11,
        junho     [1][4] = 12,
        junho     [1][5] = 13,
        junho     [1][6] = 14,
        junho     [2][0] = 15,
        junho     [2][1] = 16,
        junho     [2][2] = 17,
        junho     [2][3] = 18,
        junho     [2][4] = 19,
        junho     [2][5] = 20,
        junho     [2][6] = 21,
        junho     [3][0] = 22,
        junho     [3][1] = 23,
        junho     [3][2] = 24,
        junho     [3][3] = 25,
        junho     [3][4] = 26,
        junho     [3][5] = 27,
        junho     [3][6] = 28,
        junho     [4][0] = 29,
        junho     [4][1] = 30,
        junho     [4][2] = 1,   //Julho     2015 -> Quarta
        junho     [4][3] = 2,   //Julho     2015 -> Quinta
        junho     [4][4] = 3,   //Julho     2015 -> Sexta
        junho     [4][5] = 4,   //Julho     2015 -> Sábado
        junho     [4][6] = 5;   //Julho     2015 -> Domingo

    int julho [4][6];

        julho     [0][0] = 29,  //Junho     2015 -> Segunda
        julho     [0][1] = 30,  //Junho     2015 -> Terça
        julho     [0][2] = 1,   //Julho     2015 -> Quarta
        julho     [0][3] = 2,
        julho     [0][4] = 3,
        julho     [0][5] = 4,
        julho     [0][6] = 5,
        julho     [1][0] = 6,
        julho     [1][1] = 7,
        julho     [1][2] = 8,
        julho     [1][3] = 9,
        julho     [1][4] = 10,
        julho     [1][5] = 11,
        julho     [1][6] = 12,
        julho     [2][0] = 13,
        julho     [2][1] = 14,
        julho     [2][2] = 15,
        julho     [2][3] = 16,
        julho     [2][4] = 17,
        julho     [2][5] = 18,
        julho     [2][6] = 19,
        julho     [3][0] = 20,
        julho     [3][1] = 21,
        julho     [3][2] = 22,
        julho     [3][3] = 23,
        julho     [3][4] = 24,
        julho     [3][5] = 25,
        julho     [3][6] = 26,
        julho     [4][0] = 27,
        julho     [4][1] = 28,
        julho     [4][2] = 29,
        julho     [4][3] = 30,
        julho     [4][4] = 31,
        julho     [4][5] = 1,   //Agosto    2015 -> Sábado
        julho     [4][6] = 2;   //Agosto    2015 -> Domingo

    int agosto[4][6];

        agosto    [0][0] = 27,  //Julho     2015 -> Segunda
        agosto    [0][1] = 28,  //Julho     2015 -> Terça
        agosto    [0][2] = 29,  //Julho     2015 -> Quarta
        agosto    [0][3] = 30,  //Julho     2015 -> Quinta
        agosto    [0][4] = 31,  //Julho     2015 -> Sexta
        agosto    [0][5] = 1,   //Julho     2015 -> Sábado
        agosto    [0][6] = 2,   //Agosto    2015 -> Domingo
        agosto    [1][0] = 3,
        agosto    [1][1] = 4,
        agosto    [1][2] = 5,
        agosto    [1][3] = 6,
        agosto    [1][4] = 7,
        agosto    [1][5] = 8,
        agosto    [1][6] = 9,
        agosto    [2][0] = 10,
        agosto    [2][1] = 11,
        agosto    [2][2] = 12,
        agosto    [2][3] = 13,
        agosto    [2][4] = 14,
        agosto    [2][5] = 15,
        agosto    [2][6] = 16,
        agosto    [3][0] = 17,
        agosto    [3][1] = 18,
        agosto    [3][2] = 19,
        agosto    [3][3] = 20,
        agosto    [3][4] = 21,
        agosto    [3][5] = 22,
        agosto    [3][6] = 23,
        agosto    [4][0] = 24,
        agosto    [4][1] = 25,
        agosto    [4][2] = 26,
        agosto    [4][3] = 27,
        agosto    [4][4] = 28,
        agosto    [4][5] = 29,
        agosto    [4][6] = 30,
        agosto    [5][0] = 31,
        agosto    [5][1] = 1,   //Setembro  2015 -> Terça
        agosto    [5][2] = 2,   //Setembro  2015 -> Quarta
        agosto    [5][3] = 3,   //Setembro  2015 -> Quinta
        agosto    [5][4] = 4,   //Setembro  2015 -> Sexta
        agosto    [5][5] = 5,   //Setembro  2015 -> Sábado
        agosto    [5][6] = 6;   //Setembro  2015 -> Domingo

    int setembro[4][6];
    
        setembro  [0][0] = 31,  //Agosto    2015 -> Sábado
        setembro  [0][1] = 1,   //Setembro  2015 -> Domingo
        setembro  [0][2] = 2,
        setembro  [0][3] = 3,
        setembro  [0][4] = 4,
        setembro  [0][5] = 5,
        setembro  [0][6] = 6,
        setembro  [1][0] = 7,
        setembro  [1][1] = 8,
        setembro  [1][2] = 9,
        setembro  [1][3] = 10,
        setembro  [1][4] = 11,
        setembro  [1][5] = 12,
        setembro  [1][6] = 13,
        setembro  [2][0] = 14,
        setembro  [2][1] = 15,
        setembro  [2][2] = 16,
        setembro  [2][3] = 17,
        setembro  [2][4] = 18,
        setembro  [2][5] = 19,
        setembro  [2][6] = 20,
        setembro  [3][0] = 21,
        setembro  [3][1] = 22,
        setembro  [3][2] = 23,
        setembro  [3][3] = 24,
        setembro  [3][4] = 25,
        setembro  [3][5] = 26,
        setembro  [3][6] = 27,
        setembro  [4][0] = 28,
        setembro  [4][1] = 29,
        setembro  [4][2] = 30,
        setembro  [4][3] = 1,    //Outubro   2015 -> Quinta
        setembro  [4][4] = 2,    //Outubro   2015 -> Sexta
        setembro  [4][5] = 3,    //Outubro   2015 -> Sábado
        setembro  [4][6] = 4;    //Outubro   2015 -> Domingo

    int outubro[4][6];
    
        outubro   [0][0] = 28,  //Agosto    2015 -> Sábado
        outubro   [0][1] = 29,  //Setembro  2015 -> Domingo
        outubro   [0][2] = 30,
        outubro   [0][3] = 1,
        outubro   [0][4] = 2,
        outubro   [0][5] = 3,
        outubro   [0][6] = 4,
        outubro   [1][0] = 5,
        outubro   [1][1] = 6,
        outubro   [1][2] = 7,
        outubro   [1][3] = 8,
        outubro   [1][4] = 9,
        outubro   [1][5] = 10,
        outubro   [1][6] = 11,
        outubro   [2][0] = 12,
        outubro   [2][1] = 13,
        outubro   [2][2] = 14,
        outubro   [2][3] = 15,
        outubro   [2][4] = 16,
        outubro   [2][5] = 17,
        outubro   [2][6] = 18,
        outubro   [3][0] = 19,
        outubro   [3][1] = 20,
        outubro   [3][2] = 21,
        outubro   [3][3] = 22,
        outubro   [3][4] = 23,
        outubro   [3][5] = 24,
        outubro   [3][6] = 25,
        outubro   [4][0] = 26,
        outubro   [4][1] = 27,
        outubro   [4][2] = 28,
        outubro   [4][3] = 29,
        outubro   [4][4] = 30,
        outubro   [4][5] = 31,
        outubro   [4][6] = 1;    //Novembro  2015 -> Domingo    

    int novembro[5][6];

        novembro  [0][0] = 26,  //Julho     2015 -> Segunda
        novembro  [0][1] = 27,  //Julho     2015 -> Terça
        novembro  [0][2] = 28,  //Julho     2015 -> Quarta
        novembro  [0][3] = 39,  //Julho     2015 -> Quinta
        novembro  [0][4] = 30,  //Julho     2015 -> Sexta
        novembro  [0][5] = 31,  //Julho     2015 -> Sábado
        novembro  [0][6] = 1,   //Agosto    2015 -> Domingo
        novembro  [1][0] = 2,
        novembro  [1][1] = 3,
        novembro  [1][2] = 4,
        novembro  [1][3] = 5,
        novembro  [1][4] = 6,
        novembro  [1][5] = 7,
        novembro  [1][6] = 8,
        novembro  [2][0] = 9,
        novembro  [2][1] = 10,
        novembro  [2][2] = 11,
        novembro  [2][3] = 12,
        novembro  [2][4] = 13,
        novembro  [2][5] = 14,
        novembro  [2][6] = 15,
        novembro  [3][0] = 16,
        novembro  [3][1] = 17,
        novembro  [3][2] = 18,
        novembro  [3][3] = 19,
        novembro  [3][4] = 20,
        novembro  [3][5] = 21,
        novembro  [3][6] = 22,
        novembro  [4][0] = 23,
        novembro  [4][1] = 24,
        novembro  [4][2] = 25,
        novembro  [4][3] = 26,
        novembro  [4][4] = 27,
        novembro  [4][5] = 28,
        novembro  [4][6] = 39,
        novembro  [5][0] = 30,
        novembro  [5][1] = 1,   //Dezembro  2015 -> Terça
        novembro  [5][2] = 2,   //Dezembro  2015 -> Quarta
        novembro  [5][3] = 3,   //Dezembro  2015 -> Quinta
        novembro  [5][4] = 4,   //Dezembro  2015 -> Sexta
        novembro  [5][5] = 5,   //Dezembro  2015 -> Sábado
        novembro  [5][6] = 6;   //Dezembro  2015 -> Domingo

    int dezembro [4][6];
    
        dezembro  [0][0] = 30,  //Agosto    2015 -> Sábado
        dezembro  [0][1] = 1,  //Setembro  2015 -> Domingo
        dezembro  [0][2] = 2,
        dezembro  [0][3] = 3,
        dezembro  [0][4] = 4,
        dezembro  [0][5] = 5,
        dezembro  [0][6] = 6,
        dezembro  [1][0] = 7,
        dezembro  [1][1] = 8,
        dezembro  [1][2] = 9,
        dezembro  [1][3] = 10,
        dezembro  [1][4] = 11,
        dezembro  [1][5] = 12,
        dezembro  [1][6] = 13,
        dezembro  [2][0] = 14,
        dezembro  [2][1] = 15,
        dezembro  [2][2] = 16,
        dezembro  [2][3] = 17,
        dezembro  [2][4] = 18,
        dezembro  [2][5] = 19,
        dezembro  [2][6] = 20,
        dezembro  [3][0] = 21,
        dezembro  [3][1] = 22,
        dezembro  [3][2] = 23,
        dezembro  [3][3] = 24,
        dezembro  [3][4] = 25,
        dezembro  [3][5] = 26,
        dezembro  [3][6] = 27,
        dezembro  [4][0] = 28,
        dezembro  [4][1] = 29,
        dezembro  [4][2] = 30,
        dezembro  [4][3] = 31,
        dezembro  [4][4] = 1,    //Janeiro   2016 -> Sexta
        dezembro  [4][5] = 2,    //Janeiro   2016 -> Sábado
        dezembro  [4][6] = 3;    //Janeiro   2016 -> Domingo
*/
 //   system("CLS");








  //  system("CLS");

//    printf("%d %d"
        





    system("PAUSE");
    return 0;
}
