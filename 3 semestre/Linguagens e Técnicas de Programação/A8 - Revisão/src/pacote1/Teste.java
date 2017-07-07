package pacote1;

public class Teste
{
	public static void main(String[] args)
	{
		Animal animal = new Animal("Lobo is homem", "Azul");
		
		System.out.println(animal);
		animal.falar();
		
		Animal a1 = new Animal();
		
		Cachorro cachorro = new Cachorro();
		cachorro.setNome("Bigode");
		cachorro.setCor("Preto");
		cachorro.setRaca("Chiuaua");
		cachorro.setSexo('M');
		
		System.out.println(cachorro);
		
	}
}
