
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>


int main()
{

//Variáveis
 int cod, resp;
 char cod2;
 char cg_alt[20];

//Ativador da acentuação gráfica,
//Comando de regionalização
 setlocale(LC_ALL, "Portuguese");


//Inicializar o programa
    system("color e");

printf("\n\n\n\n\n\n\n\n\n.oOOOo.  O       o OooOOo.  o.OOoOoo `OooOOo.         .oOOOo.   O       o ooOoOOo OoooOOoO");
printf("\no     o  o       O O     `O  O        o     `o       .O     o.  o       O    O          o");
printf("\nO.       O       o o      O  o        O      O       o       O  O       o    o         O");
printf("\n `OOoo.  o       o O     .o  ooOO     o     .O       O       o  o       o    O        o");
printf("\n      `O o       O oOooOO'   O        OOooOO'        o       O  o       O    o       O ");
printf("\n       o O       O o         o        o    o         O    Oo o  O       O    O      o");
printf("\nO.    .O `o     Oo O         O        O     O        `o     O'  `o     Oo    O     O");
printf("\n `oooO'   `OoooO'O o'       ooOooOoO  O      o        `OoooO Oo  `OoooO'O ooOOoOo OOooOooO");




//Comando para iniciar o jogo apertando "enter"
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

//Mudar a cor da linha
    system("color f6");


//Apresentação inicial do programa
    printf("\n\n\n\n\n\n\n-----------------------------------------------------------------------------\n");
    printf("                              SUPER QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf ("\n\n\n\n   Olá, seja bem vindo ao  SUPER QUIZ, jogo de perguntas e respostas.");
    printf("\n\n\n   Seu objetivo é acertar todas as questões para conquistar a medalha de ouro");
    printf("\n\n\n   se errar uma pergunta perde tudo e terá que começar novamente.");

//Comando para avançar o inicio
    printf("\n\n\n                                                    Aperte enter para avançar!");
    do{
        cod2 = getch();
    }while (cod2 != 13);

system("cls");/*Limpar a tela anterior*/

//Apresentar as instruções do jogo ao usuário

    system("color f0"); /*Mudar a cor da linha*/

    printf("\n\n\n\n-----------------------------------------------------------------------------\n");
    printf("                           INSTRUÇÕES DO JOGO\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("\n\n* O jogo possui apenas uma alternativa correta;");
    printf("\n\n* o Jogador tem que escolher uma alternatitva e digitar a letra em minúsculo;");
    printf("\n\n* Após responder cada pergunta aperte ENTER e passe para a próxima;");
    printf("\n\n* Lembrando que o programa só passa para outra pergunta, caso acerte a");
    printf("\n  anterior;");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                       QUE A SORTE ESTEJA A SEU FAVOR!");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n\nVamos comecar! \n\n");

// Comando para iniciar o jogo
    printf("\n\nAperte enter !");

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    do{


    system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Primeira pergunta
    printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE?");
    printf("\n\na)Chicara");
    printf("\nb)Jiló");
    printf("\nc)Emcima");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[0]);

//Condicional if, para analisar a resposta do usuário
    system("color f");/*Mudar a cor da linha*/

    if (cg_alt[0]=='b')
{
    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
     do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Segunda pergunta
    printf ("\n2) QUAL POVO PRÉ-COLOMBIANO QUE OCUPOU A REGIÃO ONDE HOJE SE");
    printf("\nLOCALIZA O MÉXICO");
    printf("\n\na)Maias");
    printf("\nb)Incas");
    printf("\nc)Astecas");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[1]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[1]=='a')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Terceira pergunta
    printf ("\n3) QUAL O MAIOR ANIMAL DA TERRA?");
    printf("\n\na)Elefante");
    printf("\nb)Tubarão-Baleia");
    printf("\nc)Baleia azul");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[2]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[2]=='c')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter

    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");;/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Quarta pergunta
    printf ("\n4)QUAL É O JOGO MAIS JOGADO NO MUNDO ATUALMENTE");
    printf("\n\na)League of legends");
    printf("\nb)Counter strike");
    printf("\nc)Battlefield");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[3]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[3]=='a')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");;/*Mudar a cor da linha*/

