Algoritmo "Exerc�cio 16"

Var
np: real
cod: inteiro
Inicio
escreval("Algoritmo - Valor novo do produto")
escreval

//ENTRADA
escreva("Digite o valor atual do produto: ")
leia(np)
escreva("Digite o c�digo do produto: ")
leia(cod)
//PROCESSAMENTO e SA�DA
escreval
limpatela
se (np<=30) entao
   escreval("C�digo do produto: ",cod)
   escreval("Pre�o atual: R$",np)
   escreval("Desconto: Nenhum")
   escreval("Novo pre�o: R$",np)

senao
se (np>30) e ( np<=100) entao
   escreval("C�digo do produto: ",cod)
   escreval("Pre�o atual: R$",np)
   escreval("Desconto: 10%")
   escreval("Novo pre�o: R$",np*0.90)


senao
se (np>100) entao
   escreval("C�digo do produto: ",cod)
   escreval("Pre�o atual: R$",np)
   escreval("Desconto: 15%")
   escreval("Novo pre�o: R$",np*0.85)



fimse
fimse
fimse





Fimalgoritmo