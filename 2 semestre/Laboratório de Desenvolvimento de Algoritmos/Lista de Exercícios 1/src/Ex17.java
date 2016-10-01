//Importando Scanner
import java.util.Scanner;

public class Ex17{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double raio, comprimento, area, volume;
	
	System.out.println("Comprimento, área e volume de uma esfera\n\n");
	
	//Entrada
	System.out.print("Insira o raio da esfera: ");
	raio = ent.nextDouble();
	
	//Processamento
	comprimento = 2 * 3.14 * raio;
	area = 3.14 * Math.pow( raio , 2);
	volume = (3 * 3.14 * Math.pow( raio, 3) ) / 4;
	
	//Saída
	System.out.println("Comprimento = " + comprimento);
	System.out.println("Área = " + area);
	System.out.println("Volume = " + volume );
	
	
	}
}