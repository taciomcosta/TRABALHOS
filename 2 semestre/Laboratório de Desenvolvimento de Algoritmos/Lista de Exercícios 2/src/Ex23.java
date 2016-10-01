//Importando Scanner
import java.util.Scanner;

public class Ex23 {
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner ent = new Scanner(System.in);
		
		System.out.println("Preço da nota de um produto\n\n");
		
		//vars
		int codigo = 0 , qtd = 0 ;
		double desconto = 0 , nota = 0 , notaFinal = 0 ;
		
		//Entrada
		System.out.print("Insira o código do produto: ");
		codigo = ent.nextInt();
		
		System.out.print("Insira a quantidade adquirida do produto: ");
		qtd = ent.nextInt();
		
		//Processamento
		if ( codigo>=1 && codigo<=10 )
		{
			System.out.println("Preço unitário: R$ 10,00");
			nota = 10*qtd;
			System.out.println("Preço total da nota: " + nota);
			
		}
		else if ( codigo>=11 && codigo<=20 )
		{
			System.out.println("Preço unitário: R$ 15,00");
			nota = 15*qtd;
			System.out.println("Preço total da nota: " + nota);
		}
		else if ( codigo>=21 && codigo<=30 )
		{
			System.out.println("Preço unitário: R$ 20,00");
			nota = 20*qtd;
			System.out.println("Preço total da nota: " + nota);
		}
		else if ( codigo>=31 && codigo<=40 )
		{
			System.out.println("Preço unitário: R$ 30,00");
			nota = 30*qtd;
			System.out.println("Preço total da nota: " + nota);
		}
		
		if ( nota <= 250 )
			desconto = nota * 0.05;
		else if ( nota < 500 )
			desconto = nota * 0.1;
		else
			desconto = nota * 0.15;
		
		notaFinal = nota - desconto;
		
		System.out.println("Desconto: R$ " + desconto);
		System.out.printf("Nota final: R$ %.2f", notaFinal);
		
		
		
	}

}
