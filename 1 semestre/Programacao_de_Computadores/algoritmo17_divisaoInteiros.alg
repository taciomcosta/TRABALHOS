algoritmo "Algoritmo - divis�o de 2 n�meros inteiros"

var
a,b:inteiro
inicio
escreval("Algoritmo - divis�o de 2 n�meros inteiros")
escreval

//ENTRADA
escreva("Digite um n�mero A qualquer:")
leia(a)
escreval
escreva("Digite um n�mero B qualquer:")
leia(b)
escreval

//PROCESSAMENTO e SA�DA
se (b = 0) entao
   escreva("N�o � poss�vel dividir por zero!")
   senao
   se (a%b=0) entao
      escreva(a," � divis�vel por", b)
      senao
      escreva(a," n�o � divis�vel por", b)
   fimse
fimse

fimalgoritmo
