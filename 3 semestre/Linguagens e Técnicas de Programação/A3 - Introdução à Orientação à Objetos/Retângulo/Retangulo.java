public class Retangulo 
{
	//Atributos
	double altura;
	double largura;
	
	//M�todos
	void inserirAltura(double a)
	{
		altura = a;
	}
	
	void inserirLargura(double l)
	{
		largura = l;
	}
	
	void imprimirArea()
	{
		System.out.println("�rea: " + altura*largura);
	}
	
	void obterPerimetro()
	{
		System.out.println("Per�metro: " + (2*altura + 2*largura));
	}
}
