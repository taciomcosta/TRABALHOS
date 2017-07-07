package heranca;

public class Teste
{
        public static void main(String[] args)
        {
                // RELACIONAMENTO HAS-A
                Pessoa p1 = new Pessoa("Tácio");
                Endereco endP1 = new Endereco();

                endP1.setNome("Rua Conde Francisco Matarazzo");
                endP1.setNumero(29);

                p1.setIdade(19);
                p1.setEndereco(endP1);

                System.out.println(p1);

                // RELACIONAMENTO IS-A (HERANÇA)
                Aluno a1 = new Aluno("Aluno", 123, "CC");
                Endereco edA1 = new Endereco();

                edA1.setNome("2° rua - nome");
                edA1.setNumero(30);

                a1.setEndereco(edA1);

                System.out.println(a1);
        }
}
