Algoritmo "Menu de Op��es"

Var
o,enter:inteiro
n1,n2:real

Inicio
enquanto (o<>5) faca
         limpatela
         escreval("1 - Soma")
         escreval("2 - Subtra��o")
         escreval("3 - Multiplica��o")
         escreval("4 - Divis�o")
         escreval("5 - Sair")
         escreval
         //ENTRADA
         escreva("Digite o valor da op��o desejada: ")
         leia(o)
         //PROCESASAMENTO
         escolha o
                 caso 1
                      limpatela
                      escreva("Digite o 1� n�mero:")
                      leia(n1)
                      escreva("Digite o 2� n�mero:")
                      leia(n2)
                      escreval
                      escreva("Soma = ",n1+n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 2
                      limpatela
                      escreva("Digite o 1� n�mero:")
                      leia(n1)
                      escreva("Digite o 2� n�mero:")
                      leia(n2)
                      escreval
                      escreva("Subtra��o = ",n1-n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 3
                      limpatela
                      escreva("Digite o 1� n�mero:")
                      leia(n1)
                      escreva("Digite o 2� n�mero:")
                      leia(n2)
                      escreval
                      escreva("Multiplica��o = ",n1*n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 4
                      limpatela
                      escreva("Digite o 1� n�mero:")
                      leia(n1)
                      escreva("Digite o 2� n�mero:")
                      leia(n2)
                      escreval
                      escreva("Divis�o = ",n1/n2:7:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 5
                      fimalgoritmo
         fimescolha
fimenquanto


Fimalgoritmo