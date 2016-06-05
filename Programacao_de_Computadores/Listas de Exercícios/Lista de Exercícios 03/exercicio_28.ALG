Algoritmo "Pesquisa de salário e filhos "

Var
nf,cont,inf150:inteiro
sal,medSal,medF,sM:real
Inicio
cont <- 0
sM <- 0
enquanto (1<>0) faca
         limpatela
         escreval("Pesquisa de salário e filhos ")
         escreval
         escreva("Digite o salário: ")
         leia(sal)
         se (sal>sM) entao
            sM <- sal
         fimse
         
         se (sal<0) entao
            medSal <- medSal/cont
            medF <- medF/cont
            limpatela
            escreval("Média do salário: R$",medSal)
            escreval("Média do número de filhos:",medF)
            escreval("Maior salário: R$",sM)
            escreval("Pessoas com salário menor que R$150,00: ",inf150*100/cont,"%")
            fimalgoritmo
         fimse
         escreva("Digite o número de filhos: ")
         leia(nf)
         cont <- cont+1
         medSal <- medSal + sal
         medF <- medF + nf
         se (sal<150) entao
            inf150 <- inf150 + 1
         fimse
fimenquanto

Fimalgoritmo