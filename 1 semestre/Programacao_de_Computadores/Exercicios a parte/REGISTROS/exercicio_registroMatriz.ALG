Algoritmo "Algoritmo - Matriz"
Var
i,l,j,k:inteiro
m:vetor[1..6,1..5] de caractere
aux,dado:caractere


Inicio
//ENTRADA
i <- 1
j <- 1
para i de 1 ate 6 passo 1 faca
     para j de 1 ate 5 passo 1 faca
          escolha j
                  caso 1
                       dado <- "nome"
                  caso 2
                       dado <- "endereço"
                  caso 3
                       dado <- "cep"
                  caso 4
                       dado <- "bairro"
                  caso 5
                       dado <- "tel"
          fimescolha
          escreva("Pessoa ",i,", digite seu ",dado, ":")
          leia(m[i,j])
     fimpara
     limpatela
fimpara

//PROCESSAMENTO
i <- 1
j <-1
enquanto (i<=6) faca
     k <- i+1
     enquanto (k<=6) faca
              se (m[i,j] > m[k,j]) entao
                 para j de 1 ate 5 passo 1 faca
                   aux <- m[i,j]
                   m[i,j] <- m[k,j]
                   m[k,j] <- aux
                 fimpara
                 j <- 1
              fimse
              k <- k+1
     fimenquanto
     i <- i+1
fimenquanto

//SAÍDA
i <- 1
j <- 1
limpatela
para i de 1 ate 6 passo 1 faca
     escreval
     escreval("Pessoa ",i)
     para j de 1 ate 5 passo 1 faca
          escolha j
                  caso 1
                       dado <- "nome"
                  caso 2
                       dado <- "endereço"
                  caso 3
                       dado <- "cep"
                  caso 4
                       dado <- "bairro"
                  caso 5
                       dado <- "tel"
          fimescolha
          escreval(dado,":",m[i,j])
     fimpara
fimpara

Fimalgoritmo