//Importando Scanner
import java.util.Scanner;

public class Ex19 {
	
	public static void main(String[] args)
	{
	//	Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	float largura, profundidade, area, potencia;
	
	System.out.println("Potência para iluminar um cômodo\n\n");
	
	//Entrada	
	System.out.print("Insira a largura do cômodo em metros: ");
	largura = input.nextFloat();
	
	System.out.print("Insira a profundidade do cômodo em metros:");
	profundidade = input.nextFloat();
	
	//Processamento
	area = largura * profundidade;
	potencia = area * 18;
	
	//Saída
	System.out.println("Área = " + area + " m²");
	System.out.println("Potência = " + potencia + " W ");
	
	
	}
}
