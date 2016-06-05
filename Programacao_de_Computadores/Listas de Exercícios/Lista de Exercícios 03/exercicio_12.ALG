Algoritmo "Algoritmo - Idade, peso e altura"

Var
j,i,p,idSup,pesoInf:inteiro
medAlt,a:real
Inicio
j <- 1
idSup <- 0
medAlt <- 0
pesoInf <- 0
para j de 1 ate 25 passo 1 faca
     escreva("Pessoa",j,", digite sua idade: ")
     leia(i)
     escreva("Digite seu peso: ")
     leia(p)
     escreva("Digite sua altura: ")
     leia(a)
     se (i>50) entao
        idSup <- idSup+1
     fimse
     se (i>=10) e (i<20) entao
        medAlt <- a + medAlt
     fimse
     se (p<40) entao
        pesoInf <- pesoInf+1
     fimse
     limpatela
fimpara
medAlt <- medAlt/25

//SAÍDA
limpatela
escreval("Pessoas com idade superior a 50 anos:",idSup)
escreval("Média da altura das pessoas com idade entre 10 e 20 anos:",medAlt:1:2)
escreval("Pessoas com peso infeiror a 40Kg: ",pesoInf*100/25:2,"%")

Fimalgoritmo