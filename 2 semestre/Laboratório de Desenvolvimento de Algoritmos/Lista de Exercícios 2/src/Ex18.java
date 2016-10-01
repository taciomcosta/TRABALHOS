//Importando Scanner
import java.util.Scanner;

public class Ex18 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Maioridade\n\n");
		
		//vars
		int idade;
		
		//Entrada
		System.out.print("Insira a idade da pessoa: ");
		idade = input.nextInt();
		
		//Processamento e Saída
		if ( idade <= 18 )
			System.out.println("A pessoa é maior de idade");
		else
			System.out.println("A pessoa NÃO é maior de idade");
	}

}
