#include <stdio.h>
#include <stdlib.h>
#include <est.h>

//As funções apresentadas a seguir realizam a IMPRESSÃO EM ARQUIVO dos elementos das árvores binárias.
//Por serem funções com atividades idênticas, variando apenas a seleção, toda a explicação referente 
//a seleção do Qatar pode ser apliacada as outras três consideradas nessa versão.

//A exibição dos elementos em arquivo foi realizada também de maneira recursiva, entretanto, para isso,
//foram utilizadas duas funções, uma para EXPORTAR e ABRIR o arquivo (função export) e outra para escrever
//propriamente no arquivo (print). 
//Serão impressas apenas as figurinhas JÁ OBTIDAS pelo usuário, que consiste na manipulação direta da árvore.

void exportQatar(nodeQatar* root){ //recebe a raiz da árvore, para então abrir o arquivo e escrever os valores
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    
    fprintf(arquivo, "\n----------------->Qatar<----------------- \n");
    printQatar(arquivo, root);//encaminha, para a função print, o arquivo e os valores a serem impressos no arquivo txt
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void printQatar(FILE* arquivo, nodeQatar* root){//recebe diretamente da função export o Arquivo e a raiz para imprimir no arquivo

    if (root != NULL){
        printQatar(arquivo, root->left);
        fprintf(arquivo, "QAT-%d...", root->data);
        printQatar(arquivo, root->right);
    }  

}

void exportEquador(nodeEquador* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Equador<----------------- \n");
    printEquador(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void printEquador(FILE* arquivo, nodeEquador* root){

    if (root != NULL){
        printEquador(arquivo, root->left);
        fprintf(arquivo, "EQU-%d...", root->data);
        printEquador(arquivo, root->right);
    }  

}

void exportSenegal(nodeSenegal* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Senegal<----------------- \n");
    printSenegal(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void printSenegal(FILE* arquivo, nodeSenegal* root){

    if (root != NULL){
        printSenegal(arquivo, root->left);
        fprintf(arquivo, "SEN-%d...", root->data);
        printSenegal(arquivo, root->right);
    }  
}

void exportHolanda(nodeHolanda* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Países Baixos<----------------- \n");
    printHolanda(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void printHolanda(FILE* arquivo, nodeHolanda* root){

    if (root != NULL){
        printHolanda(arquivo, root->left);
        fprintf(arquivo, "HOL-%d...", root->data);
        printHolanda(arquivo, root->right);
    }  

}