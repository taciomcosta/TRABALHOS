Algoritmo "Exerc�cio 12"

Var
ns: real

Inicio
escreval("Algoritmo - Gratifica��o salarial")
escreval

//ENTRADA
escreva("Digite o sal�rio atual: ")
leia(ns)

//PROCESSAMENTO e SA�DA
ns <- ns*0.93
escreval
se (ns<=350) entao
   escreval("Valor do sal�rio menos imposto de 7%: R$",ns)
   escreval("Sal�rio com gratifica��o: R$",ns+100)

senao
se (ns>350) e ( ns<=600) entao
   escreval("Valor do sal�rio menos imposto de 7%: R$",ns)
   escreval("Sal�rio com gratifica��o: R$",ns+75)

senao
se (ns>600) e ( ns<=900) entao
   escreval("Valor do sal�rio menos imposto de 7%: R$",ns)
   escreval("Sal�rio com gratifica��o: R$",ns+50)
   
senao
se (ns>900) entao
   escreval("Valor do sal�rio menos imposto de 7%: R$",ns)
   escreval("Sal�rio com gratifica��o: R$",ns+35)

fimse
fimse
fimse
fimse



Fimalgoritmo