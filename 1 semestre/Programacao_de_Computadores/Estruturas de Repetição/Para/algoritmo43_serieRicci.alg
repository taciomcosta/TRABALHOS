algoritmo "Algoritmo - S�rie de Ricci"

var
n,n1,n2,i,ant,prox,atual:inteiro
inicio
escreval("Algoritmo - S�rie de Ricci")
escreval
escreva("Digite o n�mero da s�rie: ")
leia(n)
escreva("Digite o 1� termo: ")
leia(n1)
escreva("Digite o 2� termo: ")
leia(n2)

//PROCESSAMENTO
ant <- 0
atual <- 1
escreval(n1)
escreval(n2)
para i de 3 ate n passo 1 faca //J� IMPRIMIU 2 TERMOS, POR ISSO i -> 3 ate 10
     prox <- n1+n2
     escreval(prox)
     n1 <- n2
     n2 <- prox
fimpara
fimalgoritmo
