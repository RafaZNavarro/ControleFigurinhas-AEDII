#include <stdio.h>
#include <stdlib.h>
#include <est.h>

//As funções apresentadas a seguir realizam a PESQUISA dos elementos dentro das árvores binárias.
//Por serem funções com atividades idênticas, variando apenas a seleção, toda a explicação referente 
//a seleção do Qatar pode ser apliacada as outras três consideradas nessa versão.

//A pesquisa de um novo nó em sua respectiva árvore funciona a partir do recebimento do valor n, inserido pelo usuário.
//A pesquisa é realizada de maneira recursiva, como pode ser visto na função search abaixo.
//Trata-se de um algoritmo simples e que irá realizar as comparações conforme o valor da "raíz" daquela sub árvore com o valor inserido pelo usuário
//Caso o valor seja encontrado, ele retorna 1 para a função principal. Caso esteja ausente, o retorno é 0. 

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

/*--------------- INÍCIO BUSCA PAÍSES BAIXOS --------------------------*/
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
/*--------------- FIM BUSCA PAÍSES BAIXOS --------------------------*/
