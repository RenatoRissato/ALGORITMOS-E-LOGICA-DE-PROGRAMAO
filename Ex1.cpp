#include<stdio.h>

int main()
{
    // Declaração das variáveis altura e sexo
    float altura;
    char sexo;
    
    // Solicitação da entrada da altura
    printf ("Informe sua altura em metros: ");
    // Leitura da altura fornecida pelo usuário
    scanf ("%f", &altura);
    
    // Solicitação da entrada do sexo
    printf ("Informe seu sexo (m ou h): ");
    // Leitura do sexo fornecido pelo usuário
    scanf ("%s", &sexo);
    
    // Verifica se o sexo fornecido é 'h' (homem)
    if (sexo == 'h') {
        // Se o sexo for 'h', calcula e exibe o peso ideal para homens
        printf("Seu peso ideal é: %f ", (72.7 * altura) - 58);
    }  
    // Verifica se o sexo fornecido é 'm' (mulher)
    else if(sexo == 'm') {
        // Se o sexo for 'm', calcula e exibe o peso ideal para mulheres
        printf("Seu peso ideal é: %f ", (62.1 * altura) - 44.7);
    }
    // Se o sexo fornecido não for 'm' nem 'h', exibe uma mensagem de erro
    else {
        printf("Você precisa inserir a letra m ou h no campo sexo para saber seu peso ideal");
    }
    
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}  

