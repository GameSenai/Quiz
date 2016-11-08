#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{

 int resp;
 char resp2;
 char resp3;

//Apresentação inicial do programa
    printf("-----------------------------------------------------------------------------\n");
    printf("                                 QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf ("Ola, seja bem vindo ao  QUIZ, jogo de perguntas e respostas");
    printf("\nOnde vc ira testar seus conhecimentos nas principais materias da escola.");
    printf("\nResponda as perguntas e no final sabera quantas acertou e quantas");
    printf("\nerrou e qual medalha ganhara.");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                    QUE A SORTE ESTEJA A SEU FAVOR!");
    printf("\n\n---------------------------------------------------------------------------");

    printf("\n\nAperte enter para comecar!");

     do{
        resp2 = getch();

    }while (resp2 != 13);

      system("cls");

  printf("\n\nQual materia deseja jogar?");

    printf("\n\n(1)Portugues");
    printf("\n\n(2)Matematica");
    printf("\n\n(3)Ciencias");
    printf("\n\n(4)Geografia");
    printf("\n\n(5)Historia");
    printf("\n\n(6)Todos");

    printf("\n\nDigite o codigo da materia desejada: ");
    scanf("%d", &resp);

     system("cls");

    if (resp==1)
        {

    printf("-----------------------------------------------------------------------------\n");
    printf("                                 PORTUGUES\n");
    printf("-----------------------------------------------------------------------------\n");
        	printf ("Vamos comecar! \n\n");

        	printf ("\n1) QUAL PALAVRA ESTA ECRITA CORRETAMENTE?");
        	printf("\n\na)Chicara");
        	printf("\nb)Jilo");
        	printf("\nc)Emcima");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &resp3);
        }

        if (resp3=='b')
        {
        printf("\nResposta certa");
        printf("\nVoce acaba de ganhar a primeira estrela");
        printf("\nVamos para a pergunta que vale a segunda estrela");

        }

        else
      	{
      		printf ("\n\nVoce errou!\n");

      	}



 return (0);


}
