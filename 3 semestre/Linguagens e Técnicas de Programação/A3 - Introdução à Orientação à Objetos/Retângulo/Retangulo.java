public class Retangulo 
{
	//Atributos
	double altura;
	double largura;
	
	//Métodos
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
		System.out.println("Área: " + altura*largura);
	}
	
	void obterPerimetro()
	{
		System.out.println("Perímetro: " + (2*altura + 2*largura));
	}
}
