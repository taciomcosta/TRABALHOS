Algoritmo "Exerc�cio 11"

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
   escreval("Valor do aumento: R$",ns*0.15)
   escreval("Novo sal�rio: R$",ns*1.15)
   
senao
se (ns>400) e ( ns<600) entao
   escreval("Valor do aumento: R$",ns*0.10)
   escreval("Novo sal�rio: R$",ns*1.10)
   
senao
se (ns>600) e ( ns<900) entao
   escreval("Valor do aumento: R$",ns*0.5)
   escreval("Novo sal�rio: R$",ns*1.05)

senao
se (ns>900) entao
   escreval("Valor do aumento: R$",ns*0.0)
   escreval("Novo sal�rio: R$",ns*1.00)

fimse
fimse
fimse
fimse



Fimalgoritmo