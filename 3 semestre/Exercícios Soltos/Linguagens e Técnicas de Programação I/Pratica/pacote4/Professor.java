package pacote4;

import pacote1.Pessoa;

public class Professor extends Pessoa
{
        // ATRIBUTOS
        private String titulacao;

        // MÉTODOS
        // setters e getters
        public void setTitulacao(String titulacao)
        {
                this.titulacao = titulacao;
        }

        public String getTitulacao()
        {
                return this.titulacao;
        }

        public String toString()
        {
                String dadosProfessor = "\nProfessor = {" + getTitulacao() + "}";

                return dadosProfessor + super.toString();
        }

}
