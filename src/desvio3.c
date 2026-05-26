#include <stdio.h>
#include <stdlib.h>
int main(){

    float nota1, nota2, nota3, nota4, media;

    //Comando System que chama uma excecução do sistema operacional
    //que, neste caso será o comando clear
    system("clear");


    printf("Digite a primeira nota: ");
    scanf("%f" ,&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f" ,&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f" ,&nota3);

    printf("Digite a quarta nota: ");
    scanf("%f" ,&nota4);

         //Calculando a média

    media = (nota1 + nota2 + nota3 + nota4) /4;

        //Exibindo a média

        printf("Media: %.2f\n" , media);

        //verificando aprovação
        if (media >= 7){
            printf("Aluno Aprovado\n");

        }else {
            printf("Aluno Reprovado\n");

        }

        printf("\n############################################\n");
        printf("Endereço de memória da variável nota1 %p \n" , &nota1);
        printf("Endereço de memória da variável nota2 %p \n" , &nota2);
        printf("Endereço de memória da variável nota3 %p \n" , &nota3);
        printf("Endereço de memória da variável nota4 %p \n" , &nota4);
        printf("Endereço de memória da variável media %p \n" , &media);



        return 0;
    }
    
