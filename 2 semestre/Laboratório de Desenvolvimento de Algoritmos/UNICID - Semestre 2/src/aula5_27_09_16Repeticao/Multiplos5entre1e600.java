//Imprima os múltiplos de 5 entre 1 e 600

public class Multiplos5entre1e600 {

	public static void main(String[] args){
		
	System.out.println("Múltiplos de 5 entre 1 e 600\n\n");
		
	//vars
	int i = 1;
	
	//Jeito 1
	while ( i <= 600 )
	{
		if ( i%5 == 0 )
			System.out.printf("%d\n", i);
		i++;
	}
	
	//Jeito 2
	i=5;
	while ( i <= 600 )
	{
		System.out.println(i);
		i += 5;
	}
	
	
	}
}
