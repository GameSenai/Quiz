
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
//Variáveis
 int cod, resp;
 char cod2;
 char port_alt[4];
 char mat_alt[4];
 char var_alt[4];
 char alt;

//Ativador da acentuação gráfica,
//Comando de regionalização
 setlocale(LC_ALL, "Portuguese");

//Apresentação inicial do programa
    printf("-----------------------------------------------------------------------------\n");
    printf("                                 QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf ("Olá, seja bem vindo ao  QUIZ, jogo de perguntas e respostas");
    printf("\nOnde vc irá testar seus conhecimentos nas principais matérias da escola.");
    printf("\nSeu objetivo é acertar todas as questões para conquistar as estrelas do jogo");
    printf("\nse errar uma terá que começar novamente e perderá tudo.");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                    QUE A SORTE ESTEJA A SEU FAVOR!");
    printf("\n\n---------------------------------------------------------------------------");

// Comando para iniciar o jogo
                printf("\n\nAperte enter para comecar!");
            do{
                cod2 = getch();
            }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/


do{/*Utilizar a estrutura de repetição Do...While*/

//Solicitar os dados ao usuário e armazenar nas variáveis
            printf("\n\nQual matéria deseja jogar?");
            printf("\n\n(1)Português");
            printf("\n\n(2)Matemética");
            printf("\n\n(3)Variedades");
            printf("\n\nDigite o código da matéria desejada: ");
            scanf("%d", &cod);

     system("cls");/*Limpar a tela anterior*/


//Utilizar a condicional if...else, para identificar as opções escolhidas pelo usuário
    if (cod==1){

//Apresentar a opção da matéria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 PORTUGUÊS\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a matéria escolhida pelo usuário
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE?");
        	printf("\n\na)Chicara");
        	printf("\nb)Jiló");
        	printf("\nc)Emcima");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[0]);
        }
//Condicional if, para analisar a resposta do usuário
        if (port_alt[0]=='b')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O GÊNERO INDICADO INCORRETAMENTE?");
        	printf("\n\na)a ágape");
        	printf("\nb)a grama");
        	printf("\nc)a hélice");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[1]);
        }
            if (port_alt[1]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nParabéns você ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3) O PLURAL DE FOGÃOZINHO E CIDADÃ É: ");
        	printf("\n\na)fogõezinhos e cidadãos.");
        	printf("\nb)fogãozinhos e cidadãos.");
        	printf("\nc)fogõezinhos e cidadões.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[2]);
        }system("cls");/*Limpar a tela anterior*/
            if (port_alt[2]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Você é bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS LÁ!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)DADA AS SENTENÇAS: ");
        printf("\n 1. Ele não chegou a falar com a Presidenta;");
        printf("\n 2. Ele sofreu um entorse grave;");
        printf("\n 3. A tracoma é uma doença contagiosa.");
        printf("\nDeduzimos que:");
        	printf("\n\na)apenas a sentença 2 está correta");
        	printf("\nb) todas estão corretas");
        	printf("\nc)apenas a sentença 1 está correta");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[3]);
        }
            if (port_alt[3]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nEstá chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUAL ALTERNATIVA HÁ ERRO NA FLEXÃO DE NÚMEROS? ");
            printf("\n\na)as águas-marinhas, as públicas-formas, os acórdãos");
        	printf("\nb)capitães-mor, sabiás-pirangas, autos-de-fé");
        	printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[4]);
        }
            if (port_alt[4]=='b')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARABÉNSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOCÊ CONQUITOU AS CINCO ESTRELAS, ISSO PROVA QUE VOCÊ ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO É SÓ APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOCÊ SERÁ DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");


         }

         //Utilizar a condicional if...else, para identificar as opções escolhidas pelo usuário
    if (cod==2){

//Apresentar a opção da matéria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 MATEMÁTICA\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a matéria escolhida pelo usuário
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1)QUATRO MOEDAS SÃO LANÇADAS SIMULTANEAMENTE. QUA A PROBABILIDADE");
        	printf ("\nDE OCORRER COROA EM UMA SÓ MOEDA?");
        	printf("\n\na)1/8");
        	printf("\nb)2/9");
        	printf("\nc)1/4");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[0]);
        }
