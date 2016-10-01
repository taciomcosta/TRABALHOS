//Importando Scanner
import java.util.Scanner;

public class Ex10{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	double lado, area;
	
	System.out.println("Área de um quadradado\n\n");
	
	//Entrada	
	System.out.print("Insira o tamanho do lado do quadrado: ");
	lado = ent.nextDouble();
	
	//Processamento
	area = Math.pow(lado, 2);
	
	//Saída
	System.out.printf("Área = %.2f", area);
	
	}
}