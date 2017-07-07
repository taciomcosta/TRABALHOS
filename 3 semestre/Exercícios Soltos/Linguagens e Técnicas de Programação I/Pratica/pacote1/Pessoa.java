package pacote1;

import pacote2.Endereco;

public class Pessoa
{
        // ATRIBUTOS
        private String nome;
        private String cpf;
        private String rg;
        private int idade;
        private char sexo;
        private Endereco endereco;

        // MÉTODOS
        // construtores
        public Pessoa(){}

        public Pessoa(String nome, String cpf, String rg, int idade, char sexo)
        {
                setNome(nome);
                setCpf(cpf);
                setRg(rg);
                setIdade(idade);
                setSexo(sexo);
        }

        // setters e getters
        public void setNome(String nome)
        {
                this.nome = nome;
        }

        public String getNome()
        {
                return this.nome;
        }

        public void setCpf(String cpf)
        {
                this.cpf = cpf;
        }

        public String getCpf()
        {
                return this.cpf;
        }

        public void setRg(String rg)
        {
                this.rg = rg;
        }

        public String getRg()
        {
                return this.rg;
        }

        public void setIdade(int idade)
        {
                this.idade = idade;
        }

        public int getIdade()
        {
                return this.idade;
        }

        public void setSexo(char sexo)
        {
                this.sexo = sexo;
        }

        public char getSexo()
        {
                return this.sexo;
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
                return "\nPessoa = {" + getNome() + ", " + getCpf() + ", " + getRg() + " ," + getIdade() + ", " + getSexo() + "}" +
                        this.endereco.toString();
        }
}
