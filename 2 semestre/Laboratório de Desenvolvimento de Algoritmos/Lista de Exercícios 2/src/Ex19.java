//Importando Scanner
import java.util.Scanner;

public class Ex19 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Peso ideal para uma pessoa\n\n");
		
		//vars
		int sexo;
		double peso, altura;
		
		//Entrada
		System.out.print("Insira sua altura em metros: ");
		altura = ent.nextDouble();
		
		System.out.println("Sexo");
		System.out.println("1 - Feminino");
		System.out.println("2 - Masculino");
		System.out.print("Insira o número correspondente ao seu sexo: ");
		sexo = ent.nextInt();
		
		//Processamento
		if ( sexo == 1 )
			peso = 62.1 * altura - 44.7;
		else
			peso = 72.7 * altura - 58;
		
		//Saída
		System.out.printf("Peso ideal: %.1f", peso);
	}
}
