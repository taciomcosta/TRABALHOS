public class Eleitor 
{
	//Atributos
	String nome;
	int idade;
	
	//M�todos
	void imprimir()
	{
		System.out.println("Nome: " + nome);
		System.out.println("Idade: " + idade);
		verificar();
	}
	
	void verificar()
	{
		if (idade < 16) {
			System.out.println("O eleitor n�o pode votar");
		} else if (idade <= 65){
			System.out.println("O eleitor deve votar");
		} else {
			System.out.println("Voto facultativo");
		}
	}
}

