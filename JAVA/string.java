class string
{
    public static void main(String args[])
    {
        int tam;
        String nome;
        nome = "Faculdade Einstein de Limeira";
        tam = nome.length();
        System.out.println("texto: " + nome);
        System.out.println("caracteres: " + tam);
        System.out.println("caracteres da posição 5: " + nome.charAt(4) );//começa em o, entao F e = 0
        System.out.println(nome.toUpperCase() ); // TODAS AS LETRAS MAIUSCULAS
        System.out.println(nome.toLowerCase() ); // todas as letras minusculas
        
                System.out.println(nome.substring(9,17) ); // Selecionar o que vai printar

                System.out.println(nome.trim() ); //Remoção de espaços em branco no início e no final de uma string

                System.out.println(nome.replace("Faculdade","Centro Universitario") ); // trocar a palavra do string

    }
}