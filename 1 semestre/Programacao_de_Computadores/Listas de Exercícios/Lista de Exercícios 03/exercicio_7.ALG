Algoritmo "Algoritmo - Maiores de 18 anos"

Var
i,x,c:inteiro
Inicio
escreval("Algoritmo - Maiores de 18 anos")
i <- 1
c <- 0
//ENTRADA E PROCESSAMENTO
para i de 1 ate 10 passo 1 faca
     escreva("Pessoa",i,", digite sua idade: ")
     leia(x)
     se (x>=18) entao
        c <- c+1
     fimse
fimpara

//SA�DA
escreval
escreva(c," pessoas s�o maiores de 18 anos")


Fimalgoritmo