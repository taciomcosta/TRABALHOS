algoritmo "Algoritmo - Números pares e ímpares"

var
num,i,p,cIp:inteiro
ip:real
inicio
p <- 0
ip <- 0
cIp <- 0
num <- 0
i <- 1

para i de 1 ate 6 passo 1 faca
     escreva("Digite um número inteiro: ")
     leia(num)
     se (num%2=0) entao
        p <- p +1
     senao
          ip <- ip + num
          cIp <- cIp + 1
     fimse
fimpara
//saída
escreval
escreval("================================================")
escreval("Números pares: ", 100*p/6, "%")
se (cIP > 0) entao
   escreva("Números ímpares: ", ip/cIp)
senao
     escreval("Nenhum número ímpar foi digitado")
fimse
escreval("================================================")
escreval
fimalgoritmo
