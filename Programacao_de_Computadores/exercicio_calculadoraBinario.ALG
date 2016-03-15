Algoritmo "Calculadora binário"

Var
y,i,z:inteiro
b: vetor [1..11] de inteiro
x,num:real



Inicio
escreval("Algoritmo - Calculadora de binários")
escreval
escreva("Digite um número: ")
leia(num)
//PROCESSAMENTO

x <- num
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
z <-0
i <- 1

  escreva(num," em binários é ",x%2)
  enquanto (y+1>i) faca
  escreva(b[i])
               i <- i+1
  fimenquanto
  




Fimalgoritmo