//Condicional if, para analisar a resposta do usuário
        if (mat_alt[0]=='c')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2) DETERMINE A ÁREA DE UM TRIÂNGULO COM BASE NOS SEGUINTES DADOS:");
    printf(" (base:3 e altura:8)");
        	printf("\n\na)12");
        	printf("\nb)11");
        	printf("\nc)16");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[1]);
        }
            if (mat_alt[1]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nParabéns você ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3) QUAL A PROPOSIÇÃO COMPOSTA LOGICAMENTE VERDADEIRA:");
        	printf("\n\na)(2=2)=>(2.3=5)");
        	printf("\nb)(2=3)e(2.3=5)");
        	printf("\nc)(2=3)=>(2.3=5)");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[2]);
        }system("cls");/*Limpar a tela anterior*/
            if (mat_alt[2]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Você é bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS LÁ!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)SE 4 MÁQUINAS FAZEM UM SERVIÇO EM 6 DIAS, ENTÃO 3 DESSAS");
        printf("MÁQUINAS FARÃO O MESMO SERVIÇO EM:");
        	printf("\n\na)7 dias");
        	printf("\nb)8 dias");
        	printf("\nc)4,5 dias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[3]);
        }
            if (mat_alt[3]=='b')
        {

        printf("\nResposta certa");
        printf("\n\nEstá chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUAL ALTERNATIVA HÁ ERRO NA FLEXÃO DE NÚMEROS? ");
            printf("\n\na)as águas-marinhas, as públicas-formas, os acórdãos");
        	printf("\nb)capitães-mor, sabiás-pirangas, autos-de-fé");
        	printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[4]);
        }
            if (mat_alt[4]=='b')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARABÉNSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOCÊ CONQUITOU AS CINCO ESTRELAS, ISSO PROVA QUE VOCÊ ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO É SÓ APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOCÊ SERÁ DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");

        }

                 //Utilizar a condicional if...else, para identificar as opções escolhidas pelo usuário
    if (cod==3){

//Apresentar a opção da matéria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 VARIEDADES\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a matéria escolhida pelo usuário
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1) O TÉTANO É UMA DOENÇA AGUDA E CONTAGIOSA QUE PODE SER");
        	printf("\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES?");
        	printf("\n\na)Certo");
        	printf("\nb)Errado");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[0]);
        }
//Condicional if, para analisar a resposta do usuário
        if (var_alt[0]=='b')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2)CAPITÃES DE AREIA É UM ROMANCE ESCRITO POR QUAL AUTOR?");
        	printf("\n\na)Guimarães Rosa");
        	printf("\nb)Machado de Assis.");
        	printf("\nc)Jorge Amado.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[1]);
        }
            if (var_alt[1]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nParabéns você ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3)QUE FOI O ATOR PRINCIPAL DO FILME SR E SRª SMITH ");
        	printf("\n\na)Brad Pitt.");
        	printf("\nb)Tom Hanks");
        	printf("\nc)Tom Cruise");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[2]);
        }
            if (var_alt[2]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Você é bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS LÁ!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)QUAL ANIME JAPONÊS POSSUI UMA RAPOUSA DE NOVE CALDAS");
            printf("\n\na)Bleach");
        	printf("\nb)Alvin e os esquilos");
        	printf("\nc)Naruto");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[3]);
        }
            if (var_alt[3]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nEstá chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUEM CANTA A MÚSICA CINQUENTA REIS");
            printf("\n\na)Naiara Azevedo");
        	printf("\nb)Maiara e Maraisa");
        	printf("\nc)Marília Mendoça");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[4]);
        }
            if (var_alt[4]=='a')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARABÉNSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOCÊ CONQUISTOU AS CINCO ESTRELAS, ISSO PROVA QUE VOCÊ ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO É SÓ APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOCÊ SERÁ DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");

        }
        else
      	{
    printf("-----------------------------------------------------------------------------\n");
    printf ("\n\nVOCÊ ERROU!\n");
      		printf("\n Deseja jogar novamente?");
      		printf("\n\nSe sim digite 0 se não digite 1: ");
      		scanf("\n\n%d", &resp);
    printf("\n-----------------------------------------------------------------------------\n");
        system("cls");/*Limpar a tela anterior*/
      	      	}

}


    while (resp==0);

    system("cls");
    printf("\n\nOBRIGADO POR PARTICIPAR DO QUIZ");



 return (0);

}






