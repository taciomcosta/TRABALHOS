Algoritmo "Aumento de 20% nos produtos"
Var
cod,enter,cont:inteiro
p,np,med,medA:real

Inicio
cont <- 0
enquanto (0<>1) faca
         limpatela
         escreval("Algoritmo - Novo Pre�o")
         escreval
         escreva("Digite o c�digo do produto: ")
         leia(cod)
         se (cod<0) entao
            limpatela
            escreval("M�dia dos pre�os (pre�o atual): R$",med/cont:4:2)
            escreval("M�dia dos pre�os (pre�o com 20% de aumento): R$",medA/cont:4:2)
            fimalgoritmo
         senao
              cont <- cont + 1
         fimse
         escreva("Digite o pre�o atual do produto: ")
         leia(p)
         np <- p*1.2
         med <- med + p
         medA <- medA + np
         limpatela
         escreval("C�digo:",cod)
         escreval("Pre�o atual: R$",p)
         escreval("Novo pre�o: R$",np," (aumento de 20%)")
         escreval
         escreva("Pressione ENTER para continuar")
         leia(enter)
fimenquanto


Fimalgoritmo