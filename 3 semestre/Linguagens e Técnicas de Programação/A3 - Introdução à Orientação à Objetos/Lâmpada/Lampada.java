public class Lampada
{
	//Atributos
	boolean status;
	
	//Métodos
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
			System.out.println("Lâmpada ligada");
		} else {
			System.out.println("Lâmpada desligada");
		}
	}
}
