#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "Retangulo.h"

/**8
teste***/



//Estrutura autorreferenciada

int main()
{
    int x;
    inicializar();


    struct produto p1={112,"congelados","Frango","O frango possui carne de coloração branca",
    "Setor Norte",111};

    struct produto p2={50,"enlatados","Milho","Após abrir deve-se consumir dentro do perido de 30 dias",
    "Setor Sul",28};

     struct produto p3={30,"Vegetais","Maça","maça é um fruto de arvore macieria",
    "Setor Leste",19};

    struct produto p4={333,"Produtos de Limpeza","Desinfetante",
    "são substâncias que são usando na Limpeza",
    "Setor Oeste",30};

    struct produto p5={111,"arroz",NULL,NULL,NULL,NULL};

    Lista*pro1;
    pro1=inicializaE();
    printf("Primeiro\n");
    pro1=inserirProdutoTeste(pro1,p1);
/*
    int opt=adm();
    if(opt==1){
        pro1=inserirProdutoTeste(pro1,p1);
        pro1=inserirProdutoTeste(pro1,p2);
    }
    else if(opt==2){
        buscaProdutoCodigo(pro1,333);
    }
    else if(opt==3){
        imprimeProduto(pro1);
    }
    else if(opt==4){
        ComprarProduto(pro1,p1,50);
    }
    else if(opt==5){
        GuardarMaterial(pro1,p2);
    }
    else if(opt==6){
        imprimeTodosProduto(pro1);
    }

    */


    printf("Quinto\n");
    pro1=inserirProdutoTeste(pro1,p5);
    imprimeTodosProduto(pro1);




    buscaProdutoCodigo(pro1,333);
    ComprarProduto(pro1,p1,10);

    imprimeTodosProduto(pro1);

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
