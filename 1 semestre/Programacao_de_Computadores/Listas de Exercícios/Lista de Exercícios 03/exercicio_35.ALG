Algoritmo "Algoritmo - Soma de positivos e negativos"

Var
n,p,i:inteiro

Inicio
enquanto (1<>0) faca
         limpatela
         escreva("Digite um n�mero inteiro: ")
         leia(i)
         se (i=0) entao
            escreval("Soma dos n�meros positivos: ",p)
            escreval("Soma dos n�meros negativos: ",n)
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