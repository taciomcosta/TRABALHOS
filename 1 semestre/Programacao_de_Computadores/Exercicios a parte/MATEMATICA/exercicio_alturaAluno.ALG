Algoritmo "Exerc�cio"

Var
   n,ng,nb,i:inteiro
   a,g,b:real

Inicio
   i <- 1
   g <- 0
   b <- 0
   enquanto (i<=10) faca
      escreva("Digite o n�mero e a altura do aluno: ")
      leia(n,a)
      se (a>g) entao
         g <- a
         ng <- n
      fimse
      se (a<b) ou (b=0) entao
         b <- a
         nb <- n
      fimse
      i <- i+1
   fimenquanto

   //SA�DA
   escreval
   escreval("Aluno mais baixo: N�mero: ",nb,", Altura: ",b)
   escreval("Aluno mais alto: N�mero: ",ng,", Altura: ",g)
Fimalgoritmo