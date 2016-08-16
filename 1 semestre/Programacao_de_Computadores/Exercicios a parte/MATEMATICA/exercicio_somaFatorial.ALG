Algoritmo "Exercício"

Var

ax,n,ee,i,j: real

Inicio
//ENTRADA
escreva("Digite o valor de N: ")
leia(n)

//PROCESSAMENTO
i <- 1
j <- 1
ee <- 1
ax <- 1
enquanto (ax <= n) faca
         i <- ax
         j <- ax
         ax <- ax + 1
         enquanto (i>1) faca
                  j <- j*(i-1)
                  i <- i-1
         fimenquanto
         ee <- ee + (1/j)
fimenquanto
//SAÍDA
escreva("Soma de 1 + 1/1! + 1/2! + 1/3! ... + 1/",n, " = ",ee)

Fimalgoritmo