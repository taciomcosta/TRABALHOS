Algoritmo "Algoritmo - Par�metro com FUN��O e PROCEDIMENTO"

//SOMA
funcao SOMA (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a+b
       retorne total
fimfuncao
//SUBTRA��O
funcao SUBTRACAO (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a-b
       retorne total
fimfuncao
//MULTIPLICA��O
funcao MULTIPLICACAO (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a*b
       retorne total
fimfuncao
//DIVIS�O
funcao DIVISAO (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a div b
       retorne total
fimfuncao
Var
i,n1,n2:inteiro

Inicio
escreval("Algoritmo - Calculadora com FUN��O e PAR�METROS")
escreval
enquanto (i<>5) faca
         escreval
         escreval
         escreval("Op��es:")
         escreval("1 - adi��o")
         escreval("2 - subtra��o")
         escreval("3 - multiplica��o")
         escreval("4 - divis�o")
         escreval("5 - sair")
         escreval
         escreva("Digite o n�mero da op��o desejada: ")
         leia(i)

         escolha i
                 caso 1
                      escreva("Digite o 1� valor:")//retorna 'total' para os
                      leia(n1)                     //valores 'n1' e 'n2'
                      escreva("Digite o 2� valor:")
                      leia(n2)
                      escreva("Resultado =",SOMA(n1,n2))
                 caso 2
                      escreva("Digite o 1� valor:")
                      leia(n1)
                      escreva("Digite o 2� valor:")
                      leia(n2)
                      escreva("Resultado =",SUBTRACAO(n1,n2))
                 caso 3
                      escreva("Digite o 1� valor:")
                      leia(n1)
                      escreva("Digite o 2� valor:")
                      leia(n2)
                      escreva("Resultado =",MULTIPLICACAO(n1,n2))
                 caso 4
                      escreva("Digite o 1� valor:")
                      leia(n1)
                      escreva("Digite o 2� valor:")
                      leia(n2)
                      escreva("Resultado =",DIVISAO(n1,n2))
                 caso 5
                      fimalgoritmo
         fimescolha
fimenquanto

Fimalgoritmo