Algoritmo "Algoritmo - Grupo de números"

Var
i,g2:real
g1,g3,g4,cont,contP:inteiro
Inicio
enquanto (0<>1) faca
         limpatela
         escreval("Digite 999.999.999 sem '.' para encerrar")
         escreva("Insira um número: ")
         leia(i)
         se (i=999999999) entao
            limpatela
            escreval("Foram digitados ",g1," números menores que 35")
            escreval("Média dos números positivos digitados: ",g2/contP:4:1)
            escreval("Números entre 50 e 100: ",g3*100/cont,"%")
            escreval("Números entre 10 e 20: ",g4*100/cont,"%")
            fimalgoritmo
         senao
              cont <- cont + 1
         fimse
         se (i<35) entao
            g1 <- g1 + 1
         fimse
         se (i>0) entao
            g2 <- g2 + i
            contP <- contP + 1
         fimse
         se (i>=50) e (i<100) entao
            g3 <- g3 + 1
         fimse
         se (i>=10) e (i<20) entao
            g4 <- g4 + 1
         fimse
fimenquanto


Fimalgoritmo