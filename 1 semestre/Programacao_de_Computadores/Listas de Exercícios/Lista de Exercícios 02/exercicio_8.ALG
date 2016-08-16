Algoritmo "Exercício 8"

Var
s: real

Inicio
escreval("Algoritmo - Reajuste salarial")
escreval

//ENTRADA
escreva("Digite o salário do funcionário: ")
leia(s)

//PROCESSAMENTO e SAÍDA
se ( s <=300) entao
   s <- s*1.35
   escreva("Salário reajustado: R$",s)
   
senao
   s <- s*1.15
   escreva("Salário reajustado: R$",s)
   
fimse




Fimalgoritmo