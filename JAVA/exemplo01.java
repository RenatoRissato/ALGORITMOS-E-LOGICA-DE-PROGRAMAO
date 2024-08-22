public class exemplo01
{
    public static void main (String args[])
    {
        int valor;
        try{if(valor % 2 ==0)
        {
            System.out.println("Seu numero e par");
        }
        else{
            System.out.println("Seu numero e impar");
        }
    }catch (NumberFormatExpetion e) {
        System.ou.println("ERRO : O argumento fornecido nao é um numero valido. ");
        e.printStackTrace();
    }
}