Algoritmo "Algoritmo - Calculadora com PROCEDIMENTO"

Var
a,b,total:real
i:inteiro

//ENTRADA
procedimento ENTRADA
inicio
             escreva("Digite o 1� valor: ")
             leia(a)
             escreva("Digite o 2� valor: ")
             leia(b)
fimprocedimento

//SA�DA
procedimento SAIDA
inicio
             escreval("Resultado:",total)
fimprocedimento

//SOMA
procedimento SOMA
inicio
ENTRADA
total <- a+b
SAIDA
fimprocedimento

//SUBTRA��O
procedimento SUBTRACAO
inicio
ENTRADA
total <- a-b
SAIDA
fimprocedimento

//MULTIPLICA��O
procedimento MULTIPLICACAO
inicio
ENTRADA
total <- a*b
SAIDA
fimprocedimento

//DIVIS�O
procedimento DIVISAO
inicio
ENTRADA
total <- a/b
SAIDA
fimprocedimento

Inicio
escreval("Algoritmo - Calculadora")
i <- 0
enquanto (i<>5) faca
         escreval
         escreval("Op��es")
         escreval("1 - Adi��o")
         escreval("2 - Subtra��o")
         escreval("3 - Multiplica��o")
         escreval("4 - Divis�o")
         escreval("5 - Sair")
         escreva("Digite o valor da op��o desejada:")
         leia(i)

         escolha i
         caso 1
              SOMA
         caso 2
              SUBTRACAO
         caso 3
              MULTIPLICACAO
         caso 4
              DIVISAO
         caso 5
              fimalgoritmo
         fimescolha
fimenquanto
Fimalgoritmo