#include <stdio.h>

int main(){
    float h, pesoideal; // Declaração das variáveis 'h' para altura e 'pesoideal' para o peso ideal
    char sexo; // Declaração da variável 'sexo' para armazenar o sexo do usuário
    
    // Solicitação do sexo do usuário
    printf("Qual e o seu sexo(M ou F): ");
    scanf(" %c", &sexo); // Leitura do sexo fornecido pelo usuário
    
    // Solicitação da altura do usuário
    printf("Qual e sua altura: ");
    scanf("%f", &h); // Leitura da altura fornecida pelo usuário
    
    // Verificação do sexo fornecido pelo usuário
    if (sexo == 'M' || sexo == 'm') // Se for masculino
    {   
        pesoideal = (72.7 * h - 58); // Cálculo do peso ideal para homens
        printf("Seu peso ideal e: %2.f", pesoideal); // Exibição do peso ideal formatado com duas casas decimais
    }
    else if(sexo == 'F' || sexo == 'f') // Se for feminino
    {   
        pesoideal = (62.1 * h - 44.7); // Cálculo do peso ideal para mulheres
        printf("Seu peso ideal e: %2.f", pesoideal); // Exibição do peso ideal formatado com duas casas decimais
    }
    else // Se for uma opção inválida
    {   
        printf("Opcao Invalida"); // Exibição de mensagem de erro
    }
    
    return 0; // Retorno indicando que o programa foi executado com sucesso
}

	

