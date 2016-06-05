algoritmo "Vários Números - Par ou Ímpar"

var
num,prodI,somaP:inteiro
inicio
escreval("Algoritmo - FLAG!")
somaP <- 0
prodI <- 1
escreva("Digite um número inteiro positivo ou zero para terminar: ")
leia(num)
enquanto (num > 0) faca
         escreva("Digite um número inteiro positivo ou zero para terminar: ")
         leia(num)
         se (num%2=0) entao
            somaP <- somaP + num
         senao
              prodI <- prodI * num
         fimse
fimenquanto
fimalgoritmo
