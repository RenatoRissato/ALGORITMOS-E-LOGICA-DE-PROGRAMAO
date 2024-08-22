public class Mathrandom
{
    public static void main(String args[])
    {
        int valor=0;
        int qtde=0;
        while(valor!=10)
        {
            valor = (int)(5+(Math.random() *5));
            System.out.println(valor);
            qtde++;
        }
        System.out.println("rodou: " + qtde + " vezes");
    }
}