Algoritmo "Soma ate 1\n"

Var
n,i:inteiro
h:real


Inicio
escreval("Algoritmo - Soma dos números 1 + 1/2 + 1/3 .. 1/n")
escreval
//ENTRADA
escreva("Insira um valor para N: ")
leia(n)

//PROCESSAMENTO
h <- 0
i <- 1
escreval
escreva("Soma = 1")
para i de 1 ate n passo 1 faca
     h <- h + (1/i)
     se (i<>1) entao
        escreva(" + 1 /",i)
     fimse
fimpara

//SAÍDA
escreval
escreva("Soma = ",h:1:2)
escreval
Fimalgoritmo