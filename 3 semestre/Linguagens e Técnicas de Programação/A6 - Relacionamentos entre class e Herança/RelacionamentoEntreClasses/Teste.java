package RelacionamentoClasses;

public class Teste 
{
	public static void main(String[] args)
	{
		Pessoa p1 = new Pessoa();
		
		//preenchendo o objeto
		p1.setNome("Tácio");
		p1.setCpf("111-111-111-11");
		p1.setRg("11.111.111-1");
		p1.setIdade(19);
		p1.setAltura(1.74);
		
		//preenchendo o endereco
		Endereco endP1 = new Endereco();
		endP1.setLogradouro("Av.");
		endP1.setNome("Tatuapé");
		endP1.setNumero("11A");
		endP1.setCep("00000-000");
		endP1.setCidade("Tatuapé");
		endP1.setBairro("nenhum");
		
		p1.setEndereco(endP1); //endereco da pessoa
		
		//Imprimindo dados com toString()
		System.out.println(p1);
	}
}
