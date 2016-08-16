Algoritmo "Algoritmo - Número primo"

Var
i,num,vld:inteiro
looper:caractere


Inicio
escreval("Algoritmo - Número primo")
escreval


//PROCESSAMENTO
looper <- "s"
vld <- 0
enquanto (looper = "s") faca
         escreval
         escreva("Digite um número qualquer: ")
         leia(num)
         escreval
         para i de 1 ate num-1 passo 1 faca
              se(num%i=0) e (i<>1) entao
                 vld <-1
              fimse
         fimpara
         escreval
         se (vld=1) entao
            escreva(num," NÃO é um número primo")
         senao
            escreva(num," é um número primo")
         fimse
         escreval
         escreva("Deseja continuar(s/n)? ")
         leia(looper)
fimenquanto



Fimalgoritmo