#include <stdio.h>
#include <stdlib.h>
#include <est.h>

//As funções apresentadas a seguir realizam a inserção dos elementos dentro das árvores binárias.
//Por serem funções com atividades idênticas, variando apenas a seleção, toda a explicação referente 
//a seleção do Qatar pode ser apliacada as outras três consideradas nessa versão.

//----------INSERÇÃO QATAR----------

//A insercão de um novo nó em sua respectiva árvore funciona a partir do recebimento do valor n, inserido pelo usuário.
//A primeira coisa a ser feita é criar esse novo nó em sua respectiva árvorem como apresentado na função createNode a seguir.
//O nó aloca uma memória específica, através da função MALLOC.
//O nó então indicara que a variável data, recebe o valor de n inserido pelo usuário naquela árvore, enquanto os ponteiros auxiliares
//left e right deveram ambos apontar para NULL, criando assim uma nova folha naquela árvore.

//A inserção então é feita de maneira recursiva, apresentada na função insert abaixo.
//Trata-se de um algoritmo simples e que irá realizar as comparações conforme o valor da "raíz" daquela sub árvore com o valor inserido
//pelo usuário, para então permitir o posicionamento correto dos elementos. 

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
//----------FIM DA INSERÇÃO QATAR----------

//----------INSERÇÃO EQUADOR----------
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
//----------FIM DA INSERÇÃO EQUADOR----------

//----------INSERÇÃO SENEGAL----------
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
//----------FIM DA INSERÇÃO SENEGAL----------

//----------INSERÇÃO PAÍSES BAIXOS----------
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
//----------FIM DA INSERÇÃO PAÍSES BAIXOS----------
