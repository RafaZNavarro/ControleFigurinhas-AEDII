#include<stdio.h>
#include<stdlib.h>
#include<est.h>

/*  --> Binary Search Tree: Valores dos nós a esquerda da sub árvore são Maiores ou iguais ao valor na raiz,
    enquanto os valores dos nós a direita são MAIORES que a raiz
    --> Na memória do computador, a lista deve ser representada como uma "linked list", que contém um variável 
    para receber o VALOR, uma para o ENDEREÇO à esquerda do elemento filho e um ENDEREÇO à direita do outro filho.  
*/

/*  O programa a seguir busca apresentar uma maneira de controle e exibiçãoo das figurinhas do album da copa do mundo de 2022
    utilizando Arvores binárias para realizar a insercao, controle e a exibição dos dados em sua totalidade
*/
 
/*-----------------------------------------------------ALGORITMO DE EXIBIÇÃO NA ÁRVORE-------------------------------------------------------
void inorderQatar(nodeQatar *root){
    if (root == NULL) //checa se root aponta para nulo, se apontar, para de exibir e retorna
    {
        return;
    }else{
        inorderQatar(root->left); //direciona o ponteiro para o lado esquerdo da arvore
        printf("QAT-%d ... ", root->data);//processa o dado ao chegar no valor "mais a esquerda"
        inorderQatar(root->right);//direicona o ponteiro para o lado direito da arvore
    }  
}
void inorderEquador(nodeEquador *root){
    if (root == NULL)
    {
        return;
    }else{
        inorderEquador(root->left);
        printf("EQU-%d ... ", root->data);
        inorderEquador(root->right);
    }  
}
void inorderSenegal(nodeSenegal *root){
    if (root == NULL)
    {
        return;
    }else{
        inorderSenegal(root->left);
        printf("SEN-%d ... ", root->data);
        inorderSenegal(root->right);
    }  
}
void inorderHolanda(nodeHolanda *root){
    if (root == NULL)
    {
        return;
    }else{
        inorderHolanda(root->left);
        printf("HOL-%d ... ", root->data);
        inorderHolanda(root->right);
    }  
}

-----------------------------------------------------FIM DO ALGORITMO DE EXIBIÇÃO NA ÁRVORE-------------------------------------------------------*/

int main()
{   //Neste ponto, consideramos a arvore vazia, portanto, raiz aponta para NULL
    nodeQatar* rootQatar = NULL; 
    nodeEquador* rootEquador = NULL;
    nodeSenegal* rootSenegal = NULL;
    nodeHolanda* rootHolanda = NULL;

    int n, pesq, menu, start=0;
    int figQatar[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figEquador[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figSenegal[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figHolanda[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    char ch = 'S';

    while (start != 4)
    {   printf("\nVocê deseja: \n");
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

                        for (int i = 0; i <=20; i++)
                        {
                            if (n == figQatar[i])
                            {
                                figQatar[i] = 0;
                            }
                            
                        }

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

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figEquador[i])
                            {
                                figEquador[i] = 0;
                            }
                            
                        }

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

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figSenegal[i])
                            {
                                figSenegal[i] = 0;
                            }
                            
                        }

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

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figHolanda[i])
                            {
                                figHolanda[i] = 0;
                            }
                            
                        }

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

        case 3: //seleciona a opção de exibição das figurinhas
        {
            
            printf("Você já obteve as seguintes figurinhas: \n");
            printf("Qatar: \n");
            inorderQatar(rootQatar);
            printf("\n--------------------------------------------------\n");
            printf("Equador: \n");
            inorderEquador(rootEquador);
            printf("\n--------------------------------------------------\n");
            printf("Senegal: \n");
            inorderSenegal(rootSenegal);
            printf("\n--------------------------------------------------\n");
            printf("Holanda: \n");
            inorderHolanda(rootHolanda);
            printf("\n--------------------------------------------------\n");

            
            
            
            /*printf("Você ainda não obteve as seguintes figurinhas: \n");
            printf("----->Qatar<----- \n");
                for (int i = 0; i < 20; i++)
                {
                    if (figQatar[i] != 0)
                    {
                        printf("%d - ", figQatar[i]);
                    } 
                }
            printf("\n----->Equador<----- \n");
                for (int j = 0; j < 20; j++)
                {
                    if (figEquador[j] != 0)
                    {
                        printf("%d - ", figEquador[j]);
                    }
                }
            printf("\n----->Senegal<----- \n");
                for (int k = 0; k < 20; k++)
                {
                    if (figSenegal[k] != 0)
                    {
                        printf("%d - ", figSenegal[k]);
                    }
                }    
            printf("\n----->Holanda<----- \n");
                for (int l = 0; l < 20; l++)
                {
                    if (figHolanda[l] != 0)
                    {
                        printf("%d - ", figHolanda[l]);
                    }
                    
                }
            
            printf("\n\nVocê já obteve as seguintes figurinhas: \n");
            printf("----->Qatar<----- \n");
                for (int i = 0; i < 20; i++)
                {
                    if (figQatar[i] == 0)
                    {
                        printf("%d - ", i+1);
                    } 
                }
            printf("\n----->Equador<----- \n");
                for (int j = 0; j < 20; j++)
                {
                    if (figEquador[j] == 0)
                    {
                        printf("%d - ", j+1);
                    }
                }
            printf("\n----->Senegal<----- \n");
                for (int k = 0; k < 20; k++)
                {
                    if (figSenegal[k] == 0)
                    {
                        printf("%d - ", k+1);
                    }
                }    
            printf("\n----->Holanda<----- \n");
                for (int l = 0; l <= 20; l++)
                {
                    if (figHolanda[l] == 0)
                    {
                        printf("%d - ", l+1);
                    }
                    
                }*/
        }break;

        default:
            break;
        }
    }
}