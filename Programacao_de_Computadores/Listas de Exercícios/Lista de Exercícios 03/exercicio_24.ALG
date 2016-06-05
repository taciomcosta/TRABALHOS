Algoritmo "Algoritmo - Pesquisa de Mercado"

Var
i,h,hn,m,ts,tn:inteiro
s,r:caractere

Inicio
i <- 1
para i de 1 ate 10 passo 1 faca
     escreva("Pessoa",i,", informe seu sexo (M/F): ")
     leia(s)
     escreva("Você gostou do produto? (s/n) ")
     leia(r)
     se (r="s") entao
        ts <- ts +1
        se (s="f") entao
           m <- m+1
        fimse
     fimse
     se (s="m") entao
           h <- h+1
           se (r="n") entao
              hn <- hn +1
           fimse
        fimse
     se (r="n") entao
        tn <- tn+1
     fimse
fimpara

//SAÍDA
limpatela
escreval("Pessoas que responderam SIM: ",ts)
escreval("Pessoas que responderam NÃO: ",tn)
escreval("Mulheres que responderam SIM: ",m)
escreval("Homens que responderam NÃO em relação ao total de homens: ",hn*100/h,"%")


Fimalgoritmo