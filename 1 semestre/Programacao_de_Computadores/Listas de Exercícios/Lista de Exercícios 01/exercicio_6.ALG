Algoritmo "Exerc�cio 06"

Var
sfix, venda, sfin, comis: real

Inicio
escreval("Algoritmo - Sal�rio final")
escreval

//ENTRADA
escreva("Digite seu s�lario fixo: ")
leia(sfix)
escreval
escreva("Digite o valor de suas vendas: ")
leia(venda)

//PROCESSAMENTO
comis <- venda*0.04
sfin <- sfix + comis

//SA�DA
escreval
escreval("Comiss�o: R$",comis:7:2)
escreva ("Sal�rio final: R$",sfin:7:2)

Fimalgoritmo