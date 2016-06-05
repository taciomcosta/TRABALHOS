Algoritmo "Algoritmo - Peso e idade"

Var
p,i,j,sup90:inteiro
mId:real
Inicio
escreval("Algoritmo - Peso e idade")
escreval
j <- 1
sup90 <- 0
mId <- 0
para j de 1 ate 7 passo 1 faca
     escreva("Pessoa",j,", digite seu peso: ")
     leia(p)
     escreva("Digite sua idade: ")
     leia(i)
     se (p>90) entao
        sup90 <- sup90 + 1
     fimse
     mId <- mId + i
     limpatela
fimpara
mId <- mId/7

//SAÍDA
limpatela
escreval("Pessoas com peso superior a 90Kg: ",sup90)
escreval("Média das idades: ",mId)

Fimalgoritmo