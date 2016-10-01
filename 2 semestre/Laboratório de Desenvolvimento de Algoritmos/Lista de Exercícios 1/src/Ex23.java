//Importando Scanner
import java.util.Scanner;


public class Ex23 {

	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	//vars
	int angulo1, angulo2, angulo3;
	
	
	System.out.println("Medida do 3° ângulo de um triângulo\n\n");
	
	//Entradas	
	System.out.print("Insira o tamanho do 1° ângulo: ");
	angulo1 = ent.nextInt();
	
	System.out.print("Insira o tamanho do 2° ângulo: ");
	angulo2 = ent.nextInt();
	
	//Processamento
	angulo3 = 180 - angulo2 - angulo1;
	
	//Saída
	System.out.println("3° ângulo = " + angulo3 + "°");
		
	}
}
