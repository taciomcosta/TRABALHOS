algoritmo "nome"

var
ant,prox,atual,n,i
inicio
escreval("Algoritmo - S�rie de Fibonacci")
escreval
escreva("Digite o n�mero de termos da s�rie: ")
leia(n)
escreval("S�rie:  " ,n)
//PROCESSAMENTO
ant <- 0
atual <- 1
para i de 1 ate n passo 1 faca
     escreval(atual)
     prox <- ant + atual
     ant <- atual
     atual <- prox
fimpara
fimalgoritmo
