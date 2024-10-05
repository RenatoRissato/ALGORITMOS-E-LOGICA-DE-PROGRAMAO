public class calculadora
{
     private double numero1;
     private double numero2;
double divisão (double numero1, double numero2){
    if (numero2 == 0)
    {
        System.out.println("não podemos dividir por 0");
        return 0;// voce colocando return 0 aqui, nao precisa embaixo colocar else.
    }
    return numero1/numero2;
}
double multiplicacao (double numero1, double numero2){
    return numero1*numero2;
}

public String toString()
{
    String texto;
    texto = "A divisão é: " + this.divisão() + "\n";
    texto += " A multiplicação é: " + this.multiplicacao() + "\n";
    
    return texto;
    
}
}