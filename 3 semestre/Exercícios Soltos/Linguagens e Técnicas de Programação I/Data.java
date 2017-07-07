package encapsulamento;

public class Data
{
  private int dia;
  private int mes;
  private int ano;

  //getters e setters
  public int getDia() {
    return dia;
  }

  public void setDia(int dia) {
    this.dia = dia;
  }

  public int getMes() {
    return mes;
  }

  public void setMes(int mes) {
    this.mes = mes;
  }

  public int getAno() {
    return ano;
  }

  public void setAno(int ano) {
    this.ano = ano;
  }

  public void imprimirDados()
  {
    System.out.println("\nDia: " + this.getDia());
    System.out.println("Mes: " + this.getMes());
    System.out.println("Ano: " + this.getAno());
  }
}
