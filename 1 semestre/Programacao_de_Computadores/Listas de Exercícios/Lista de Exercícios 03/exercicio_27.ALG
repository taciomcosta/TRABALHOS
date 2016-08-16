Algoritmo "Pesquisa de audiência"

Var
nc,cont,pt,i:inteiro
p,c:vetor [1..10] de inteiro
Inicio
escreva("Insira o número de canais: ")
leia(nc)
limpatela
i <- 1
para i de 1 ate nc passo 1 faca
         escreva("Digite o número do",i,"° canal: ")
         leia(c[i])
         se (c[i]=0) entao
            i <- 1
            limpatela
            para i de 1 ate nc passo 1 faca
              escreval("Pessoas que assistem ao canal",c[i],":",p[i]*100/pt)
              fimpara
            fimalgoritmo
         fimse
         escreva("Digite o número de pessoas que estavam assistindo: ")
         leia(p[i])
         pt <- pt + p[i]
         limpatela
fimpara

//SAIDA
i <- 1
limpatela
para i de 1 ate nc passo 1 faca
     escreval("Pessoas que assistem ao canal",c[i],":",p[i]*100/pt, "%")
fimpara




Fimalgoritmo