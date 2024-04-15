#include <stdio.h>

int main(){
    float h, pesoideal; // Declara��o das vari�veis 'h' para altura e 'pesoideal' para o peso ideal
    char sexo; // Declara��o da vari�vel 'sexo' para armazenar o sexo do usu�rio
    
    // Solicita��o do sexo do usu�rio
    printf("Qual e o seu sexo(M ou F): ");
    scanf(" %c", &sexo); // Leitura do sexo fornecido pelo usu�rio
    
    // Solicita��o da altura do usu�rio
    printf("Qual e sua altura: ");
    scanf("%f", &h); // Leitura da altura fornecida pelo usu�rio
    
    // Verifica��o do sexo fornecido pelo usu�rio
    if (sexo == 'M' || sexo == 'm') // Se for masculino
    {   
        pesoideal = (72.7 * h - 58); // C�lculo do peso ideal para homens
        printf("Seu peso ideal e: %2.f", pesoideal); // Exibi��o do peso ideal formatado com duas casas decimais
    }
    else if(sexo == 'F' || sexo == 'f') // Se for feminino
    {   
        pesoideal = (62.1 * h - 44.7); // C�lculo do peso ideal para mulheres
        printf("Seu peso ideal e: %2.f", pesoideal); // Exibi��o do peso ideal formatado com duas casas decimais
    }
    else // Se for uma op��o inv�lida
    {   
        printf("Opcao Invalida"); // Exibi��o de mensagem de erro
    }
    
    return 0; // Retorno indicando que o programa foi executado com sucesso
}

	

