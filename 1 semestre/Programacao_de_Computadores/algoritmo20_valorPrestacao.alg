algoritmo "Algoritmo - Presta��o"

var
sal,pres:real
inicio
escreval("Algoritmo - Presta��o")
escreval
escreva("Digite o valor do sal�rio bruto: ")
leia(sal)
escreva ("Digite o valor da presta��o: ")
leia(pres)
escreval

se (pres>sal*0.3) entao
   escreval("N�o � poss�vel conceder o empr�stimo!")
   escreval("Valor da presta��o equivale a R$",(pres*100)/sal,"% de R$",sal)
   escreva("Limite m�ximo de presta��o: R$",sal*0.30)
   senao
   escreva("� poss�vel conceder o empr�stimo! Valor da presta��o n�o ultrapassa 30% de R$",sal)
fimse
escreval

fimalgoritmo
