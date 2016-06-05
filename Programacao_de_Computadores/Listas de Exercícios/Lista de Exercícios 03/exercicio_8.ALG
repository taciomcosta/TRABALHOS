Algoritmo "Algoritmo - Porcentagem de pessoas em cada faixa etária"

Var
i,x,f1,f2,f3,f4,f5:inteiro

Inicio
i <- 1
f1 <- 0
f2 <- 0
f3 <- 0
f4 <- 0
f5 <- 0

//ENTRADA E PROCESSAMENTO
para i de 1 ate 15 passo 1 faca
     escreva("Pessoa",i,", digite sua idade: ")
     leia(x)
     se (x<=15) entao
        f1 <- f1+1
     senao
          se (x<=30) entao
             f2 <- f2+1
          senao
                  se (x<=45) entao
                     f3 <- f3+1
                  senao
                       se (x<=60) entao
                          f4 <- f4+1
                       senao
                            f5 <- f5+1
                       fimse
                  fimse
          fimse
     fimse
fimpara
//SAÍDA
limpatela
escreval("1° faixa etária:",f1," pessoas(",f1*100/15,"% do total)")
escreval("2° faixa etária:",f2," pessoas")
escreval("3° faixa etária:",f3," pessoas")
escreval("4° faixa etária:",f4," pessoas")
escreval("5° faixa etária:",f5," pessoas(",f5*100/15,"% do total)")



Fimalgoritmo