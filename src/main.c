#include<stdio.h>
#include<stdlib.h>
/*  --> Binary Search Tree: Valores dos nós a esquerda da sub árvore são Maiores ou iguais ao valor na raiz,
    enquanto os valores dos nós a direita são MAIORES que a raiz
    --> Na memória do computador, a lista deve ser representada como uma "linked list", que contém um variável 
    para receber o VALOR, uma para o ENDEREÇO à esquerda do elemento filho e um ENDEREÇO à direita do outro filho.  
*/
 
/*--------------- INSERÇÃO DA ÁRVORE  SELECAO DO QATAR --------------------------*/
struct insercaoQatar //Declaracao da Arvore
{ 
    int data; //Recebe o valor a ser manipulado
    struct insercaoQatar* left; //Os ponteiros permitem acessar todos os outros nós da árvore binária, partindo da raiz 
    struct insercaoQatar* right; //Para acessar a raiz, é necessário definir um ponteiro para ela, que será feito na função main
}; typedef struct insercaoQatar nodeQatar; //Para evitar varias repeticoes desnecessárias, utiliza-se o typedef

nodeQatar* createNodeQatar(int n)
{ 
    nodeQatar* newNode;
    newNode = (nodeQatar*)malloc(sizeof(nodeQatar));
    newNode->data = n;
    newNode->left = newNode->right = NULL;
    return newNode;
} 

nodeQatar* insertQatar(nodeQatar* root, int n)
{
    if (root == NULL)
    {
        root = createNodeQatar(n);

    }else if(n <= root->data)
    {
        root->left = insertQatar(root->left, n);
    }else
    {
        root->right = insertQatar(root->right, n);

    }
    return root;  
}
/*--------------- FIM INSERÇÃO DA ÁRVORE  SELECAO DO QATAR --------------------------*/

/*--------------- INSERÇÃO DA ÁRVORE  SELECAO DO EQUADOR --------------------------*/
struct insercaoEquador
{ 
    int data;
    struct insercaoEquador* left; 
    struct insercaoEquador* right; 
}; typedef struct insercaoEquador nodeEquador;

nodeEquador* createNodeEquador(int n)
{ 
    nodeEquador* newNode;
    newNode = (nodeEquador*)malloc(sizeof(nodeEquador));
    newNode->data = n;
    newNode->left = newNode->right = NULL;
    return newNode;
}
nodeEquador* insertEquador(nodeEquador* root, int n)
{
    if (root == NULL)
    {
        root = createNodeEquador(n);

    }else if(n <= root->data)
    {
        root->left = insertEquador(root->left, n);
    }else
    {
        root->right = insertEquador(root->right, n);

    }
    return root;  

}
/*--------------- FIM INSERÇÃO DA ÁRVORE SELECAO DO EQUADOR --------------------------*/

/*--------------- INSERÇÃO DA ÁRVORE SELECAO DO SENEGAL --------------------------*/
struct insercaoSenegal
{ 
    int data;
    struct insercaoSenegal* left; 
    struct insercaoSenegal* right; 
}; typedef struct insercaoSenegal nodeSenegal;

nodeSenegal* createNodeSenegal(int n)
{ 
    nodeSenegal* newNode;
    newNode = (nodeSenegal*)malloc(sizeof(nodeSenegal));
    newNode->data = n;
    newNode->left = newNode->right = NULL;
    return newNode;
}

nodeSenegal* insertSenegal(nodeSenegal* root, int n)
{
    if (root == NULL)
    {
        root = createNodeSenegal(n);

    }else if(n <= root->data)
    {
        root->left = insertSenegal(root->left, n);
    }else
    {
        root->right = insertSenegal(root->right, n);

    }
    return root;  

}
/*--------------- FIM INSERÇÃO DA ÁRVORE SELECAO DO SENEGAL --------------------------*/

/*--------------- INSERÇÃO DA ÁRVORE SELECAO DO HOLANDA --------------------------*/
struct insercaoHolanda
{ 
    int data;
    struct insercaoHolanda* left; 
    struct insercaoHolanda* right; 
}; typedef struct insercaoHolanda nodeHolanda;

nodeHolanda* createNodeHolanda(int n)
{ 
    nodeHolanda* newNode;
    newNode = (nodeHolanda*)malloc(sizeof(nodeHolanda));
    newNode->data = n;
    newNode->left = newNode->right = NULL;
    return newNode;
}
nodeHolanda* insertHolanda(nodeHolanda* root, int n)
{
    if (root == NULL)
    {
        root = createNodeHolanda(n);

    }else if(n <= root->data)
    {
        root->left = insertHolanda(root->left, n);
    }else
    {
        root->right = insertHolanda(root->right, n);

    }
    return root;  

}
/*--------------- FIM INSERÇÃO DA ÁRVORE SELECAO DO HOLANDA --------------------------*/

/*--------------- INÍCIO BUSCA CATAR --------------------------*/
int searchQatar(nodeQatar* root, int pesq)//algoritmo simples de busca na árvore
{
    if (root == NULL)
    {
        return 0;
    }else if (pesq == root->data)
    {
        return 1;
    }else if (pesq <= root->data)
    {
        return searchQatar(root->left, pesq);
    }else
    {
        return searchQatar(root->right, pesq);
    }   
}
/*--------------- FIM BUSCA CATAR --------------------------*/

