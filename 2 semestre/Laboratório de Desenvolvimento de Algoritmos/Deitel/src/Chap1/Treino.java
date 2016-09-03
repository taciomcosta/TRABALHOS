package Chap1;
import java.util.Scanner;

public class Treino
{
	
	public static void main(String[] args)
	{
		
//		instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		int x,y,z,result;
		
		System.out.print("Insira o valor de x: ");
		x = input.nextInt();
		
		System.out.print("Insira o valor de y: ");
		y = input.nextInt();
		
		System.out.print("Insira o valor de z: ");
		z = input.nextInt();
		
		result = x*y*z;
		
		System.out.print("Product is " + result);
		
		
	}
}