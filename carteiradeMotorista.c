#include <stdio.h>

int main(){
    char nome[50]; //array de caracteres para armazenar nome
    int idade;     // variável para idade

    //entradas:
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    if(idade <18){
        printf("Olá!você não pode dirigir\n");

    }else{
        printf("Olá, pode dirigir!\n");
    }
    return 0;
}