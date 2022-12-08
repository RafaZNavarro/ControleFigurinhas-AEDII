#include<stdio.h>
#include<stdlib.h>
#include<est.h>

/*----------Insercao Qatar*/
nodeQatar* createNodeQatar(int n)
{ 
    nodeQatar* newNode; //cria uma nova variável para ser manipulada na árvore
    newNode = (nodeQatar*)malloc(sizeof(nodeQatar));//reserva o espaço de memória para manipular o nó
    newNode->data = n; //o novo nó irá trabalhar dentro da estrutura data da árvore, recebendo o valor de n
    newNode->left = newNode->right = NULL;//neste ponto, define os ponteiros auxiliares esquerda e direita como NULL
    return newNode;
} 

nodeQatar* insertQatar(nodeQatar* root, int n)//realiza a inserção do nó na árvore 
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
