package pacote3;

import pacote1.Pessoa;

public class Aluno extends Pessoa
{
        // ATRIBUTOS
        private int rgm;
        private String email;

        // MÉTODOS
        // setters e getters
        public void setRgm(int rgm)
        {
                this.rgm = rgm;
        }

        public int getRgm()
        {
                return this.rgm;
        }

        public void setEmail(String email)
        {
                this.email = email;
        }

        public String getEmail()
        {
                return this.email;
        }

        public String toString()
        {
                String dadosAluno = "\nAluno = {" + getRgm() + ", " + getEmail() + "}";

                return dadosAluno + super.toString();
        }
}
