algoritmo "nome"

var
ant,prox,atual,n,i
inicio
escreval("Algoritmo - Série de Fibonacci")
escreval
escreva("Digite o número de termos da série: ")
leia(n)
escreval("Série:  " ,n)
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
