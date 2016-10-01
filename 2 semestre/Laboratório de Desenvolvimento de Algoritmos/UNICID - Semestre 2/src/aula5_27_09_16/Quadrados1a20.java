//Imprimir quadrados de 1 a 20
public class Quadrados1a20 {

	public static void main(String[] args){
		
	System.out.println("Quadrado dos números de 1 a 20\n\n");
	
	//vars
	double i,num;
	
	for(i=1; i<=20; i++)
	{
		num = Math.pow(i ,2);
		System.out.printf("%.0f² = %.0f\n", i, num);
	}
		
	}
}
