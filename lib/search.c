#include <stdio.h>
#include <stdlib.h>
#include <est.h>

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

/*-------------------------------------------------FIM DOS ALGORITMOS DE BUSCA NA ÁRVORE--------------------------------------------------*/