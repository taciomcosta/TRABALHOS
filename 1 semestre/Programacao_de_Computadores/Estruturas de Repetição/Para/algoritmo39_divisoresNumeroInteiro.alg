algoritmo "Algoritmo - divisores de um inteiro positivo"

var
i,x: inteiro
inicio
escreval("Algoritmo - divisores de um inteiro positivo")
escreval
i <- 0
x <- 0
enquanto (x<=0) faca
escreva("Digite um n�mero inteiro positivo: ")
leia(x)
se (x<=0) entao
   escreval(x," n�o � um inteiro positivo!")
   escreval
fimse
fimenquanto
//SA�DA
escreval("Divisores de",x,":")
para i de 1 ate x passo 1 faca
     se (x%i=0) entao
        escreval(i)
     fimse
fimpara
fimalgoritmo
