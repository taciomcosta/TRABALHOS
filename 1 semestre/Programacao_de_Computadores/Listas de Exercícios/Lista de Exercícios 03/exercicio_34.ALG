Algoritmo "Algoritmo - Eleição Presidencial "

Var
cod,c1,c2,c3,c4,b,n,t:inteiro

Inicio
enquanto (1<>0) faca
         limpatela
         escreval("==ELEIÇÕES PRESIDENCIAS==")
         escreval
         //ENTRADA
         escreva("Digite o código do candidato para votar:")
         leia(cod)
         //SAÍDA
         se (cod=0) entao
            escreval("Candidato 1: ",c1," votos")
            escreval("Candidato 2: ",c2," votos")
            escreval("Candidato 3: ",c3," votos")
            escreval("Candidato 4: ",c4," votos")
            escreval("Votos nulos: ",n*100/t:2:1,"% dos votos")
            escreval("Votos em branco: ",b*100/t:2:1,"% dos votos")
            fimalgoritmo
         senao
              t <- t+1
         fimse
         //PROCESSAMENTO
         se (cod=1) entao
            c1 <- c1 +1
         fimse
         se (cod=2) entao
            c2 <- c2 +1
         fimse
         se (cod=3) entao
            c3 <- c3 +1
         fimse
         se (cod=4) entao
            c4 <- c4 +1
         fimse
         se (cod=5) entao
            n <- n +1
         fimse
         se (cod=6) entao
            b <- b +1
         fimse
fimenquanto


Fimalgoritmo