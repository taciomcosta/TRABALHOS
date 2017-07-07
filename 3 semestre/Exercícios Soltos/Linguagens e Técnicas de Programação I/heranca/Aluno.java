package heranca;

public class Aluno extends Pessoa
{
    // atributos
    private int ra;
    private String curso;

    // constructors
    public Aluno(String nome, int ra, String curso)
    {
            super(nome);
            this.ra = ra;
            this.curso = curso;
    }

    public Aluno(String nome, int idade, int ra, String curso)
    {
            super(nome, idade);
            this.ra = ra;
            this.curso = curso;
    }

    // setters & getters
    public void setRa(int ra)
    {
        this.ra = ra;
    }

    public int getRa()
    {
        return this.ra;
    }

    public void setCurso(String curso)
    {
        this.curso = curso;
    }

    public String getCurso()
    {
        return this.curso;
    }

    public String toString()
    {
        String dados =
            "RA: " + this.ra +
            "\nCurso: " + this.curso;

            return super.toString() + dados;
    }

}
