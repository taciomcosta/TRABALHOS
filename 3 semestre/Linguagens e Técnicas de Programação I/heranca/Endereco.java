package heranca;

public class Endereco
{
    // atributos
    private String nome;
    private int numero;

    // setters e getters
    public void setNome(String nome)
    {
        this.nome = nome;
    }

    public String getNome()
    {
        return this.nome;
    }

    public void setNumero(int numero)
    {
        this.numero = numero;
    }

    public int getNumero()
    {
        return this.numero;
    }

    public String toString()
    {
        String dados =
            "\nEndereço: " + this.nome +
            "\nn° " + this.numero + "\n";

        return dados;
    }
}
