package pacote2;

public class Endereco
{
        // ATRIBUTOS
        private String nome;
        private String bairro;
        private String cidade;
        private String estado;
        private String cep;
        private int numero;

        // MÉTODOS
        // construtores
        public Endereco(){}

        public Endereco(String nome, String bairro, String cidade, String estado, String cep, int numero)
        {
                setNome(nome);
                setBairro(bairro);
                setCidade(cidade);
                setEstado(estado);
                setCep(cep);
                setNumero(numero);
        }

        // setters e getters
        public void setNome(String nome)
        {
                this.nome = nome;
        }

        public void setBairro(String bairro)
        {
                this.bairro = bairro;
        }

        public void setCidade(String cidade)
        {
                this.cidade = cidade;
        }

        public void setEstado(String estado)
        {
                this.estado = estado;
        }

        public void setCep(String cep)
        {
                this.cep = cep;
        }

        public void setNumero(int numero)
        {
                this.numero = numero;
        }

        public String getNome()
        {
                return this.nome;
        }

        public String getBairro()
        {
                return this.bairro;
        }

        public String getCidade()
        {
                return this.cidade;
        }

        public String getEstado()
        {
                return this.estado;

        }

        public String getCep()
        {
                return this.cep;
        }

        public int getNumero()
        {
                return this.numero;
        }

        public String toString()
        {
                return "\nEndereco = {" + getNome() + ", " + getBairro() + ", " + getCep() + ", " + getNumero() + ", " + getCidade() + ", " + getEstado() + "}\n";
        }
}
