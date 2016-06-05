algoritmo "Algoritmo - Números pares e ímpares"

var
num,p,cIp,cont:inteiro
ip:real
inicio
p <- 0
ip <- 0
cIp <- 0
cont <- 0
escreva("Digite um número inteiro: ")
leia(num)
enquanto (num>0) faca
     escreva("Digite um número inteiro: ")
     leia(num)
     se (num>0) entao
        cont <- cont + 1
     fimse
     se (num%2=0) e (num<>0)  entao
        p <- p +1
     senao
          ip <- ip + num
          cIp <- cIp + 1
     fimse
fimenquanto
//saída
escreval
escreval("================================================")
escreval("Foram digitados ",cont," números")
se (cont>0) entao
   escreval("Números pares: ", 100*p/cont, "%")
senao
     escreval("Não foram digitados números pares")
fimse
se (cIP > 0) entao
   escreval("Números ímpares: ", (ip/cIp):4:2)
senao
     escreval("Nenhum número ímpar foi digitado")
fimse
escreval("================================================")
escreval
fimalgoritmo
