#include<math.h>
#include<stdio.h>

int main() {
    // Linha para o printf já sair automaticamente após a execução da linha (já liberar o buffer)
    setvbuf(stdout, NULL, _IONBF, 0);

    int numero, resultado;

    printf("digite um numero: ");
    scanf("%i", &numero);

    resultado = numero * 3;
    printf("%i\n", resultado);
}