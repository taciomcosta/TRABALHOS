Algoritmo "Exerc�cio 15"

Var
sal,c1,c2: real


Inicio
escreval("Algoritmo - Contas com multas")
escreval

//ENTRADA
escreva("Digite o seu sal�rio: ")
leia(sal)
escreva("Digite o valor da primeira conta: ")
leia(c1)
escreva("Digite o valor da segunda conta: ")
leia(c2)

//PROCESSAMENTO
c1 <- c1*1.02
c2 <- c2*1.02
sal <- sal - c1 - c2

//SA�DA
escreval
escreva("O seu sal�rio final ser�: R#",sal:7:2)



Fimalgoritmo