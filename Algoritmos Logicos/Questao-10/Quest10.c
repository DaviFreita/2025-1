#include <stdio.h>
#include <locale.h>

int fibonacci(int n);

int main() {
    int n;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%i", &n);

    int f = fibonacci(n);
    printf("O %d� n�mero da sequ�ncia de Fibonacci �: %d\n", n, f);

    return 0;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
