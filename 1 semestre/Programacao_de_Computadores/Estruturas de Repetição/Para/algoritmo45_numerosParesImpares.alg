algoritmo "Algoritmo - N�meros pares e �mpares"

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
     escreva("Digite um n�mero inteiro: ")
     leia(num)
     se (num%2=0) entao
        p <- p +1
     senao
          ip <- ip + num
          cIp <- cIp + 1
     fimse
fimpara
//sa�da
escreval
escreval("================================================")
escreval("N�meros pares: ", 100*p/6, "%")
se (cIP > 0) entao
   escreva("N�meros �mpares: ", ip/cIp)
senao
     escreval("Nenhum n�mero �mpar foi digitado")
fimse
escreval("================================================")
escreval
fimalgoritmo
