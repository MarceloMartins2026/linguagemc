#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i;
    for( i = 0; i> 100; i++){
        printf("=");
    }
    char cliente[100];
    char vendedor[100];
    char produto[100];
    float Preço;
    char Forma de pagamento;
       


    float precoOriginal;
    float precoFinal;
    float valorParcela = 0;
    int parcelas = 0;

    FILE *arquivo;

    printf("===SISTEMA DE VENDAS====\n\n");

    print("Nome do Cliente: ");
    fgets(cliente, sizeof(cliente) ,stdin);
    cliente[strcspn(cliente, "\n")] = '\0';

    printf("Nome do vendedor: ");
    fgets(vendedor[strcspn(vendedor, "\n")]= '\0';
    
    print("Nome de Produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] ='\0';
    scanf("%f", &precoOriginal);

    printf("\nForma de pagamento: \n");
    printf("A - A vista\n");
    printf("P - Parcelado\n");
    printf("Opcao: ");
    scanf(" %c",&pagamento);

    if (pagamento == 'A' || pagamento == 'a'){

        precoFinal = precoOriginal *0.90; //desconto de 10%

    } else {
        precoFinal = precoOriginal *1.15; //acrescimo de 15%

        printf("Numero de parcelas: ");

        scanf("%d", &parcelas);

        valorParcela = precoFinal / parcelas;

        printf("\n================DADOS DA VENDA=========\n");
        print("Cliente: %s\n", cliente);
        printf("Vendedor: %s\n", vendedor);
        printf("produto: %s\n", produto);
        printf("Valor Original: R$ %.2f\n , precoOriginal");


    }