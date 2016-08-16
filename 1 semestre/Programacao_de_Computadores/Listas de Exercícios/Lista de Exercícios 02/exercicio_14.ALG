Algoritmo "Exercício 14"

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
   escreval("Novo salário: R$",ns*1.50)
senao
se (ns>300) e ( ns<=500) entao
   escreval("Novo salário: R$",ns*1.40)
senao
se (ns>500) e ( ns<=700) entao
   escreval("Novo salário: R$",ns*1.30)
senao
se (ns>700) e ( ns<=800) entao
   escreval("Novo salário: R$",ns*1.20)
senao
se (ns>800) e ( ns<=1000) entao
   escreval("Novo salário: R$",ns*1.10)
senao
se (ns>1000) entao
   escreval("Novo salário: R$",ns*1.05)


fimse
fimse
fimse
fimse
fimse
fimse


Fimalgoritmo