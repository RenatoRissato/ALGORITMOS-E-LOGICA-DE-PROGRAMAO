    import java.util.Scanner;
    import java.util.InputMismatchException;
    
    public class Executavel //essa classe precisa ser public, porque ela possui o main, que só funciona se essa classe for public.
    {
        public static void main(String args[])
        {
            Scanner teclado = new Scanner(System.in);
            try{// tente rodar aqui.
    
            System.out.println("Digite o primeiro numero: ");
            double numero1 = teclado.nextDouble();
            System.out.println("Digite o segundo numero: ");
            double numero2 = teclado.nextDouble();
            calculadora Calculadora1 = new calculadora();// é assim que estancia uma classe em java.
            
            System.out.println("O Resultado da divisão: " + Calculadora1.divisão(numero1, numero2));
            System.out.println("O Resultado da Multiplicação: " + Calculadora1.multiplicacao(numero1, numero2));
            System.out.println(Calculadora1);
            }catch (InputMismatchException e) //se der errado teste o erro aqui
            {
                System.out.println("Digite um valor válido");
            }
    
    }
    }