public class Lampada
{
	//Atributos
	boolean status;
	
	//M�todos
	void ligar()
	{
		status = true;
	}
	
	void desligar()
	{
		status = false;
	}
	
	void observar()
	{
		if (status) {
			System.out.println("L�mpada ligada");
		} else {
			System.out.println("L�mpada desligada");
		}
	}
}
