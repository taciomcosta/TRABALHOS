Algoritmo "Algoritmo - Investimentos Mensais"

Var
cod,tC,enter:inteiro
v,ti,tj,rm:real

Inicio
enquanto (1=1) faca
         limpatela
         escreva("Digite o código do cliente: ")
         leia(cod)
         se (cod=0) entao
            escreval("Total investido: R$",ti:7:2)
            escreval("Total de juros pago:",tj:2:1,"%")
            fimalgoritmo
         fimse
         escreva("Digite o tipo de conta: ")
         leia(tC)
         escreva("Digite o valor investido: ")
         leia(v)
         se (tC=1) entao
            rm <- v*0.015
            tj <- tj + 1.5
            ti <- ti + v
            escreval("-------------------------")
            escreva("Rendimento mensal de 1,5%: ",rm:4:2)
            escreval
            escreva("Pressione ENTER para continuar ")
            leia(enter)
         fimse
         se (tC=2) entao
            rm <- v*0.02
            tj <- tj + 2
            ti <- ti + v
            escreval("-------------------------")
            escreva("Rendimento mensal de 2%: ",rm:4:2)
            escreval
            escreva("Pressione ENTER para continuar ")
            leia(enter)
         fimse
         se (tC=3) entao
            rm <- v*0.04
            tj <- tj + 4
            ti <- ti + v
            escreval("-------------------------")
            escreva("Rendimento mensal de 4%: ",rm:4:2)
            escreval
            escreva("Pressione ENTER para continuar ")
            leia(enter)
         fimse
fimenquanto


Fimalgoritmo