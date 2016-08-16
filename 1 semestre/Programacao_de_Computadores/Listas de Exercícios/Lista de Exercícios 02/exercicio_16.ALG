Algoritmo "Exercício 16"

Var
np: real
cod: inteiro
Inicio
escreval("Algoritmo - Valor novo do produto")
escreval

//ENTRADA
escreva("Digite o valor atual do produto: ")
leia(np)
escreva("Digite o código do produto: ")
leia(cod)
//PROCESSAMENTO e SAÍDA
escreval
limpatela
se (np<=30) entao
   escreval("Código do produto: ",cod)
   escreval("Preço atual: R$",np)
   escreval("Desconto: Nenhum")
   escreval("Novo preço: R$",np)

senao
se (np>30) e ( np<=100) entao
   escreval("Código do produto: ",cod)
   escreval("Preço atual: R$",np)
   escreval("Desconto: 10%")
   escreval("Novo preço: R$",np*0.90)


senao
se (np>100) entao
   escreval("Código do produto: ",cod)
   escreval("Preço atual: R$",np)
   escreval("Desconto: 15%")
   escreval("Novo preço: R$",np*0.85)



fimse
fimse
fimse





Fimalgoritmo