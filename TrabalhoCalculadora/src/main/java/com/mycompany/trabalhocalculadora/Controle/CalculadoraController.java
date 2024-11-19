/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.trabalhocalculadora.Controle;

import com.mycompany.trabalhocalculadora.enums.EnumOperacao;
/**
 *
 * @author renat
 */

public class CalculadoraController {

    private double total; // Acumula o valor calculado

    public CalculadoraController() {
        this.total = 0.0; // Inicializa total com 0.0
    }

    public Double realizaOperacao(EnumOperacao operacao, Double valor) {
        // Verifica se o valor é válido
        if (valor == null) {
            throw new IllegalArgumentException("O valor fornecido não pode ser nulo.");
        }

        // Realiza a operação com base no enum
        switch (operacao) {
            case SOMA:
                total += valor; // Adiciona o valor ao total
                break;

            case SUBSTRACAO:
                total -= valor; // Subtrai o valor do total
                break;

            case DIVISAO:
                if (valor == 0) {
                    throw new ArithmeticException("Divisão por zero não é permitida.");
                }
                total /= valor; // Divide o total pelo valor
                break;

            case MULTIPLICACAO:
                total *= valor; // Multiplica o total pelo valor
                break;

            default:
                throw new IllegalArgumentException("Operação inválida.");
        }
        return total; // Retorna o resultado atualizado
    }

    public Double getTotal() {
        return this.total; // Retorna o valor acumulado do total
    }

    public void zerar() {
        this.total = 0.0; // Reseta o total para 0.0
    }
}
