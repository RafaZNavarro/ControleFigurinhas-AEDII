
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


int searchQatar(nodeQatar* root, int pesq);
int searchEquador(nodeEquador* root, int pesq);
int searchSenegal(nodeSenegal* root, int pesq);
int searchHolanda(nodeHolanda* root, int pesq);