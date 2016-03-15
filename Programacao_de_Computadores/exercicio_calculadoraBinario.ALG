<<<<<<< HEAD
Algoritmo "Calculadora bin·rio"
=======
Algoritmo "Calculadora bin√°rio"
>>>>>>> fb3fd2def3ac41a2754139e9ac6310fe78fed004

Var
y,i,z:inteiro
b: vetor [1..11] de inteiro
x,num:real



Inicio
escreval("Algoritmo - Calculadora de bin√°rios")
escreval
<<<<<<< HEAD
escreva("Digite um n˙mero: ")
=======
escreva("Digite um n√∫mero: ")
>>>>>>> fb3fd2def3ac41a2754139e9ac6310fe78fed004
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

<<<<<<< HEAD
  escreva(num," em bin·rios È ",x%2)
=======
  escreva(num," em bin√°rios √© ",x%2)
>>>>>>> fb3fd2def3ac41a2754139e9ac6310fe78fed004
  enquanto (y+1>i) faca
  escreva(b[i])
               i <- i+1
  fimenquanto
  




Fimalgoritmo
