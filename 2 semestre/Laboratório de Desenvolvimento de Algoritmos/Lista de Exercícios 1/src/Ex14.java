//Importando Scanner
import java.util.Scanner;

public class Ex14{
	
	public static void main(String[] args){
		
	//Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	//vars
	int anoNasc, anoAtual, anos, meses, dias, semanas;
	
	System.out.println("Idade em anos, meses, dias e semanas\n\n");
	
	//Entrada	
	System.out.print("Insira o ano de nascimento: ");
	anoNasc = input.nextInt();
	
	System.out.print("Insira o ano atual: ");
	anoAtual = input.nextInt();
	
	//Processamento
	anos = anoAtual - anoNasc;
	meses = anos * 12;
	semanas = meses * 4;
	dias = semanas * 7;
	
	//Saída
	System.out.println("Idade: ");
	System.out.println("\t-anos: " + anos);
	System.out.println("\t-meses: " + meses);
	System.out.println("\t-semanas: " + semanas);
	System.out.println("\t-dias: " + dias );
		
	}
}