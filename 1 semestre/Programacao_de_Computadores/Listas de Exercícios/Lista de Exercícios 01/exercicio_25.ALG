Algoritmo "Exerc�cio 25"

Var
h,m,s: inteiro

Inicio
escreval("Algoritmo - Convers�o do tempo")
escreval

//ENTRADA
escreva("Digite as horas: ")
leia(h)
escreva("Digite os minutos: ")
leia(m)
//PROCESSAMENTO
h <- h*60
m <- m+h
s <- m*60

//SA�DA
escreval
escreval
escreval(h/60," horas equivale a ",h," minutos")
escreval ("O total de minutos �: ",m)
escreval("O tempo total em segundos �: ",s)




Fimalgoritmo