#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "Retangulo.h"


/**
***
****             @autor                   Reidner sousa
******           @Version                 12.1
*******          @DataUltimaModificacao   12/01/2022 13:24
*******          @NomeCodigo              Projeto 1
******           @TipoCodigo              Lista encadeada
*****            @CoisasParaFazer
****                                      Arruma o "atualizar"
**/


//Estrutura autorreferenciada

int main()
{

    inicializar();


    //struct produto x;

    /*
    struct produto p1= {112,"congelados","Frango","O frango possui carne de colora��o branca",
        "Setor Norte",111
    };

    struct produto p2= {50,"enlatados","Milho","Ap�s abrir deve-se consumir dentro do perido de 30 dias",
        "Setor Sul",28
    };

    struct produto p3= {30,"Vegetais","Ma�a","ma�a � um fruto de arvore macieria",
        "Setor Leste",19
    };

    struct produto p4= {333,"Produtos de Limpeza","Desinfetante",
        "s�o subst�ncias que s�o usando na Limpeza",
        "Setor Oeste",30
    };



    struct produto p5= {111,"arroz",NULL,NULL,NULL,NULL};
*/


    Lista*lop;
    //DigitaStructLocal(lop);
   // AtualizarDados(lop,111,"Feijao com batata");
    printf("\n<n>");
    printf("\b<b>");
    printf("\t<t>");
    printf("\f<f>");

    //passa por enquanto
    controleFuncionario();






    /*
        printf("Quinto\n");
        pro1=inserirProdutoTeste(pro1,p5);
        imprimeTodosProduto(pro1);
    */


    /*
        buscaProdutoCodigo(pro1,333);
        ComprarProduto(pro1,p1,10);

        imprimeTodosProduto(pro1);
    */
    printf("\n\n");


    system("pause");
    return 0;


}




/*
strlen Tamanho da string
strcpy copiar uma string
strcat concatenar duas string junta 2 string
strcmp  comapaar duas string
*/
