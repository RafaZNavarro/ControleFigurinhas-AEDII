#include <stdio.h>
#include <stdlib.h>
#include <est.h>

void exportQatar(nodeQatar* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    
    fprintf(arquivo, "\n----------------->Qatar<----------------- \n");
    printQatar(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void exportEquador(nodeEquador* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Equador<----------------- \n");
    printEquador(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void exportSenegal(nodeSenegal* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Senegal<----------------- \n");
    printSenegal(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void exportHolanda(nodeHolanda* root){
    
    FILE *arquivo;
    arquivo = fopen("fig.txt", "a+");
    fprintf(arquivo, "\n----------------->Países Baixos<----------------- \n");
    printHolanda(arquivo, root);
    fprintf(arquivo, "\n--------------------------------------------------- \n");
    fclose(arquivo);
}

void printQatar(FILE* arquivo, nodeQatar* root){

    if (root != NULL){
        printQatar(arquivo, root->left);
        fprintf(arquivo, "QAT-%d...", root->data);
        printQatar(arquivo, root->right);
    }  

}

void printEquador(FILE* arquivo, nodeEquador* root){

    if (root != NULL){
        printEquador(arquivo, root->left);
        fprintf(arquivo, "EQU-%d...", root->data);
        printEquador(arquivo, root->right);
    }  

}

void printSenegal(FILE* arquivo, nodeSenegal* root){

    if (root != NULL){
        printSenegal(arquivo, root->left);
        fprintf(arquivo, "SEN-%d...", root->data);
        printSenegal(arquivo, root->right);
    }  
}

void printHolanda(FILE* arquivo, nodeHolanda* root){

    if (root != NULL){
        printHolanda(arquivo, root->left);
        fprintf(arquivo, "HOL-%d...", root->data);
        printHolanda(arquivo, root->right);
    }  

}