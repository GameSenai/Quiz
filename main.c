//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>


int main()
{
//Vari�veis

    int resp;
    char cod2;
    char cg_alt[20];
    int certo_p=0,errado_p=0;

//Ativador da acentua��o gr�fica,
//Comando de regionaliza��o
 setlocale(LC_ALL, "Portuguese");

system("color 3f");
printf("\n\n\n\n\n\n\n\n                       #####   #     #  ######  #######  ######");
printf("\n                      #     #  #     #  #     #  #        #     #");
printf("\n                      #        #     #  #     #  #        #     #");
printf("\n                       #####   #     #  ######   #####    ######");
printf("\n                            #  #     #  #        #        #   #");
printf("\n                      #     #  #     #  #        #        #    #");
printf("\n                       #####    #####   #        #######  #     #");


printf("\n\n\n                                             ###    #     #   #####   #######");
printf("\n                                            #   #   #     #     #          #");
printf("\n                                           #     #  #     #     #         #");
printf("\n                                           #     #  #     #     #        #");
printf("\n                                           #     #  #     #     #       #");
printf("\n                                            #   #   #     #     #      #");
printf("\n                                             ###     #####    #####   #######");
printf("\n                                              ###");





do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

//Mudar a cor da linha
 system("color 6");


//Apresenta��o inicial do programa
    printf("\n\n\n\n-----------------------------------------------------------------------------\n");
    printf("                              SUPER QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf ("   Ol�, seja bem vindo ao  SUPER QUIZ, jogo de perguntas e respostas");

    printf("\n   Seu objetivo � acertar todas as quest�es para conquistar a medalha de ouro");
    printf("\n   se errar uma pergunta perde tudo e ter� que come�ar tudo novamente.");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                       QUE A SORTE ESTEJA A SEU FAVOR!");
    printf("\n\n---------------------------------------------------------------------------");

// Comando para iniciar o jogo
    printf("\n\nAperte enter para comecar!");
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/


system("color B");

Inicio :
//Titulo do jogo
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Primeira pergunta
    printf ("Vamos comecar! \n\n");
    printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE?");
    printf("\n\na)Chicara");
    printf("\nb)Jil�");
    printf("\nc)Emcima");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[0]);

//Condicional if, para analisar a resposta do usu�rio
    if (cg_alt[0]=='b')
{

 system("color f");
    printf("\nCerta resposta.");

        certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

     do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Segunda pergunta
    printf ("\n2) QUAL POVO PR�-COLOMBIANO QUE OCUPOU A REGI�O ONDE HOJE SE");
    printf("\nLOCALIZA O M�XICO");
    printf("\n\na)Maias");
    printf("\nb)Incas");
    printf("\nc)Astecas");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[1]);


//Condicional if, para analisar a resposta do usu�rio
            if (cg_alt[1]=='a')
{

    system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Terceira pergunta
    printf ("\n3) QUAL O MAIOR ANIMAL DA TERRA?");
    printf(" (base:3 e altura:8)");
    printf("\n\na)Elefante");
    printf("\nb)Tubar�o-Baleia");
    printf("\nc)Baleia azul");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[2]);

//Condicional if, para analisar a resposta do usu�rio
    if (cg_alt[2]=='c')
{

    system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Quarta pergunta
    printf ("\n4)QUAL � O JOGO MAIS JOGADO NO MUNDO ATUALMENTE");
    printf(" (base:3 e altura:8)");
    printf("\n\na)League of legends");
    printf("\nb)Counter strike");
    printf("\nc)Battlefield");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[3]);

//Condicional if, para analisar a resposta do usu�rio
    if (cg_alt[3]=='a')
{

    system("color f");
    printf("\nCerta resposta.");
    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");
//Quinta pergunta
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

    printf ("\n5)QUATRO MOEDAS S�O LAN�ADAS SIMULTANEAMENTE. QUA A PROBABILIDADE");
    printf ("\nDE OCORRER COROA EM UMA S� MOEDA?");
    printf("\n\na)1/8");
    printf("\nb)2/9");
    printf("\nc)1/4");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[4]);


//Condicional if, para analisar a resposta do usu�rio
    if (cg_alt[4]=='c')
{
    system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

     do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Sexta pergunta
    printf ("\n6)EM QUAL PA�S FOI CONSTRU�DO UM CANAL QUE LIGA OS OCEANOS ATL�NTICO E PAC�FICO");
    printf(" (base:3 e altura:8)");
    printf("\n\na)M�xico");
    printf("\nb)Panam�");
    printf("\nc)EUA");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[5]);

    if (cg_alt[5]=='b')
{

    system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");
    system("color B");

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//S�tima pergunta
    printf ("\n7) QUAL A PROPOSI��O COMPOSTA LOGICAMENTE VERDADEIRA:");
        	printf("\n\na)(2=2)=>(2.3=5)");
        	printf("\nb)(2=3)e(2.3=5)");
        	printf("\nc)(2=3)=>(2.3=5)");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[6]);


            if (cg_alt[6]=='c')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Oitava pergunta
printf ("\n8)QUAL PA�S EST� LOCALIZADO NA AM�RICA DO NORTE:");
    printf(" (base:3 e altura:8)");
        	printf("\n\na)Haiti");
        	printf("\nb)M�xico");
        	printf("\nc)Groel�ndia");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[7]);

            if (cg_alt[7]=='c')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"b\"\n");
				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Nona pergunta
    printf ("\n9) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O G�NERO INDICADO INCORRETAMENTE?");
        	printf("\n\na)a �gape");
        	printf("\nb)a grama");
        	printf("\nc)a h�lice");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[8]);

            if (cg_alt[8]=='a')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima pergunta
        printf ("\n10)O T�TANO � UMA DOEN�A AGUDA E CONTAGIOSA QUE PODE SER");
        	printf("\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES?");
        	printf("\n\na)Certo");
        	printf("\nb)Errado");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[9]);

