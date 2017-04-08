package heranca;

public class Pessoa
{
    // atributos
    private String nome;
    private int idade;
    private Endereco endereco;

    public Pessoa(String nome)
    {
            this.nome = nome;
    }

    public Pessoa(String nome, int idade)
    {
            this.nome = nome;
            this.idade = idade;
    }

    // setters e getters
    public String getNome()
    {
        return nome;
    }

    public void setNome(String nome)
    {
        this.nome = nome;
    }

    public int getIdade()
    {
        return idade;
    }

    public void setIdade(int idade)
    {
        this.idade = idade;
    }

    public void setEndereco(Endereco endereco)
    {
        this.endereco = endereco;
    }

    public Endereco getEndereco()
    {
        return this.endereco;
    }

    public String toString()
    {
        String dados =
            "\nNome: " + this.nome +
            "\nidade: " + this.idade +
            this.endereco;

        return dados;
    }
}
