Algoritmo "Exercício 06"

Var
sfix, venda, sfin, comis: real

Inicio
escreval("Algoritmo - Salário final")
escreval

//ENTRADA
escreva("Digite seu sálario fixo: ")
leia(sfix)
escreval
escreva("Digite o valor de suas vendas: ")
leia(venda)

//PROCESSAMENTO
comis <- venda*0.04
sfin <- sfix + comis

//SAÍDA
escreval
escreval("Comissão: R$",comis:7:2)
escreva ("Salário final: R$",sfin:7:2)

Fimalgoritmo