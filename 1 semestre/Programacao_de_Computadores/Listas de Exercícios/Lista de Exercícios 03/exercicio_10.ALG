Algoritmo "Algoritmo - Soma de 1 + 1\2 + 1\3 ... + 1\n"

Var
i,n:inteiro
soma:real

Inicio
escreval("Algoritmo - Soma de 1 + 1/2 + 1/3 ... + 1/n")
escreval
//ENTRADA
escreva("Digite um número inteiro positivo: ")
leia(n)
//PROCESSAMENTO
i <- 1
para i de 1 ate n passo 1 faca
     soma <- soma + 1/i
fimpara
//SAÍDA
escreva("S = ",soma:4:2)



Fimalgoritmo