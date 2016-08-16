Algoritmo "Algoritmo - Parâmetro com FUNÇÃO e PROCEDIMENTO"

//SOMA
funcao SOMA (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a+b
       retorne total
fimfuncao
//SUBTRAÇÃO
funcao SUBTRACAO (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a-b
       retorne total
fimfuncao
//MULTIPLICAÇÃO
funcao MULTIPLICACAO (a,b:inteiro):inteiro
       var
       total:inteiro
       inicio
       total <- a*b
       retorne total
fimfuncao
//DIVISÃO
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
escreval("Algoritmo - Calculadora com FUNÇÃO e PARÂMETROS")
escreval
enquanto (i<>5) faca
         escreval
         escreval
         escreval("Opções:")
         escreval("1 - adição")
         escreval("2 - subtração")
         escreval("3 - multiplicação")
         escreval("4 - divisão")
         escreval("5 - sair")
         escreval
         escreva("Digite o número da opção desejada: ")
         leia(i)

         escolha i
                 caso 1
                      escreva("Digite o 1° valor:")//retorna 'total' para os
                      leia(n1)                     //valores 'n1' e 'n2'
                      escreva("Digite o 2° valor:")
                      leia(n2)
                      escreva("Resultado =",SOMA(n1,n2))
                 caso 2
                      escreva("Digite o 1° valor:")
                      leia(n1)
                      escreva("Digite o 2° valor:")
                      leia(n2)
                      escreva("Resultado =",SUBTRACAO(n1,n2))
                 caso 3
                      escreva("Digite o 1° valor:")
                      leia(n1)
                      escreva("Digite o 2° valor:")
                      leia(n2)
                      escreva("Resultado =",MULTIPLICACAO(n1,n2))
                 caso 4
                      escreva("Digite o 1° valor:")
                      leia(n1)
                      escreva("Digite o 2° valor:")
                      leia(n2)
                      escreva("Resultado =",DIVISAO(n1,n2))
                 caso 5
                      fimalgoritmo
         fimescolha
fimenquanto

Fimalgoritmo