import java.util.Scanner;
class ComparaçãoString
{
    public static void main (String args[])
    {
        String nome = "Einstein";
        String entrada;
        
        Scanner teclado = new Scanner(System.in);
        System.out.print("Digite um texto: ");
        entrada = teclado.nextLine();
        
        if( nome.equals(entrada) )
        {
            System.out.println("foi digitado Einstein");
        }
        else
        {
            System.out.println("nao foi digitado Einstein");
        }
        
        
        
        
    }
    
}