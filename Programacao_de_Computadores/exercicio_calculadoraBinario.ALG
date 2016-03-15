Algoritmo "semnome"

Var
y,i:inteiro
b: vetor [1..11] de inteiro
x:real



Inicio
escreval("Algoritmo - Calculadora de binários")
escreval
escreva("Digite um número: ")
leia(x)
//PROCESSAMENTO
i <- 1
enquanto (x>=2) faca
se (x%2=1) entao
x<- (x-1)/2
b[i] <- 1
senao
x<- x/2
b[i] <- 0
fimse
i<-i+1
fimenquanto
y <- i
i <-1
//escreva(b[10],b[9],b[8],b[7],b[6],b[5],b[4],b[3],b[2],b[1],x%2)

enquanto (y>i) faca
escreva(b[i])
i <- i+1
fimenquanto
escreva(x%2)


Fimalgoritmo