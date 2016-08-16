Algoritmo "Algoritmo - Calculadora com PROCEDIMENTO"

Var
a,b,total:real
i:inteiro

//ENTRADA
procedimento ENTRADA
inicio
             escreva("Digite o 1° valor: ")
             leia(a)
             escreva("Digite o 2° valor: ")
             leia(b)
fimprocedimento

//SAÍDA
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

//SUBTRAÇÃO
procedimento SUBTRACAO
inicio
ENTRADA
total <- a-b
SAIDA
fimprocedimento

//MULTIPLICAÇÃO
procedimento MULTIPLICACAO
inicio
ENTRADA
total <- a*b
SAIDA
fimprocedimento

//DIVISÃO
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
         escreval("Opções")
         escreval("1 - Adição")
         escreval("2 - Subtração")
         escreval("3 - Multiplicação")
         escreval("4 - Divisão")
         escreval("5 - Sair")
         escreva("Digite o valor da opção desejada:")
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