Algoritmo "Algoritmo - Média do peso por faixa etária"
Var
i,p,j,f1,f2,f3,f4:inteiro
p1,p2,p3,p4:real

Inicio
escreval("Algoritmo - Média do peso por faixa etária")
escreval
f1 <- 0
f2 <- 0
f3 <- 0
f4 <- 0
para j de 0 ate 15 passo 5 faca
     limpatela
     escreva("Pessoa",j,", digite sua idade: ")
     leia(i)
     escreva("Digite seu peso: ")
     leia(p)
     se (i<=10) entao
        f1 <- f1 + 1
        p1 <- p1 + p
     senao
          se (i<=20) entao
             f2 <- f2 + 1
             p2 <- p2 + p
          senao
               se (i<=30) entao
                  f3 <- f3 + 1
                  p3 <- p3 + p
               senao
                    f4 <- f4 + 1
                    p4 <- p4 + p
               fimse
          fimse
     fimse
fimpara
se (f1=0) entao
   f1 <- 1
fimse
se (f2=0) entao
   f2 <- 1
fimse
se (f4=0) entao
   f3 <- 1
fimse
se (f4=0) entao
   f4 <- 1
fimse

p1 <- p1/f1
p2 <- p2/f2
p3 <- p3/f3
p4 <- p4/f4

//SAIDA
escreval
escreval("==MÉDIA DOS PESOS==")
escreval
escreval("Pessoas entre 1 e 10 anos: ",p1,"Kg")
escreval("Pessoas entre 11 e 20 anos: ",p2,"Kg")
escreval("Pessoas entre 21 e 30 anos: ",p3,"Kg")
escreval("Pessoas maiores de 31 anos: ",p4,"Kg")

Fimalgoritmo