#include<stdio.h>

int main()
{
    // Declara��o das vari�veis altura e sexo
    float altura;
    char sexo;
    
    // Solicita��o da entrada da altura
    printf ("Informe sua altura em metros: ");
    // Leitura da altura fornecida pelo usu�rio
    scanf ("%f", &altura);
    
    // Solicita��o da entrada do sexo
    printf ("Informe seu sexo (m ou h): ");
    // Leitura do sexo fornecido pelo usu�rio
    scanf ("%s", &sexo);
    
    // Verifica se o sexo fornecido � 'h' (homem)
    if (sexo == 'h') {
        // Se o sexo for 'h', calcula e exibe o peso ideal para homens
        printf("Seu peso ideal �: %f ", (72.7 * altura) - 58);
    }  
    // Verifica se o sexo fornecido � 'm' (mulher)
    else if(sexo == 'm') {
        // Se o sexo for 'm', calcula e exibe o peso ideal para mulheres
        printf("Seu peso ideal �: %f ", (62.1 * altura) - 44.7);
    }
    // Se o sexo fornecido n�o for 'm' nem 'h', exibe uma mensagem de erro
    else {
        printf("Voc� precisa inserir a letra m ou h no campo sexo para saber seu peso ideal");
    }
    
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}  

