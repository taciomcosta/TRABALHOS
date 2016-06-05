Algoritmo "Algoritmo - maior e menor valor digitado"
Var
min,max,j:inteiro

Inicio
min <- 0
max <- 0
j <- 1
enquanto (j<>0) faca
         escreva("Digite um valor: ")
         leia(j)
         se (j>max) entao
            max <- j
         fimse
         se ((j<min) ou (min=0)) e (j<>0) entao
            min <- j
         fimse
fimenquanto
//SAÍDA
escreval
escreval("Maior valor digitado: ",max)
escreval("Menor valor digitado: ",min)



Fimalgoritmo