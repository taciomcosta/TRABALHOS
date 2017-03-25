package encapsulamento;

public class TesteData {

    public static void main(String[] args) {

        Data d1 = new Data();

        System.out.println("\nDia: " + d1.getDia());
        System.out.println("Mes: " + d1.getMes());
        System.out.println("Ano: " + d1.getAno());

        d1.imprimirDados();

    }

}
