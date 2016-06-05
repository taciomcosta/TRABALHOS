Algoritmo "semnome"

Var
i:inteiro
a:vetor[1..10] de inteiro
b:vetor[1..10] de caractere
acha:logico
res,pes:caractere


Inicio
escreval("Algoritmo - Pesquisa")
escreval

//ENTRADA
i<-1
para i de 1 ate 10 passo 1 faca
     escreva("Digite um nome para o código",i,": ")
     leia(b[i])
     escreval
     a[i] <- i
     i <- i+1
fimpara

//SAÍDA
acha <- falso
res <- "sim"
limpatela
enquanto (res="sim") faca


         escreva("Digite um nome para pesquisar: ")
         leia(pes)
     enquanto (i<=10) e (acha=falso) faca


         se(b[i]=pes) entao
           acha <- verdadeiro
         senao
              i <- i+1
         fimse
         fimenquanto
         
         se(acha=verdadeiro) entao
              escreval("Pesquisa localizada")
              escreval("Código: ",a[i])
              escreval("Nome: ",b[i])
         senao
              escreval(pes," não foi localizado.")
              escreva("Deseja pesquisar novamente?")
              leia(res)
              se (res="sim") entao
                 i <- 1
                 limpatela
              fimse
         fimse
         i <- i+1
fimenquanto





Fimalgoritmo