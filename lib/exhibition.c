#include <stdio.h>
#include <stdlib.h>
#include <est.h>

//As funções apresentadas a seguir realizam a EXIBIÇÃO dos elementos das árvores binárias.
//Por serem funções com atividades idênticas, variando apenas a seleção, toda a explicação referente 
//a seleção do Qatar pode ser apliacada as outras três consideradas nessa versão.

//A exibição dos elementos da árvore funciona a partir do algoritmo de exibição em ordem, aplicada de maneira recursiva, 
//como pode ser vista na função inorder a seguir.
//A pesquisa segue a seguinte ESQ-NÓ-DIR, onde primeiro são visitados os nós a esquerda da raíz, depois é realizado o processamento,
//para então visitar-se no nó mais a direita.
//A própria função já realiza o retorno em linha das figurinhas já obtidas pelo usuário após a inserção.

//exibicao em ordem do Qatar
void inorderQatar(nodeQatar *root){//a função recebe como argumento a raiz daquela sub-árvore
    if (root == NULL) //checa se root aponta para nulo, se apontar, para a exibição e retorna
    {
        return;
    }else{
        inorderQatar(root->left); //direciona o ponteiro para o lado esquerdo da arvore
        printf("QAT-%d ... ", root->data);//processa o dado ao chegar no valor "mais a esquerda"
        inorderQatar(root->right);//direicona o ponteiro para o lado direito da arvore
    }  
}

//exibicao em ordem do Equador 
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

//exibicao em ordem do Senegal
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

//exibicao em ordem do Holanda
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