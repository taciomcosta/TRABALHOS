package encapsulamento;

public class TesteData {

	public static void main(String[] args) {
		Data d1 = new Data();
		
		//d1.dia = 32;
		//d1.mes = 13;
		//d1.ano = -9999;
		
		d1.setDia(2);
		d1.setDia(2);
		d1.setDia(2000);
		
		System.out.println("\nDia: " + d1.getDia());
		System.out.println("\nMes: " + d1.getMes());
		System.out.println("\nAno: " + d1.getAno());
		
		d1.imprimirDados();

	}

}
