import java.util.Scanner;
import java.util.InputMismatchException;

public class Pesagem
{
    static String nome = "";
    static int idade = 0;
    static double peso = 0,altura = 0;
    
    public static void main (String args[])
    {
        Pessoas lucas = new Pessoas();
        
        
        lerDados();
        lucas.setNome ( nome );
        lucas.setIdade ( idade );
        lucas.setAltura ( altura );
        lucas.setPeso ( peso );
        lerDados();
        Pessoas beatriz = new Pessoas(nome,idade,peso,altura);
        
        System.out.println("Nome: "+ lucas.getNome() );
        System.out.println("Idade: " + lucas.getIdade() );
        System.out.println("Altura: " +lucas.getAltura() );
        System.out.println("Peso: " + lucas.getPeso() );
        System.out.println("IMC: " + lucas.calculaIMC() );
        System.out.println(lucas.situacaoIMC());
        
        System.out.println("Nome: "+ beatriz.getNome() );
        System.out.println("Idade: " + beatriz.getIdade() );
        System.out.println("Altura: " + beatriz.getAltura() );
        System.out.println("Peso: " + beatriz.getPeso() );
        System.out.println("IMC: " + beatriz.calculaIMC() );
        System.out.println(beatriz.situacaoIMC() );
    }
    
        static void lerDados()
        {
        Scanner entrada = new Scanner(System.in);
        boolean executa = true;
        while (executa)
        {
        try
        {
        System.out.print("Digite o nome: ");
        nome = entrada.nextLine();
        System.out.print("Digite a idade: ");
        idade = entrada.nextInt();
        System.out.print("Digite a altura: ");
        altura = entrada.nextDouble();
        System.out.print("Digite o peso: ");
        peso = entrada.nextDouble();
        executa = false;
    }
    catch ( InputMismatchException e )
    {
        
    }
    }
}
}