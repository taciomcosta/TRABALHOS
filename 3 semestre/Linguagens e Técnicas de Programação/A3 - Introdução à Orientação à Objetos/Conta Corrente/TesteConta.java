public class TesteConta 
{
	public static void main(String[] args)
	{
		//Criação do 1° objeto ContaCorrente
		ContaCorrente conta1 = new ContaCorrente();
		
		// Atribuindo valores (estados)
		conta1.nome = "Tácio";
		conta1.agencia = 2045;
		conta1.conta = 30303;
		conta1.saldo = 500.00;
		
		conta1.imprimirDados();
		
		conta1.depositar(150.00);
		conta1.imprimirSaldo();
		
		conta1.sacar(250.00);
		conta1.imprimirSaldo();
		
		
	}
}