/*--------------- INÍCIO BUSCA EQUADOR --------------------------*/
int searchEquador(nodeEquador* root, int pesq)//algoritmo simples de busca na árvore
{
    if (root == NULL)
    {
        return 0;
    }else if (pesq == root->data)
    {
        return 1;
    }else if (pesq <= root->data)
    {
        return searchEquador(root->left, pesq);
    }else
    {
        return searchEquador(root->right, pesq);
    }   
}
/*--------------- FIM BUSCA EQUADOR --------------------------*/

/*--------------- INÍCIO BUSCA SENEGAL --------------------------*/
int searchSenegal(nodeSenegal* root, int pesq)//algoritmo simples de busca na árvore
{
    if (root == NULL)
    {
        return 0;
    }else if (pesq == root->data)
    {
        return 1;
    }else if (pesq <= root->data)
    {
        return searchSenegal(root->left, pesq);
    }else
    {
        return searchSenegal(root->right, pesq);
    }   
}
/*--------------- FIM BUSCA SENEGAL --------------------------*/

/*--------------- INÍCIO BUSCA HOLANDA --------------------------*/
int searchHolanda(nodeHolanda* root, int pesq)//algoritmo simples de busca na árvore
{
    if (root == NULL)
    {
        return 0;
    }else if (pesq == root->data)
    {
        return 1;
    }else if (pesq <= root->data)
    {
        return searchHolanda(root->left, pesq);
    }else
    {
        return searchHolanda(root->right, pesq);
    }   
}
/*--------------- FIM BUSCA HOLANDA --------------------------*/


int main()
{   //Neste ponto, consideramos a arvore vazia, portanto, raiz aponta para NULL
    nodeQatar* rootQatar = NULL; 
    nodeEquador* rootEquador = NULL;
    nodeSenegal* rootSenegal = NULL;
    nodeHolanda* rootHolanda = NULL;

    int n, pesq, menu, start;
    char ch = 'S', es = 'N';

    while (start != 4)
    {   printf("Você deseja: \n");
        printf("1<Inserir>\n");
        printf("2<Buscar>\n");
        printf("3<Exibir>\n");
        printf("Digite sua escolha ou 4 para sair  ");
        scanf("%d", &start);

        switch (start)
        {
        case 1: //seleciona a opção de inserção das figurinhas
        {
            printf("Qual selecao voce deseja inserir?\n");
            printf("1<Qatar>\n");
            printf("2<Equador>\n");
            printf("3<Senegal>\n");
            printf("4<Holanda>\n");
            printf("Digite o numero da selecao escolhida, ou 5 para sair  ");
            scanf("%d", &menu);

            switch (menu)
            {
                case 1: //Inserção Qatar
                    do
                    {
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootQatar = insertQatar(rootQatar, n); //Após receber o valor, é necessário chamar a função de inserção na árvore binária, adicionando um novo nó.
                                     //a função irá receber o valor do ENDEREÇO da raiz e o dado a ser inserido na árvore em questão
                        getchar();

                        printf("\nDeseja inserir outra figurinha? (S/N)?  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;

                case 2: //Inserção Equador
                    do
                    {
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootEquador = insertEquador(rootEquador, n);
                        getchar();

                        printf("\nDeseja inserir outra figurinha? (S/N)?  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;

                case 3: //Inserção Senegal
                    do
                    {
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootSenegal = insertSenegal(rootSenegal, n);
                        getchar();

                        printf("\nDeseja inserir outra figurinha? (S/N)?  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;
                            
                case 4: //Inserção Holanda
                    do
                    {
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootHolanda = insertHolanda(rootHolanda, n);
                        getchar();

                        printf("\nDeseja inserir outra figurinha? (S/N)?  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;
        
                default:
                    break;
            } 
        }break;
        
        case 2: //seleciona a opção de busca das figurinhas 
        {
            printf("Qual selecao voce deseja Buscar?\n");
            printf("1<Qatar>\n");
            printf("2<Equador>\n");
            printf("3<Senegal>\n");
            printf("4<Holanda>\n");
            printf("Digite o numero da selecao escolhida, ou 5 para sair  ");
            scanf("%d", &menu);
                switch (menu)
                {
                    case 1: //Pesquisa Qatar
                        do
                        {
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchQatar(rootQatar, pesq); //Após receber o valor, é necessário chamar a função de inserção na árvore binária, adicionando um novo nó.
                                                        //a função irá receber o valor do ENDEREÇO da raiz e o dado a ser inserido na árvore em questão
                            getchar();

                            if (searchQatar(rootQatar, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha QAT-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha QAT-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;

                    case 2: //Pesquisa Equador
                        do
                        {
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchEquador(rootEquador, pesq);
                            getchar();

                            if (searchEquador(rootEquador, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha EQU-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha EQU-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;

                    case 3: //Pesquisa Senegal
                        do
                        {
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchSenegal(rootSenegal, pesq);
                            getchar();

                            if (searchSenegal(rootSenegal, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha SEN-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha SEN-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;
                                   
                    case 4://Pesquisa Holanda
                        do
                        {
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchHolanda(rootHolanda, pesq);
                            getchar();

                            if (searchHolanda(rootHolanda, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha HOL-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha HOL-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;
                    
                break;
                }
        }break; 

        default:
            break;
        }
    }
}