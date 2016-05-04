algoritmo "Algoritmo - divisão de 2 números inteiros"

var
a,b:inteiro
inicio
escreval("Algoritmo - divisão de 2 números inteiros")
escreval

//ENTRADA
escreva("Digite um número A qualquer:")
leia(a)
escreval
escreva("Digite um número B qualquer:")
leia(b)
escreval

//PROCESSAMENTO e SAÍDA
se (b = 0) entao
   escreva("Não é possível dividir por zero!")
   senao
   se (a%b=0) entao
      escreva(a," é divisível por", b)
      senao
      escreva(a," não é divisível por", b)
   fimse
fimse

fimalgoritmo
