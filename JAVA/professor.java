public class professor
{
    public static void main(String args[])
    {
        int valor=0;
        while(valor<5 || valor>10)
        {
            valor = (int)(Math.random() *11);
        }
        System.out.println(valor);
    }
}