#include<stdio.h>
#include<math.h>
int main() {
    int num1, num2, resultado;

      printf("digite os numeros de sua preferencia: ");
        scanf("%i %i", &num1, &num2);

        resultado = num1 * num2;
        printf("o resultado da multiplicacao eh: %i\n", resultado);
        return 0;
}