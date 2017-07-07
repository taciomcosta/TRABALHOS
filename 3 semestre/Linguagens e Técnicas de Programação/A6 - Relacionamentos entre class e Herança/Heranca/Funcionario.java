//HERANÇA

//Funcionario herda os atributos e métodos de Pessoa

package Heranca;

import RelacionamentoClasses.Pessoa;

public class Funcionario extends Pessoa 
{
	//atributos
	private String cargo;
	private String registro;
	private double salario;
	
	 //setters
	public void setCargo(String cargo) 
	{
		this.cargo = cargo;
	}
	
	public void setRegistro(String registro) 
	{
		this.registro = registro;
	}
	
	public void setSalario(double salario) 
	{
		this.salario = salario;
	}
	
	//getters
	public String getCargo() 
	{
		return cargo;
	}
	public String getRegistro() 
	{
		return registro;
	}
	public double getSalario()
	{
		return salario;
	}
	
	//sobreescrevendo toString() da classe Pessoa
	public String toString()
	{
		String dados = 
				//nome é private em Pessoa
				super.toString() +
				"\nRegistro: " + this.registro +
				"\nCargo: " + this.cargo +
				"\nSalário: R$ " + this.salario;
		
		return dados;
	}
}
