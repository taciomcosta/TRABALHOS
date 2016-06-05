Algoritmo "Algoritmo - grupo de valores"

Var
   i:inteiro
   a1,b1,c1,d1:inteiro
   a2,b2,c2,d2:inteiro
   a3,b3,c3,d3:inteiro
   a4,b4,c4,d4:inteiro
   aux:inteiro

Inicio
      escreval("Algoritmo - grupo de valores")
   escreval("Grupo 1")
   escreva("Digite um valor para A: ")
   leia(a1)
   escreva("Digite um valor para B: ")
   leia(b1)
   escreva("Digite um valor para C: ")
   leia(c1)
   escreva("Digite um valor para D: ")
   leia(d1)

   escreval("Grupo 2")
   escreva("Digite um valor para A: ")
   leia(a2)
   escreva("Digite um valor para B: ")
   leia(b2)
   escreva("Digite um valor para C: ")
   leia(c2)
   escreva("Digite um valor para D: ")
   leia(d2)

   escreval("Grupo 3")
   escreva("Digite um valor para A: ")
   leia(a3)
   escreva("Digite um valor para B: ")
   leia(b3)
   escreva("Digite um valor para C: ")
   leia(c3)
   escreva("Digite um valor para D: ")
   leia(d3)

   escreval("Grupo 4")
   escreva("Digite um valor para A: ")
   leia(a4)
   escreva("Digite um valor para B: ")
   leia(b4)
   escreva("Digite um valor para C: ")
   leia(c4)
   escreva("Digite um valor para D: ")
   leia(d4)

   //SAÍDA
   //ORDEM NORMAL
   limpatela
   escreval
   escreval("==ORDEM NORMAL==")
   para i de 1 ate 4 passo 1 faca
        escreval("----------------------")
      escreval("Grupo",i)
      se (i=1) entao
         escreval(a1)
         escreval(b1)
         escreval(c1)
         escreval(d1)
      fimse
      se (i=2) entao
         escreval(a2)
         escreval(b2)
         escreval(c2)
         escreval(d2)
      fimse
      se (i=3) entao
         escreval(a3)
         escreval(b3)
         escreval(c3)
         escreval(d3)
      fimse
      se (i=4) entao
         escreval(a4)
         escreval(b4)
         escreval(c4)
         escreval(d4)
      fimse
   fimpara
   //ORDEM CRESCENTE
   escreval
   escreval("==ORDEM CRESCENTE==")
   i <- 1

   se (a1>b1) entao
      aux <- a1
      a1 <- b1
      b1 <- a1
   fimse
   se (a1>c1) entao
      aux <- a1
      a1 <- c1
      c1 <- a1
   fimse
   se (a1>d1) entao
      aux <- a1
      a1 <- d1
      d1 <- a1
   fimse
   se (b1>c1) entao
      aux <- b1
      b1 <- c1
      c1 <- aux
   fimse
   se (b1>d1) entao
      aux <- b1
      b1 <- d1
      d1 <- aux
   fimse
   se (c1>d1) entao
      aux <- c1
      c1 <- d1
      d1 <- aux
   fimse
   escreval("Grupo 1")
   escreval(a1)
   escreval(b1)
   escreval(c1)
   escreval(d1)
   se (a2>b2) entao
      aux <- a2
      a2 <- b2
      b2 <- a2
   fimse
   se (a2>c2) entao
      aux <- a2
      a2 <- c2
      c2 <- a2
   fimse
   se (a2>d2) entao
      aux <- a2
      a2 <- d2
      d2 <- a2
   fimse
   se (b2>c2) entao
      aux <- b2
      b2 <- c2
      c2 <- aux
   fimse
   se (b2>d2) entao
      aux <- b2
      b2 <- d2
      d2 <- aux
   fimse
   se (c2>d2) entao
      aux <- c2
      c2 <- d2
      d2 <- aux
   fimse
   escreval("----------------------")
   escreval("Grupo 2")
   escreval(a2)
   escreval(b2)
   escreval(c2)
   escreval(d2)
   se (a3>b3) entao
      aux <- a3
      a3 <- b3
      b3 <- a3
   fimse
   se (a3>c3) entao
      aux <- a3
      a3 <- c3
      c3 <- a3
   fimse
   se (a3>d3) entao
      aux <- a3
      a3 <- d3
      d3 <- a3
   fimse
   se (b3>c3) entao
      aux <- b3
      b3 <- c3
      c3 <- aux
   fimse
   se (b3>d3) entao
      aux <- b3
      b3 <- d3
      d3 <- aux
   fimse
   se (c3>d3) entao
      aux <- c3
      c3 <- d3
      d3 <- aux
   fimse
   escreval("----------------------")
   escreval("Grupo 3")
   escreval(a3)
   escreval(b3)
   escreval(c3)
   escreval(d3)
   
   se (a4>b4) entao
      aux <- a4
      a4 <- b4
      b4 <- a4
   fimse
   se (a4>c4) entao
      aux <- a4
      a4 <- c4
      c4 <- a4
   fimse
   se (a4>d4) entao
      aux <- a4
      a4 <- d4
      d4 <- a4
   fimse
   se (b4>c4) entao
      aux <- b4
      b4 <- c4
      c4 <- aux
   fimse
   se (b4>d4) entao
      aux <- b4
      b4 <- d4
      d4 <- aux
   fimse
   se (c4>d4) entao
      aux <- c4
      c4 <- d4
      d4 <- aux
   fimse
   escreval("----------------------")
   escreval("Grupo 4")
   escreval(a4)
   escreval(b4)
   escreval(c4)
   escreval(d4)
//ORDEM DECRESCENTE
escreval
escreval("==ORDEM DECRESCENTE==")
escreval("Grupo 1")
escreval(d1)
escreval(c1)
escreval(b1)
escreval(a1)
escreval("----------------------")
escreval("Grupo 2")
escreval(d2)
escreval(c2)
escreval(b2)
escreval(a2)
escreval("----------------------")
escreval("Grupo 3")
escreval(d3)
escreval(c3)
escreval(b3)
escreval(a3)
escreval("----------------------")
escreval("Grupo 4")
escreval(d4)
escreval(c4)
escreval(b4)
escreval(a4)





Fimalgoritmo