//Quinta pergunta
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

    printf ("\n5)QUATRO MOEDAS SÃO LANÇADAS SIMULTANEAMENTE. QUA A PROBABILIDADE");
    printf ("\nDE OCORRER COROA EM UMA SÓ MOEDA?");
    printf("\n\na)1/8");
    printf("\nb)2/9");
    printf("\nc)1/4");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[4]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[4]=='c')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
     do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Sexta pergunta
    printf ("\n6)EM QUAL PAÍS FOI CONSTRUÍDO UM CANAL QUE LIGA OS OCEANOS ATLÂNTICO E PACÍFICO");
    printf("\n\na)México");
    printf("\nb)Panamá");
    printf("\nc)EUA");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[5]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[5]=='b')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Sétima pergunta
    printf ("\n7) QUAL A PROPOSIÇÃO COMPOSTA LOGICAMENTE VERDADEIRA:");
    printf("\n\na)(2=2)=>(2.3=5)");
    printf("\nb)(2=3)e(2.3=5)");
    printf("\nc)(2=3)=>(2.3=5)");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[6]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[6]=='c')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Oitava pergunta
    printf ("\n8)QUAL PAÍS ESTÁ LOCALIZADO NA AMÉRICA DO NORTE:");
    printf("\n\na)Mongólia");
    printf("\nb)Congo");
    printf("\nc)Groelândia");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[7]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[7]=='c')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Nona pergunta
    printf ("\n9) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O GÊNERO INDICADO INCORRETAMENTE?");
    printf("\n\na)a ágape");
    printf("\nb)a grama");
    printf("\nc)a hélice");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[8]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[8]=='a')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima pergunta
    printf ("\10)O TÉTANO É UMA DOENÇA AGUDA E CONTAGIOSA QUE PODE SER");
    printf("\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES?");
    printf("\n\na)Certo");
    printf("\nb)Errado");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[9]);

}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[9]=='b')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
     do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima primeira pergunta
    printf ("\n11)CAPITÃES DE AREIA É UM ROMANCE ESCRITO POR QUAL AUTOR?");
    printf("\n\na)Guimarães Rosa");
    printf("\nb)Machado de Assis.");
    printf("\nc)Jorge Amado.");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[10]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[10]=='c')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima Segunda pergunta
    printf ("\n12) O PLURAL DE FOGÃOZINHO E CIDADÃ É: ");
    printf("\n\na)fogõezinhos e cidadãos.");
    printf("\nb)fogãozinhos e cidadãos.");
    printf("\nc)fogõezinhos e cidadões.");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[11]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[11]=='a')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();

    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");;/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima terceira pergunta
    printf ("\n13)QUE FOI O ATOR PRINCIPAL DO FILME SR E SRª SMITH ");
    printf("\n\na)Brad Pitt");
    printf("\nb)Tom Hanks");
    printf("\nc)Tom Cruise");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[12]);
}
//Condicional if, para analisar a resposta do usuário
    if (cg_alt[12]=='a')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

system("color B");;/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima quarta pergunta
    printf ("\n14)DADA AS SENTENÇAS: ");
    printf("\n 1. Ele não chegou a falar com a Presidenta;");
    printf("\n 2. Ele sofreu um entorse grave;");
    printf("\n 3. A tracoma é uma doença contagiosa.");
    printf("\nDeduzimos que:");
    printf("\n\na)apenas a sentença 2 está correta");
    printf("\nb) todas estão corretas");
    printf("\nc)apenas a sentença 1 está correta");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[13]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[13]=='c')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");;/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima quinta pergunta
    printf ("\n15)QUAL ANIME JAPONÊS POSSUI UMA RAPOUSA DE NOVE CALDAS");
    printf("\n\na)Bleach");
    printf("\nb)Alvin e os esquilos");
    printf("\nc)Naruto");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[14]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[14]=='c')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");;/*Mudar a cor da linha*/
    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima sexta pergunta
    printf ("\n16) DETERMINE A ÁREA DE UM TRIÂNGULO COM BASE NOS SEGUINTES DADOS:");
    printf(" (base:3 e altura:8)");
    printf("\n\na)12");
    printf("\nb)11");
    printf("\nc)16");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[15]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[15]=='a')
{
    system("color f");/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");;/*Mudar a cor da linha*/

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima sétima pergunta
    printf ("\n17)QUAL ALTERNATIVA HÁ ERRO NA FLEXÃO DE NÚMEROS? ");
    printf("\n\na)as águas-marinhas, as públicas-formas, os acórdãos");
    printf("\nb)capitães-mor, sabiás-pirangas, autos-de-fé");
    printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[16]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[16]=='b')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    system("color B");;/*Mudar a cor da linha*/

    printf("-----------------------------------------------------------------------------\n");
    printf("                                  QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");

//Décima oitava pergunta
    printf ("\n18)QUEM CANTA A MÚSICA CINQUENTA REIS");
    printf("\n\na)Naiara Azevedo");
    printf("\nb)Maiara e Maraisa");
    printf("\nc)Marília Mendoça");
    printf("\n\nResposta: ");
    scanf ("\n%c", &cg_alt[17]);
}

//Condicional if, para analisar a resposta do usuário
    if (cg_alt[17]=='a')
{
    system("color f");;/*Mudar a cor da linha*/

    printf("\nCerta resposta.");

//Comando para mudar de tela apertando enter
    do{
        cod2 = getch();
    }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/

    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                           PARABÉNSSSSSS!");
    printf("\n\n------------------------------------------------------------------------------");
    printf("\n\n                     VOCÊ GANHOU A MEDALHA DE OURO");
    printf("\n            ACERTOU TODAS QUESTÕES, ISSO PROVA QUE VOCÊ ANDA ESTUDANDO");
    printf("\n                GUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
    printf("\n\n                   SE DESEJAR FINALIZAR O JOGO É SÓ DIGITAR (1)");
    printf("\n                MAS SE QUISER JOGAR NOSSO SUPER QUIZ NOVAMENTE");
    printf("\n             BASTA DIGITAR (0) E VOCÊ SERÁ DIRECIONADO PARA O INICIO");
    scanf("%d", &resp);

}

//Utiliza a condiciona else caso o o usuário responda errado alguma questão
    else
    system("cls");/*Limpar a tela anterior*/
    system("color C");;/*Mudar a cor da linha*/
{
    printf ("\n\n                    VOCÊ ERROU!\n");
    printf("\n\n           Deseja jogar novamente?");
    printf("\n\n       Se sim digite 0 se não digite 1: ");
    scanf("\n\n%d", &resp);

    system("cls");/*Limpar a tela anterior*/
}

}
//Utilizar a estrutura do...while para retornar ao início caso o usuário deseje
    while (resp==0);

//Apresentar a mensagem de agradecimento após o usuário finalizar o jogo
    system("cls");/*Limpar a tela anterior*/
    printf("\n\nOBRIGADO POR PARTICIPAR DO QUIZ");



 return (0);

}
