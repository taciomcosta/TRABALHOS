Algoritmo "Exercício 12"

Var
ns: real

Inicio
escreval("Algoritmo - Gratificação salarial")
escreval

//ENTRADA
escreva("Digite o salário atual: ")
leia(ns)

//PROCESSAMENTO e SAÍDA
ns <- ns*0.93
escreval
se (ns<=350) entao
   escreval("Valor do salário menos imposto de 7%: R$",ns)
   escreval("Salário com gratificação: R$",ns+100)

senao
se (ns>350) e ( ns<=600) entao
   escreval("Valor do salário menos imposto de 7%: R$",ns)
   escreval("Salário com gratificação: R$",ns+75)

senao
se (ns>600) e ( ns<=900) entao
   escreval("Valor do salário menos imposto de 7%: R$",ns)
   escreval("Salário com gratificação: R$",ns+50)
   
senao
se (ns>900) entao
   escreval("Valor do salário menos imposto de 7%: R$",ns)
   escreval("Salário com gratificação: R$",ns+35)

fimse
fimse
fimse
fimse



Fimalgoritmo