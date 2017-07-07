public class Computador 
{
	//Atributos
	String marca;
	String cor;
	String modelo;
	String serie;
	double valor;
	
	//Métodos
	void imprimirDados()
	{
		System.out.println("Marca: " + marca);
		System.out.println("Cor: " + cor);
		System.out.println("Modelo: " + modelo);
		System.out.println("Série: " + serie);
		System.out.println("Valor: R$" + valor);
	}
}