//Condicional if, para analisar a resposta do usu�rio
        if (cg_alt[9]=='b')
        {
            system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima primeira pergunta
     printf ("\n11)CAPIT�ES DE AREIA � UM ROMANCE ESCRITO POR QUAL AUTOR?");
        	printf("\n\na)Guimar�es Rosa");
        	printf("\nb)Machado de Assis.");
        	printf("\nc)Jorge Amado.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[10]);

            if (cg_alt[10]=='c')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");


//D�cima Segunda pergunta
        printf ("\n12) O PLURAL DE FOG�OZINHO E CIDAD� �: ");
        	printf("\n\na)fog�ezinhos e cidad�os.");
        	printf("\nb)fog�ozinhos e cidad�os.");
        	printf("\nc)fog�ezinhos e cidad�es.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[11]);


            if (cg_alt[11]=='a')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima terceira pergunta
        printf ("\n13)QUE FOI O ATOR PRINCIPAL DO FILME SR E SR� SMITH ");
        	printf("\n\na)Brad Pitt");
        	printf("\nb)Tom Hanks");
        	printf("\nc)Tom Cruise");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[12]);

            if (cg_alt[12]=='a')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima quarta pergunta
        printf ("\n14)DADA AS SENTEN�AS: ");
        printf("\n 1. Ele n�o chegou a falar com a Presidenta;");
        printf("\n 2. Ele sofreu um entorse grave;");
        printf("\n 3. A tracoma � uma doen�a contagiosa.");
        printf("\nDeduzimos que:");
        printf("\n\na)apenas a senten�a 2 est� correta");
        printf("\nb) todas est�o corretas");
        printf("\nc)apenas a senten�a 1 est� correta");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[13]);

            if (cg_alt[13]=='c')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}


        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima quinta pergunta
        printf ("\n15)QUAL ANIME JAPON�S POSSUI UMA RAPOUSA DE NOVE CALDAS");
            printf("\n\na)Bleach");
        	printf("\nb)Alvin e os esquilos");
        	printf("\nc)Naruto");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[14]);

            if (cg_alt[14]=='c')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

system("color B");
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima sexta pergunta
        printf ("\n16) DETERMINE A �REA DE UM TRI�NGULO COM BASE NOS SEGUINTES DADOS:");
    printf(" (base:3 e altura:8)");
        	printf("\n\na)12");
        	printf("\nb)11");
        	printf("\nc)16");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[15]);

            if (cg_alt[15]=='a')
        {
system("color B");

        system("color f");
    printf("\nCerta resposta.");
    certo_p++;
    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");
system("color B");

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima s�tima pergunta
            printf ("\n17)QUAL ALTERNATIVA H� ERRO NA FLEX�O DE N�MEROS? ");
            printf("\n\na)as �guas-marinhas, as p�blicas-formas, os ac�rd�os");
        	printf("\nb)capit�es-mor, sabi�s-pirangas, autos-de-f�");
        	printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[16]);

            if (cg_alt[16]=='b')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");
system("color B");

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//D�cima oitava pergunta
        printf ("\n18)QUEM CANTA A M�SICA CINQUENTA REIS");
            printf("\n\na)Naiara Azevedo");
        	printf("\nb)Maiara e Maraisa");
        	printf("\nc)Mar�lia Mendo�a");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &cg_alt[17]);

            if (cg_alt[17]=='a')
        {

        system("color f");
    printf("\nCerta resposta.");

    certo_p++;

    }
			else
			{
				printf ("Resposta errada\n");

				errado_p++;
			}

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

   printf("\n           TEM CERTEZA DAS SUAS RESPOSTAS?");
   printf("\n   VOC� TEM OUTRA CHANCE DE RESPONDER AS PERGUNTAS NOVAMENTE.");
   printf("\n   SE DESEJA RETORNAR AO JOGO DIGITE (0)");
   printf("\n   CASO DESEJE FINALIZAR E VERIFICAR SEU PLACAR DIGITE (1)");
   printf("\n\n                   BOA SORTE!");
   scanf("%d", &resp);

 system("cls");/*Limpar a tela anterior*/

    if (resp==0)

			{
				system ("cls");

				goto Inicio;
			}


     if (resp==1)
     {


    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                           PONTUA��O!");
    printf("\n\n------------------------------------------------------------------------------");
	printf ("      \nAcertos..: %d\n",certo_p);
	printf ("      \nErros....: %d\n",errado_p);
do{
        cod2 = getch();

    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/


        }



    if (certo_p > errado_p)
    {


    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                           PARAB�NSSSSSS!");
    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                     VOC� GANHOU A MEDALHA DE OURO");
    printf("\n            OBTEVE UM TOTAL DE ACERTOS MAIOR QUE O DE ERROS");
    printf("\n            GUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
do{
        cod2 = getch();

    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/


}
else

        {
    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                             GAME OVER");
    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n               SEU N�MERO DE ACERTOS FOI MENOR OU IGUAL AO DE ERROS");
    printf("\n                      PORTANTO N�O GANHOU A MEDALHA DE OUTRO");
do{
        cod2 = getch();

    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

        }

//Apresentar a mensagem de agradecimento ap�s o usu�rio finalizar o jogo
    system("cls");/*Limpar a tela anterior*/
    printf("\n\nOBRIGADO POR PARTICIPAR DO QUIZ");



 return (0);


}
