public class Pessoas
{
    private String nome;
    private int idade; 
    private double peso;
    private double altura;
    
    Pessoas()
    {

        //posso criar um construtor sem nada, e passar as informações depois.
    }
    
    Pessoas ( String nome, int idade, double peso, double altura )
    {
        setNome( nome );
        setIdade( idade );
        setPeso( peso );
        setAltura( altura );
    }
    
    void setNome( String nome ) //set ou get no nome, se for o mesmo nome de variavel ali no private.
    {
        if(nome != "" )
        this.nome = nome;
        // nome = snome; pode fazer assim tambem 
    }
    String getNome()
    {
        return nome;
    }
    void setIdade ( int idade )
    {
        if (idade > 0 && idade < 200)
        this.idade = idade; //não pode ser idade = this.idade
    }
    int getIdade()
    {
        return idade;
    }
    void setPeso( double peso)
    {
        if(peso > 0.0 && peso < 500.0){
           this.peso = peso; 
        }

    }
    double getPeso()
    {
        return peso;
    }
    void setAltura( double altura)
    {
        if(altura > 0.0 && altura < 3.0){
          this.altura = altura;  
        }
    }  
    double getAltura()
    {
        return altura;
    }
    double calculaIMC()
    {
        double imc = peso/(altura*altura);
        return imc;
        // aqui é altura quadrado 
        //double imc = peso/Math.pow(altura,2)  = a função Math.pow e para elevar um numero 
    }
    String situacaoIMC()
    {
        String situacao = "";
        double IMC = calculaIMC();
        if(IMC < 18.5)
        situacao = "Abaixo do peso ideal";
        else if (IMC < 24.9)
        situacao = "Peso normaL";
        else if (IMC < 29.9)
        situacao = "Acima do peso";
        else if (IMC < 34.9)
        situacao = "Obesidade grau 1";
        else if (IMC < 39.9)
        situacao = "Obesidade grau 2";
        else
        situacao = "Obesidade grau 3";
        return situacao;
    }
}
    
