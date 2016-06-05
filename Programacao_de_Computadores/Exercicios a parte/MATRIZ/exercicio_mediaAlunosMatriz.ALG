Algoritmo "Algoritmo - Soma das notas dos alunos em uma matriz"

Var
i,j,k:inteiro
t,auxm:real
aux:caractere
nome:vetor [1..8] de caractere
media:vetor [1..8,1..5] de real //n1|n2|n3|n4|nf
Inicio
//ENTRADA
para i de 1 ate 8 passo 1 faca
     limpatela
     escreva("Aluno",i,", insira seu nome:")
     leia(nome[i])
     para j de 1 ate 4 passo 1 faca
          escreva(nome[i],", insira sua ",j,"° nota:")
          leia(media[i,j])
     fimpara
fimpara

//PROCESSAMENTO
       //MÉDIA DE CADA ALUNO
i <- 1
j <- 1
para i de 1 ate 8 passo 1 faca
     t <- 0
     para j de 1 ate 4 passo 1 faca
          t <- t+media[i,j]
     fimpara
     media[i,5] <- t/4
fimpara
       //MÉDIA GERAL
i <-1
j <-5
t <-0
para i de 1 ate 8 passo 1 faca
     t <- t+media[i,j]
fimpara
t <- t/4
  //ORGANIZANDO EM ORDEM ALFABÉTICA
i <- 1
j <- 1
k <- 1
para i de 1 ate 8 passo 1 faca
     k <- i+1
     enquanto (k<=8) faca
              //NOME
              se (nome[i]>nome[k]) entao
                 aux <- nome[i]
                 nome[i] <- nome[k]
                 nome[k] <- aux
              //NOTAS DE ACORDO COM OS NOMES
                 para j de 1 ate 5 passo 1 faca
                      auxm <- media[i,j]
                      media[i,j] <- media[k,j]
                      media[k,j] <- auxm
                 fimpara
              fimse
              k <- k+1
     fimenquanto
fimpara

       //CALCULANDO A MÉDIA TOTAL
i <- 1
j <- 5
t <- 0
para i de 1 ate 8 passo 1 faca
     t <- t + media[i,j]
fimpara
t <- t/8

//SAÍDA
i <- 1
j <- 1
limpatela
para i de 1 ate 8 passo 1 faca
     escreval("Aluno",i,": ",nome[i])
     para j de 1 ate 4 passo 1 faca
          escreval("-Nota ",j,": ",media[i,j])
     fimpara
     escreval("Média:",media[i,5])
     escreval
fimpara
escreval
escreva("Média total dos alunos: ",t:2:1)

Fimalgoritmo