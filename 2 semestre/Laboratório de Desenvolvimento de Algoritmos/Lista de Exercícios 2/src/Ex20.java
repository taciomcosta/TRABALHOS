//Importando Scanner
import java.util.Scanner;

public class Ex20 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Categoria de um nadador\n\n");
		
		//vars
		int idade;
		
		//Entrada
		System.out.print("Insira a idade do nadador: ");
		idade = input.nextInt();
		
		//Processamento
		if ( idade>5 && idade<=7 )
			System.out.println("Categoria: Infantil");
		else if ( idade>=8 && idade<=10 )
			System.out.println("Categoria: Juvenil");
		else if ( idade>=11 && idade<=15 )
			System.out.println("Categoria: Adolescente");
		else if ( idade>=16 && idade<=30 )
			System.out.println("Categoria: Adulto");
		else if ( idade>30 )
			System.out.println("Categoria: Sênior");
		
	}

}
