#include<stdio.h>
#include<stdlib.h>
#include<est.h>


void inorderQatar(nodeQatar *root){//exibicao em ordem do Qatar
    if (root == NULL) //checa se root aponta para nulo, se apontar, para de exibir e retorna
    {
        return;
    }else{
        inorderQatar(root->left); //direciona o ponteiro para o lado esquerdo da arvore
        printf("QAT-%d ... ", root->data);//processa o dado ao chegar no valor "mais a esquerda"
        inorderQatar(root->right);//direicona o ponteiro para o lado direito da arvore
    }  
}
void inorderEquador(nodeEquador *root){//exibicao em ordem do Equador 
    if (root == NULL)
    {
        return;
    }else{
        inorderEquador(root->left);
        printf("EQU-%d ... ", root->data);
        inorderEquador(root->right);
    }  
}
void inorderSenegal(nodeSenegal *root){//exibicao em ordem do Senegal
    if (root == NULL)
    {
        return;
    }else{
        inorderSenegal(root->left);
        printf("SEN-%d ... ", root->data);
        inorderSenegal(root->right);
    }  
}
void inorderHolanda(nodeHolanda *root){//exibicao em ordem do Holanda
    if (root == NULL)
    {
        return;
    }else{
        inorderHolanda(root->left);
        printf("HOL-%d ... ", root->data);
        inorderHolanda(root->right);
    }  
}