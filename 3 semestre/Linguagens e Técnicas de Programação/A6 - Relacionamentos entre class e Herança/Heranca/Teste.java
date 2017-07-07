package Heranca;

import RelacionamentoClasses.Endereco;

public class Teste 
{
	public static void main(String[] args)
	{
		Funcionario f1 = new Funcionario();
		Endereco endF1 = new Endereco();
		
		f1.setNome("Eliseu");
		f1.setAltura(1.74);
		f1.setCargo("Boss");
		f1.setCpf("111.111.111.11");
		f1.setIdade(19);
		f1.setRegistro("45613");
		f1.setRg("111.111.111.11");
		f1.setSalario(10000);
		
		//Objeto Endereco do Funcionario
		endF1.setBairro("Tatuapé");
		endF1.setCidade("Guarulhos");
		endF1.setLogradouro("Av");
		endF1.setNome("Nenhuma");
		endF1.setNumero("29a");
		endF1.setCep("01321");
		f1.setEndereco(endF1);
		
		System.out.println(f1);
	}
}
