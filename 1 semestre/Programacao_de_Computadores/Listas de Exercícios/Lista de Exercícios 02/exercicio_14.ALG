Algoritmo "Exerc�cio 14"

Var
ns: real

Inicio
escreval("Algoritmo - Reajuste salarial")
escreval

//ENTRADA
escreva("Digite o sal�rio atual: ")
leia(ns)

//PROCESSAMENTO e SA�DA
escreval
se (ns<=300) entao
   escreval("Novo sal�rio: R$",ns*1.50)
senao
se (ns>300) e ( ns<=500) entao
   escreval("Novo sal�rio: R$",ns*1.40)
senao
se (ns>500) e ( ns<=700) entao
   escreval("Novo sal�rio: R$",ns*1.30)
senao
se (ns>700) e ( ns<=800) entao
   escreval("Novo sal�rio: R$",ns*1.20)
senao
se (ns>800) e ( ns<=1000) entao
   escreval("Novo sal�rio: R$",ns*1.10)
senao
se (ns>1000) entao
   escreval("Novo sal�rio: R$",ns*1.05)


fimse
fimse
fimse
fimse
fimse
fimse


Fimalgoritmo