//Importando Scanner
import java.util.Scanner;

public class Ex1{
	
	public static void main(String[] args){
	
	//Instanciando Scanner
	Scanner ent = new Scanner(System.in);
	
	System.out.println("Aprovação de um aluno\n\n");
	
	//vars
	float n1, n2, n3, n4, media;
	
	//Entradas
	System.out.print("Insira a 1° nota: ");
	n1 = ent.nextFloat();
	
	System.out.print("Insira a 2° nota: ");
	n2 = ent.nextFloat();
	
	System.out.print("Insira a 3° nota: ");
	n3 = ent.nextFloat();
	
	System.out.print("Insira a 4° nota: ");
	n4 = ent.nextFloat();
	
	//Processamento
	media = ( n1 + n2 + n3 + n4 ) / 4;
	
	//Saída
	System.out.printf("\nMédia: %.2f\n", media);
	if ( media >= 7 )
		System.out.println("Situação: APROVADO");
	else
		System.out.println("Situação: REPROVADO");
		
		
		
	}
}