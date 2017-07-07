public class Principal 
{
	public static void main(String[] args)
	{
		Computador meuComputador = new Computador();
		
		meuComputador.marca = "HP";
		meuComputador.cor = "Preto";
		meuComputador.modelo = "1000";
		meuComputador.serie = "Pvl";
		meuComputador.valor = 2145.50;
		
		meuComputador.imprimirDados();
	}
}
