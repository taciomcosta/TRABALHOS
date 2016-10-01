//Importando Scanner
import java.util.Scanner;

public class Ex4{
	
	public static void main(String[] args){
		
	//Instanciando Scanner	
	Scanner input = new Scanner(System.in);
	
	//vars	
	float n1, n2, media;
	
	System.out.println("Média ponderada entre duas notas\n\n");
	
	//Entradas
	System.out.print("Insira a 1° nota: ");
	n1 = input.nextFloat();
	
	System.out.print("Insira a 2° nota: ");
	n2 = input.nextFloat();
	
	//Processamento
	media = ( n1*2 + n2*3 ) / ( 2 + 3 );
	
	//Saída
	System.out.printf("Média = %.2f", media);
	
		
	}
}