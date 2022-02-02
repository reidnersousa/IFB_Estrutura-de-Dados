


/*
struct produto
{
    int codigo;
    char categoria[30];
    char nome[30];
    char descricao[70];
    char localArmaze[30];
    int qtdEstoque;

    int connsumoMedio;
    int tempReposicao;
    int tempo;

};
struct lista
{
    struct   produto info;
    struct lista*prox;
};

*/

typedef struct lista Lista;

typedef struct produto Produto;

/**Teste n�o funciono **/
/*
struct produto p6={322,"Produtos de Teste","TEste",
    "s�o subst�ncias que s�o usando na Limpeza",
    "Setor De Teste",33};

    */



//Fun��o que mostra a op���es
/**         @numeroFuncao 1
*
*
*/
int  adm();


/**         @Posicao n2
**          @NomeFuncao DigitaStruct
*           @Oquefaz    recebe os dados via teclado e retorna uma fun��o "inserirProdutoTeste"
*           @OquaisOutrasfuncoesdentro "inserirProdutoTeste"
**/
Lista *  DigitaStruct( Lista *recebe3 );

/**
*           @Posicao n3
*           @NomeFuncao controleFuncionario
*           @Oquefaz    funcao que decidir o que fazer
*           @quaisOutrasFuncoesDentro "adm",
*                                     1  DigitaStruct,
*                                     2 "buscarProdutoCodigo",
*                                     3 "imprimirTodosProduto"
*                                     4 "ComprarProduto",
*                                     5 "GuardaMaterial"
*                                     6 "ImprimirProdutoCodigo"
*
*/
/*FAZ TUDO Principal */
void controleFuncionario();



/**
*           @Posicao n4
*           @NomeFuncao "estoqueMin"
*           @Oquefaz    recebe 3 int faz um calculo estoqueMin e returna um float
*           @quaisOutrasFuncoesDentro   nenhuma
*/
float estoqueMin( int tempReposicao, int tempo ,int consumoMedio1);

/**
*           @Posicao n5
*           @NomeFuncao "consumoMedio"
*           @Oquefaz    recebe 2 int faz um calculo de consumo Medio e returna um float
*           @quaisOutrasFuncoesDentro   nenhuma
*/
float consumoMedio( int consItens, int tempo );

/**
*           @Posicao n6
*           @NomeFuncao "calLoteSuprimento"
*           @Oquefaz    recebe 3 int faz um calculo de lote de Suprimento e returna um float
*           @quaisOutrasFuncoesDentro   "sqrt"
*/
float calLoteSuprimento(int custoPedido , int Demanda, int CustArmazena);

/**
*           @Posicao n7
*           @NomeFuncao "estoqueMaxx"
*           @Oquefaz    recebe 2 int faz um calculo estoqueMax e returna um float
*           @quaisOutrasFuncoesDentro   nenhuma
*/
float estoqueMax(int estoqueMin1 , int  loteReposicao);


/**
*           @Posicao n8
*           @NomeFuncao "inicializaE"
*           @Oquefaz    recebe um void   e returna uma Lista null
*           @quaisOutrasFuncoesDentro   nenhuma
*/
/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializaE (void);

/**
*               @Posicao n9
*               @NomeFuncao inserirProdutoTeste
*               @FuncoesDentrodaFuncao
*               @QqueafuncaoFaz Ela pegas as fun��es que foram digitas na "DigitaStruct"   e coloca numa lista <novo>
*               e retorna uma lista
*/
Lista *inserirProdutoTeste(Lista * l,Produto i);

/**
*           @Posicao n10
*           @NomeFuncao "ComprarProduto"
*           @Oquefaz    recebe uma lista  ,um codigo do produto
*           e a quantidade de produto  que deixa comprar e adicionar no produto.qtdEstoque
*           @quaisOutrasFuncoesDentro   nenhuma
*/
void ComprarProduto(Lista * l,int codigo,int x);




