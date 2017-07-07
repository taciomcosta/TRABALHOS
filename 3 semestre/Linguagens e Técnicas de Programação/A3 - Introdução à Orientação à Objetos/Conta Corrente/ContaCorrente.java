public class ContaCorrente 
{

	//Atributos
	String nome;
	int conta;
	int agencia;
	double saldo;
	
	//M�todos
	void imprimirDados()
	{
		System.out.println("Nome do cliente: " + nome);
		System.out.println("Ag�ncia da conta: " + agencia);
		System.out.println("N�mero da conta: " + conta);
		System.out.println("Saldo: R$" + saldo);
	}
	
	void imprimirSaldo()
	{
		System.out.println("\nSaldo: R$" + saldo);
	}
	
	void depositar(double valor)
	{
		saldo += valor;
	}
	
	void sacar(double valor)
	{
		saldo -= valor;
	}
}
