algoritmo "Algoritmo - Fatorial de v�rios n�meros"

var
i,num,fat:inteiro
inicio

num <- 1
fat <- 1
enquanto (num>0) faca
         escreval("Digite um n�mero inteiro positivo: ")
         leia(num)
         i <- 1
         fat <- 1
         para i de 1 ate num passo 1 faca
              fat <- fat * i
         fimpara
         escreval(num,"! = ",fat)
fimenquanto
fimalgoritmo
