algoritmo "Algoritmo - N�meros pares e �mpares"

var
num,p,cIp,cont:inteiro
ip:real
inicio
p <- 0
ip <- 0
cIp <- 0
cont <- 0
escreva("Digite um n�mero inteiro: ")
leia(num)
enquanto (num>0) faca
     escreva("Digite um n�mero inteiro: ")
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
//sa�da
escreval
escreval("================================================")
escreval("Foram digitados ",cont," n�meros")
se (cont>0) entao
   escreval("N�meros pares: ", 100*p/cont, "%")
senao
     escreval("N�o foram digitados n�meros pares")
fimse
se (cIP > 0) entao
   escreval("N�meros �mpares: ", (ip/cIp):4:2)
senao
     escreval("Nenhum n�mero �mpar foi digitado")
fimse
escreval("================================================")
escreval
fimalgoritmo
