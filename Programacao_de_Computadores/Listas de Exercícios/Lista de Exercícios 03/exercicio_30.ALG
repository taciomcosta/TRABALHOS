Algoritmo "Aumento de 20% nos produtos"
Var
cod,enter,cont:inteiro
p,np,med,medA:real

Inicio
cont <- 0
enquanto (0<>1) faca
         limpatela
         escreval("Algoritmo - Novo Preço")
         escreval
         escreva("Digite o código do produto: ")
         leia(cod)
         se (cod<0) entao
            limpatela
            escreval("Média dos preços (preço atual): R$",med/cont:4:2)
            escreval("Média dos preços (preço com 20% de aumento): R$",medA/cont:4:2)
            fimalgoritmo
         senao
              cont <- cont + 1
         fimse
         escreva("Digite o preço atual do produto: ")
         leia(p)
         np <- p*1.2
         med <- med + p
         medA <- medA + np
         limpatela
         escreval("Código:",cod)
         escreval("Preço atual: R$",p)
         escreval("Novo preço: R$",np," (aumento de 20%)")
         escreval
         escreva("Pressione ENTER para continuar")
         leia(enter)
fimenquanto


Fimalgoritmo