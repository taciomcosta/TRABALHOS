Algoritmo "Algoritmo - Avalia��o do filme"

Var
n,i,j,qtR,qtB:inteiro
medI:real

Inicio
j <- 1
medI <- 0
qtR <- 0
qtB <- 0
para j de 1 ate 15 passo 1 faca
     limpatela
     escreval("Espectador",j,", qual a sua nota (1/2/3)? ")
     escreval("1 - Regular")
     escreval("2 - Bom")
     escreval("3 - �timo")
     leia(n)
     escreva("Insira sua idade: ")
     leia(i)
     medI <- medI + i
     se (n=1) entao
        qtR <- qtR + 1
     fimse
     se (n=2) entao
        qtB <- qtB + 1
     fimse
fimpara
medI <- medI/15


//SA�DA
limpatela
escreval("M�dia das idades: ",medI:2:1)
escreval("Pessoas que responderam 'regular': ",qtR)
escreval("Pessoas que responderam 'bom': ",qtR*100/15:2:1, "%")


Fimalgoritmo