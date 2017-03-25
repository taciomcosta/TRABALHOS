//Importando Scanner
import java.util.Scanner;

public class Ex10{
	
	public static void main(String[] args){
		
		//Instanciando Scanner
		Scanner input = new Scanner(System.in);
		
		System.out.println("Dias entre duas datas\n\n");
		
		//vars
		int a1, m1, d1, a2, m2, d2, dF, aI, totalDias=0, auxAno, auxMes, auxDia;
		
		//Entrada
		System.out.print("Digite o ano inicial (>1950): ");
		a1 = input.nextInt();
		
		System.out.print("Digite o mês: ");
		m1 = input.nextInt();
		
		System.out.print("Digite o dia: ");
		d1 = input.nextInt();
		
		System.out.print("\n\nDigite o ano final(>1996): ");
		a2 = input.nextInt();
		
		System.out.print("Digite o mês: ");
		m2 = input.nextInt();
		
		System.out.print("Digite o dia: ");
		d2 = input.nextInt();
		
		//Processamento
		
		//Trocando as datas, caso estejam invertidas
		if ( (a1>a2) || (a1==a2 && m1>m2) ||  (a1==a2 && m1==m2 && d1>d2))
		{
			auxAno = a1;
			auxMes = m1;
			auxDia = d1;
			a1 = a2;
			m1 = m2;
			d1 = d2;
			a2 = auxAno;
			m2 = auxMes;
			d2 = auxDia;
		}
		
		//totalDias = Quantidade de dias já decorridas do ano atual + quantidade de dias decorridas do ano final
		totalDias = (365 - ( (m1-1)*30 + d1 )) + ( (m2-1)*30 + d2 );
		
		//Preservado o valor do ano inicial, para ser usado no final
		aI = a1 + 1;
		
		while( aI < a2  )
		{
			//Se o ano for bissexto
			if( (aI-1952)%4 == 0 )
				totalDias += 366;
			else
				totalDias += 365;	
		}
		
		//Saída
		System.out.printf("\nAno inicial: %d/%d/%d\n", d1,m1,a1);
		System.out.printf("Ano final: %d/%d/%d\n", d2,m2,a2);
		System.out.println("Total de dias: " + totalDias);
		
		
		
		
		
	}
}