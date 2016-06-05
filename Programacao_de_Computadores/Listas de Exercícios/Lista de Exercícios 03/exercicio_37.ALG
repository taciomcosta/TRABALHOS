Algoritmo "Menu de Opções"

Var
o,enter:inteiro
n1,n2:real

Inicio
enquanto (o<>5) faca
         limpatela
         escreval("1 - Soma")
         escreval("2 - Subtração")
         escreval("3 - Multiplicação")
         escreval("4 - Divisão")
         escreval("5 - Sair")
         escreval
         //ENTRADA
         escreva("Digite o valor da opção desejada: ")
         leia(o)
         //PROCESASAMENTO
         escolha o
                 caso 1
                      limpatela
                      escreva("Digite o 1° número:")
                      leia(n1)
                      escreva("Digite o 2° número:")
                      leia(n2)
                      escreval
                      escreva("Soma = ",n1+n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 2
                      limpatela
                      escreva("Digite o 1° número:")
                      leia(n1)
                      escreva("Digite o 2° número:")
                      leia(n2)
                      escreval
                      escreva("Subtração = ",n1-n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 3
                      limpatela
                      escreva("Digite o 1° número:")
                      leia(n1)
                      escreva("Digite o 2° número:")
                      leia(n2)
                      escreval
                      escreva("Multiplicação = ",n1*n2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 4
                      limpatela
                      escreva("Digite o 1° número:")
                      leia(n1)
                      escreva("Digite o 2° número:")
                      leia(n2)
                      escreval
                      escreva("Divisão = ",n1/n2:7:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 5
                      fimalgoritmo
         fimescolha
fimenquanto


Fimalgoritmo