algoritmo "Algoritmo - Prestação"

var
sal,pres:real
inicio
escreval("Algoritmo - Prestação")
escreval
escreva("Digite o valor do salário bruto: ")
leia(sal)
escreva ("Digite o valor da prestação: ")
leia(pres)
escreval

se (pres>sal*0.3) entao
   escreval("Não é possível conceder o empréstimo!")
   escreval("Valor da prestação equivale a R$",(pres*100)/sal,"% de R$",sal)
   escreva("Limite máximo de prestação: R$",sal*0.30)
   senao
   escreva("É possível conceder o empréstimo! Valor da prestação não ultrapassa 30% de R$",sal)
fimse
escreval

fimalgoritmo
