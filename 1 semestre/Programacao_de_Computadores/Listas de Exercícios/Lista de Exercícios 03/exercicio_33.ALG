Algoritmo "Menu de Op��es"

Var
o,p1,p2,p3,enter:inteiro
n1,n2,n3,media:real

Inicio
enquanto (o<>3) faca
         limpatela
         escreval("1 - M�dia aritm�tica")
         escreval("2 - M�dia ponderada")
         escreval("3 - Sair do programa")
         escreval
         //ENTRADA
         escreva("Digite o valor da op��o desejada: ")
         leia(o)
         //PROCESASAMENTO
         escolha o
                 caso 1 //M�DIA ARITM�TICA
                      limpatela
                      escreva("Insira o valor da 1� nota: ")
                      leia(n1)
                      escreva("Insira o valor da 2� nota: ")
                      leia(n2)
                      media <- (n1+n2)/2
                      escreval
                      escreval("M�dia aritm�tica = ",media:2:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 2       //M�DIA PONDERADA
                      limpatela
                      escreva("Insira o valor da 1� nota: ")
                      leia(n1)
                      escreva("Insira o peso da 1� nota: ")
                      leia(p1)
                      escreval
                      escreva("Insira o valor da 2� nota: ")
                      leia(n2)
                      escreva("Insira o peso da 2� nota: ")
                      leia(p2)
                      escreval
                      escreva("Insira o valor da 3� nota: ")
                      leia(n3)
                      escreva("Insira o peso da 3� nota: ")
                      leia(p3)
                      media <- (n1*p1+n2*p2+n3*p3)/(p1+p2+p3)
                      escreval
                      escreval("M�dia ponderada = ",media:2:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 3
                      fimalgoritmo
         fimescolha
fimenquanto


Fimalgoritmo