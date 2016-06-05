algoritmo "Algoritmo - divisores de um inteiro positivo"

var
i,x,ac: inteiro
inicio
escreval("Algoritmo - divisores de um inteiro positivo")
escreval
i <- 1
x <- 0
ac <- 0
enquanto (x<=0) faca
escreva("Digite um número inteiro positivo: ")
leia(x)
se (x<=0) entao
   escreval(x," não é um inteiro positivo!")
   escreval
fimse
fimenquanto
//SAÍDA
para i de 1 ate x passo 1 faca
     se (x%i=0) e (x<>i) entao
        ac <- ac +i
     fimse
fimpara
se (x=ac) entao
   escreval
   escreva(x, " é um número perfeito")
senao
   escreval
   escreva(x, " NÃO é um número perfeito")
fimse
fimalgoritmo
