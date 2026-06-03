# Estudo da linguagem  C
## Aplicada a lógica de programação e algoritimos
<P align="center">
<img src="c-programming.jpg" width="300" height="300">
</p>

...

Estudo das principais estruturas da linguagem de programação C.

Vamos listar os itens trabalhados neste repositório:

    * Variáveis
    * Comandos de Entrada e Saída(IO-Imput output):
        * printf
        * scanf
    *Desvio de fluxo Simples (if ... )
    *Desvio de fluxo Multiplo ( if ... else ...)
    *Estrutura de Repetição While(Enquanto)
    *Estrutura de Repetição For(Para)
    *Função (Mólulos)
        -Função Interna (Dentro do arquivo .c)
        -Função Externa (Dentro do arquivo .h)
    *Importação de Módulos
        -Módulos da linguagem (stdio)
        -Mòdulos do usuário (funcoes.h)
    *Ponteiro
    *Criação de arquivos

####Desmonstração de uma estrutura simples de arquivo .c

``` c
#include <stdio.h>
int main(){
    int x = 10;
    printf(" O valor é %d\n") ,x);
    return 0;
}
```

``` c

####Desmonstração de desvio de fluxo .c

``` c
#include <stdio.h>
int main(){
int i;
i = 1;
while (i <= 10){
    printf("Contei %d\n" ,i);
    i++;

}
return 0;
}
```

    