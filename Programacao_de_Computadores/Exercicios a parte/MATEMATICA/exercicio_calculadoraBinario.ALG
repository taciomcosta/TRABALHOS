<<<<<<< HEAD
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
enquanto (x>2) faca
se (x%2=1) entao
x<- (x-1)/2
b[i] <- 1
senao
x<- x/2
b[i] <- 0
fimse
i<-i+1
fimenquanto
se(x=2) entao
x <- x/2
fimse
y <- 1
z <-i
se (num>=25) entao
i <- i-1
fimse



  escreva(num," em binários é ",x)

  enquanto (y<=z) faca
  escreva(b[i])
               i <- i-1
               y <- y +1
  se (i=0) entao
  fimalgoritmo
  fimse
  
  fimenquanto
  
  

  




Fimalgoritmo

fimse