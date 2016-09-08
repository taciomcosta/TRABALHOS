package Chap1;
//importando Scanner
import java.util.Scanner;

public class Treino{
	
	public static void main(String[] args){
		
//	Instanciando Scanner
	Scanner input = new Scanner(System.in);
	
	
	System.out.println("\tPar ou ímpar?\n\n");
	
	System.out.print("Insira um número inteiro: ");
	int n = input.nextInt();
	
	if( n%2==0 )
		System.out.println("O número é par");
	else
		System.out.println("O número é ímpar");
	
		
		
	}
}