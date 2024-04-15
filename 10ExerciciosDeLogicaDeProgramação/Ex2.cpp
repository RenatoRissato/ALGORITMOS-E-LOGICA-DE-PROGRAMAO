//
//  main.c
//  Aulas
//
#include <stdio.h>

int main() 
{
    int n, a, b, c;

    // Leitura dos valores digitados pelo usuário
    printf("Digite quatro valores (n, a, b, c): ");
    scanf("%d %d %d %d", &n, &a, &b, &c);

    // Verificação do valor de n e execução das ações correspondentes
    switch(n) 
    {
        case 1:
            if(a <= b && a <= c) 
            {
                printf("%d ", a);
                if(b <= c) 
                {
                    printf("%d %d\n", b, c);
                } 
                else
                {
                    printf("%d %d\n", c, b);
                }
            } 
            else if(b <= a && b <= c)
            {
                printf("%d ", b);
                if(a <= c) 
                {
                    printf("%d %d\n", a, c);
                } 
                else
                {
                    printf("%d %d\n", c, a);
                }
            } 
            else
            {
                printf("%d ", c);
                if(a <= b) 
                {
                    printf("%d %d\n", a, b);
                } 
                else
                {
                    printf("%d %d\n", b, a);
                }
            }
            break;
        case 2:
            if(a >= b && a >= c) {
                printf("%d ", a);
                if(b >= c) {
                    printf("%d %d\n", b, c);
                } else {
                    printf("%d %d\n", c, b);
                }
            } else if(b >= a && b >= c) {
                printf("%d ", b);
                if(a >= c) {
                    printf("%d %d\n", a, c);
                } else {
                    printf("%d %d\n", c, a);
                }
            } else {
                printf("%d ", c);
                if(a >= b) {
                    printf("%d %d\n", a, b);
                } else {
                    printf("%d %d\n", b, a);
                }
            }
            break;
        case 3:
            if((a >= b && a <= c) || (a <= b && a >= c)) {
                printf("%d ", a);
                if(b >= c) {
                    printf("%d %d\n", b, c);
                } else {
                    printf("%d %d\n", c, b);
                }
            } else if((b >= a && b <= c) || (b <= a && b >= c)) {
                printf("%d ", b);
                if(a >= c) {
                    printf("%d %d\n", a, c);
                } else {
                    printf("%d %d\n", c, a);
                }
            } else {
                printf("%d ", c);
                if(a >= b) {
                    printf("%d %d\n", a, b);
                } else {
                    printf("%d %d\n", b, a);
                }
            }
            break;
        default:
            printf("Valor de n inválido!\n");
    }

    return 0;
}

