
//------------------Declaração das Estruturas de Controle------------------//
struct insercaoQatar //Declaracao da Arvore
{ 
    int data; //Recebe o valor a ser manipulado
    struct insercaoQatar* left; //Os ponteiros permitem acessar todos os outros nós da árvore binária, partindo da raiz 
    struct insercaoQatar* right; //Para acessar a raiz, é necessário definir um ponteiro para ela, que será feito na função main
}; 
typedef struct insercaoQatar nodeQatar; //Para evitar varias repeticoes desnecessárias, utiliza-se o typedef

struct insercaoEquador
{ 
    int data;
    struct insercaoEquador* left; 
    struct insercaoEquador* right; 
}; 
typedef struct insercaoEquador nodeEquador;

struct insercaoSenegal
{ 
    int data;
    struct insercaoSenegal* left; 
    struct insercaoSenegal* right; 
}; 
typedef struct insercaoSenegal nodeSenegal;

struct insercaoHolanda
{ 
    int data;
    struct insercaoHolanda* left; 
    struct insercaoHolanda* right; 
}; 
typedef struct insercaoHolanda nodeHolanda;
//------------------Fim das Declaração das Estruturas de Controle------------------//

nodeQatar* insertQatar(nodeQatar* root, int n);
nodeEquador* insertEquador(nodeEquador* root, int n);
nodeSenegal* insertSenegal(nodeSenegal* root, int n);
nodeHolanda* insertHolanda(nodeHolanda* root, int n);

//------------------Declaração das Funções de Pesquisa------------------//
int searchQatar(nodeQatar* root, int pesq);
int searchEquador(nodeEquador* root, int pesq);
int searchSenegal(nodeSenegal* root, int pesq);
int searchHolanda(nodeHolanda* root, int pesq);
//------------------Fim da Declaração das Funções de Pesquisa------------------//

//------------------Declaração das Funções de Exibição em Ordem------------------//
void inorderQatar(nodeQatar* root);
void inorderEquador(nodeEquador* root);
void inorderSenegal(nodeSenegal* root);
void inorderHolanda(nodeHolanda* root);
//------------------Fim da Declaração das Funções de Exibição em Ordem------------------//

//------------------Declaração das Funções de imprimir a lista------------------//
void exportQatar(nodeQatar* root);
void exportEquador(nodeEquador* root);
void exportSenegal(nodeSenegal* root);
void exportHolanda(nodeHolanda* root);

void printQatar(FILE *arquivo, nodeQatar* root);
void printEquador(FILE *arquivo, nodeEquador* root);
void printSenegal(FILE *arquivo, nodeSenegal* root);
void printHolanda(FILE *arquivo, nodeHolanda* root);
//------------------Fim da Declaração das Funções imprimir a lista------------------//
