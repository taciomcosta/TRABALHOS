Algoritmo "Exercício 11"

Var
ns: real

Inicio
escreval("Algoritmo - Reajuste salarial")
escreval

//ENTRADA
escreva("Digite o salário atual: ")
leia(ns)

//PROCESSAMENTO e SAÍDA
escreval
se (ns<=300) entao
   escreval("Valor do aumento: R$",ns*0.15)
   escreval("Novo salário: R$",ns*1.15)
   
senao
se (ns>400) e ( ns<600) entao
   escreval("Valor do aumento: R$",ns*0.10)
   escreval("Novo salário: R$",ns*1.10)
   
senao
se (ns>600) e ( ns<900) entao
   escreval("Valor do aumento: R$",ns*0.5)
   escreval("Novo salário: R$",ns*1.05)

senao
se (ns>900) entao
   escreval("Valor do aumento: R$",ns*0.0)
   escreval("Novo salário: R$",ns*1.00)

fimse
fimse
fimse
fimse



Fimalgoritmo