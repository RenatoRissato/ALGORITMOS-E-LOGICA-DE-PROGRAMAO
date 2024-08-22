public class exemplo
{
    public static void main (String args[])
    {
        float lado1, lado2, lado3;
        lado1 = 3;
        lado2 = lado1 + 1;
        lado3 = 4;
        boolean igualdade12, igualdade23;
        igualdade12 = (lado1 == lado2);
        igualdade23 = (lado2 == lado3);
        
        System.out.println("Lado 1 é igual ao lado 2? " + igualdade12);
        //System.out.println(igualdade12);
        
        System.out.println("Lado 2 é igual ao lado 3? " + igualdade23);
        //System.out.println(igualdade23);
        
        boolean equilatero;
        equilatero = (igualdade12 & igualdade23);
        System.out.println("Triangulo equilatero? " + equilatero);
        
        
        
        
    }
}