#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;


    printf("Digite um número inteiro e tecle ENTER\n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro e tecle ENTER\n");
    scanf("%d", &num2);

    // Vamos realizar a soma, divisão e multiplicação entre as duas variáveis (num1 e num2)
    //e alocar o resultado na variável soma, divisão e multiplicação
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("A soma dos números %d e %d resultou em %d\n" ,num1,num2,soma);
    printf("A subtração dos números %d e %d resultou em %d\n", num1,num2,subtracao);
    printf("A multiplicação dos números %d e %d resultou em %d\n",num1,num2,multiplicacao);
    printf("A divisão dos números %d e %d resultou em %d\n",num1,num2,divisao);

    return 0;
}