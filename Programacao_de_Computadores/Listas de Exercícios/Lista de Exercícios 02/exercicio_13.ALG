Algoritmo "Exercício 13"

Var
np: real

Inicio
escreval("Algoritmo - Valor novo do produto")
escreval

//ENTRADA
escreva("Digite o valor atual do produto: ")
leia(np)

//PROCESSAMENTO e SAÍDA
escreval
se (np<=50) entao
   np <- np*1.05
   escreval("Novo preço: R$",np)

senao
se (np>50) e ( np<=100) entao
      np <- np*1.10
   escreval("Novo preço: R$",np)

senao
se (np>100) entao
      np <- np*1.15
   escreval("Novo preço: R$",np)


fimse
fimse
fimse

se (np<=80) entao
   escreval("Classificação: Barato")

senao
se (np>80) e ( np<=120) entao
   escreval("Classificação: Normal")

senao
se (np>120) e ( np<=120) entao
   escreval("Classificação: Caro")

senao
se (np>200) entao
   escreval("Classificação: Muito caro")


fimse
fimse
fimse
fimse





Fimalgoritmo