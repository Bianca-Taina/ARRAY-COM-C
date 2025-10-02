#include <stdio.h>

int main (){
    int notas[5];  //declara um array de 5 posições para aramazenar as notas
    int i ;        //variável de controle para o loop(repeção)
    
    //entrada do usuário
    printf("Digite 5 notas:\n");

    for (i=0; i < 5; i++){
        scanf("%d",&notas[i]); // lê uma nota e armazena na posição i do array
    }

    // exibição
    printf("\n Notas digitais:\n");

    for (i =0; i < 5; i++){
        printf("%d", notas[i]); //imprime a nota da posição
    }

    return 0;
}