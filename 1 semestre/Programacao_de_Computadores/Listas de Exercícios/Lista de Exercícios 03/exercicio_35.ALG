Algoritmo "Algoritmo - Soma de positivos e negativos"

Var
n,p,i:inteiro

Inicio
enquanto (1<>0) faca
         limpatela
         escreva("Digite um número inteiro: ")
         leia(i)
         se (i=0) entao
            escreval("Soma dos números positivos: ",p)
            escreval("Soma dos números negativos: ",n)
            escreval("Soma total: ",p+n)
            fimalgoritmo
         senao
              se (i>0) entao
                 p <- p + i
              senao
                   n <- n + i
              fimse
         fimse
fimenquanto


Fimalgoritmo