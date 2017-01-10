//Importando Scanner 
import java.util.Scanner;

public class Ex20 {

	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Altura da Classe\n\n");
		
		//vars
		int sexo, maiorSexo, i, contMeninos=0;
		double altura, menorAltura, maiorAltura, alturaMeninos=0;
		
		//Entrada
		System.out.print("Digite a altura da 1� crian�a: ");
		altura = input.nextDouble();
		
		System.out.print("Digite o sexo da 1� crian�a(1 - M / 2 - F): ");
		sexo = input.nextInt();
		
		//Processamento
		maiorAltura = altura;
		maiorSexo = sexo;
		menorAltura = altura;
		
		if ( sexo == 1 )
		{
			alturaMeninos += altura;
			contMeninos++;
		}
			
		
		for( i=2; i<=30; i++ )
		{
			System.out.printf("Digite a altura da %d� crian�a: ",i);
			altura = input.nextDouble();
			
			System.out.printf("Digite o sexo da %d� crian�a(1 - M / 2 - F): ",i);
			sexo = input.nextInt();
			
			//Se for menino, soma com a m�dia dos meninos
			if ( sexo == 1 )
			{
				alturaMeninos += altura;
				contMeninos++;
			}
				
			
			//Se for a menor crian�a
			if(altura < menorAltura)
				menorAltura = altura;
			//Se for a maior crian�a
			else if ( altura > maiorAltura )
			{
				maiorAltura = altura;
				maiorSexo = sexo;
			}
			
		}
		
		alturaMeninos /= contMeninos;
		
		//Sa�da
		System.out.println("Menor altura do grupo: " + menorAltura);
		System.out.println("M�dia da altura dos meninos: " + alturaMeninos);
		if( maiorSexo == 1 )
			System.out.println("Maior altura do grupo: " + maiorAltura + " (Menino)");
		else
			System.out.println("Maior altura do grupo: " + maiorAltura + " (Menina)");
		
	}
}
