Algoritmo "Pesquisa de sal�rio e filhos "

Var
nf,cont,inf150:inteiro
sal,medSal,medF,sM:real
Inicio
cont <- 0
sM <- 0
enquanto (1<>0) faca
         limpatela
         escreval("Pesquisa de sal�rio e filhos ")
         escreval
         escreva("Digite o sal�rio: ")
         leia(sal)
         se (sal>sM) entao
            sM <- sal
         fimse
         
         se (sal<0) entao
            medSal <- medSal/cont
            medF <- medF/cont
            limpatela
            escreval("M�dia do sal�rio: R$",medSal)
            escreval("M�dia do n�mero de filhos:",medF)
            escreval("Maior sal�rio: R$",sM)
            escreval("Pessoas com sal�rio menor que R$150,00: ",inf150*100/cont,"%")
            fimalgoritmo
         fimse
         escreva("Digite o n�mero de filhos: ")
         leia(nf)
         cont <- cont+1
         medSal <- medSal + sal
         medF <- medF + nf
         se (sal<150) entao
            inf150 <- inf150 + 1
         fimse
fimenquanto

Fimalgoritmo