/**
*           @Posicao n11
*           @NomeFuncao "EmitirPedido"
*           @Oquefaz    recebe uma lista  ,uma Struct produto e um int x (que significa a quantidade).
*           Verificar se o produto tem no estoque caso tenha vende e produto e notificar falando que
*           produto foi comprado
*           @quaisOutrasFuncoesDentro   nenhuma
*/
//Fun��o que verifica se tem produto no estoque � fazer um descremento com
// base na quantidade comprada
void EmitirPedido(Lista * l, Produto v, int x);


/**
*           @Posicao n12
*           @NomeFuncao "imprimeTodosProdutos"
*           @Oquefaz    recebe uma lista
*           Verificar se tem produto na lista e imprimir os produtos na lista
*           @quaisOutrasFuncoesDentro   nenhuma
*/
//Fun��o que emitir todos os produtos
void imprimeTodosProduto(Lista *l);


/**
*           @Posicao n13
*           @NomeFuncao "imprimeTodosCodigo"
*           @Oquefaz    recebe uma lista e um int codigo
*           Verificar se tem produto na lista tem o msm codigo  e imprimir os produtos na lista.
*           Caso o codigo seja diferente do que tem na lista ele imprimir produto nao cadastro ..
*           @quaisOutrasFuncoesDentro   nenhuma
*/
void imprimeProdutoCodigo (Lista *l,int codigo);

/**
*           @Posicao n14
*           @NomeFuncao "imprimeProduto"
*           @Oquefaz    recebe uma struct produto
*           Imprimir todos os produtos .
*           @quaisOutrasFuncoesDentro   nenhuma
*/
void imprimeProduto (Produto v);

/**
*           @Posicao n15
*           @NomeFuncao "buscaProdutoCodigo"
*           @Oquefaz  recebe uma lista e um codigo procura o codigo
*           se o codigo tive na lista imprimir o produto com este codigo
*           caso contrario  imprimir produto nao encontrado e retorna null
*           @quaisOutrasFuncoesDentro   nenhuma
*/
/* fun��o busca: busca um elemento na lista */
//Identificar produto
//Fun��o que identificar o produto
Lista* buscaProdutoCodigo (Lista* l, int v);


/**
*           @Posicao n16
*           @NomeFuncao "retiraPeloCodigo"
*           @Oquefaz  recebe uma lista e um codigo procura o codigo
*           se o codigo tive na lista retira o produto com este codigo
*           caso contrario  imprimir produto nao encontrado e retorna null
*           @quaisOutrasFuncoesDentro   nenhuma
*/
/* fun��o retira: retira elemento da lista */
Lista* retiraPeloCodigo (Lista* l, int v);



/**
*           @Posicao n17
*           @NomeFuncao "libera"
*           @Oquefaz  recebe uma lista e um codigo procura o codigo
*           se o codigo tive na lista retira o produto com este codigo
*           caso contrario  imprimir produto nao encontrado e retorna null
*           @quaisOutrasFuncoesDentro   nenhuma
*/
void liberaE (Lista* l);

/**
*           @Posicao n18
*           @NomeFuncao "criaProduto"
*           @Oquefaz  recebe uma produto e criar uma lista
*           @quaisOutrasFuncoesDentro   nenhuma
*/
/* fun��o auxiliar: cria e inicializa um n� */
Lista* criaProduto (Produto v);









/**Fim produtos ***/


Lista* insereE (Lista* l, int i);

/* fun��o imprime: imprime valores dos elementos */
void imprimeE (Lista* l);


/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */

/* fun��o busca: busca um elemento na lista */
Lista* buscaE (Lista* l, int v);


/* fun��o retira: retira elemento da lista */
Lista* retiraE (Lista* l, int v);

void liberaE (Lista* l);

/* fun��o auxiliar: cria e inicializa um n� */
Lista* criaE (int v);


Lista *inserirProdutoLocal(Lista * localLista,Produto ilocal);

int igual (Lista* l1, Lista* l2);



//teste

Lista *TrocaGuarda(Lista * l,Produto i);

Lista* atualizar (Lista *l,int guardacod);





