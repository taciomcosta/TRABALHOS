//Importando Scanner
import java.util.Scanner;

public class Ex16{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	double catetoAdjacente, catetoOposto, hipotenusa;
	
	System.out.println("Hipotenusa de um triângulo\n\n");
	
	//	Entradas
	System.out.print("Insira o tamanho do cateto adjacente: ");
	catetoAdjacente = input.nextDouble();
	
	System.out.print("Insira o tamanho do cateto oposto: ");
	catetoOposto = input.nextDouble();
	
	//Processamento
	hipotenusa = Math.sqrt( Math.pow(catetoAdjacente, 2) + Math.pow(catetoOposto, 2) );
	
	//Saída
	System.out.printf("Hipotenusa = %.2f", hipotenusa);
		
	}
}
