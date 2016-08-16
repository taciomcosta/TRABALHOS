Algoritmo "Exercícios"

Var
s,at,i,a96:real
Inicio
leia(at)
i <- 1
s <- 1000
a96 <- 1996
enquanto (a96<=at) faca
         s<-(0.015*i*s)+s
         i<-i*2
         a96 <- a96+1
fimenquanto

escreva("Salário atual: R$",s:7:2)



Fimalgoritmo