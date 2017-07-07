package pacote5;

import pacote1.Pessoa;
import pacote2.Endereco;
import pacote3.Aluno;
import pacote4.Professor;

public class Teste
{
        public static void main(String[] args)
        {
                // PESSOA
                Pessoa pessoa = new Pessoa("Tácio", "000-000-000.00", "00-000-000.2", 19, 'M');
                Endereco endPessoa = new Endereco("Rua Conde", "Jd. Zaira", "Guarulhos", "SP", "11111111", 29);
                pessoa.setEndereco(endPessoa);
                System.out.println(pessoa);

                // ALUNO
                Aluno aluno = new Aluno();
                Endereco endAluno = new Endereco("Rua Aluno", "Jd. Aluno", "Cidade Aluno", "Estado Aluno", "11111111", 29);
                aluno.setRgm(16161616);
                aluno.setEmail("meuEmail@email.com");
                aluno.setNome("Aluna");
                aluno.setCpf("111-111-111.00");
                aluno.setRg("111-111-111.00");
                aluno.setIdade(20);
                aluno.setSexo('F');
                aluno.setEndereco(endPessoa);
                System.out.println(aluno);

                // PROFESSOR
                Professor professor = new Professor();
                Endereco endProfessor = new Endereco("Rua Professor", "Jd. Professor", "Cidade Professor", "Estado Professor", "22222222", 29);
                professor.setTitulacao("PhD");
                professor.setNome("Teacher");
                professor.setCpf("222-222-222.22");
                professor.setRg("222-222-222.22");
                professor.setIdade(40);
                professor.setSexo('M');
                professor.setEndereco(endProfessor);
                System.out.println(professor);
        }
}
