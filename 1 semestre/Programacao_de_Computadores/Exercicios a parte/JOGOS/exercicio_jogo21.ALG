Algoritmo "Jogo do 21"

Var
n1,n2: caractere
cont,j1,j2: inteiro
Inicio
escreval("Algoritmo - Jogo do 21")
escreval

escreva("Jogador 1, digite seu nome: ")
leia(n1)
escreva("Jogador 2, digite seu nome: ")
leia(n2)

cont <- 0
j1 <- 0
j2 <- 0

enquanto (cont<21) faca
         escreva("Contador:",cont)
         escreval
         
         escreva(n1,", digite 1 ou 2 para jogar: ")
         leia (j1)
         se (j1>2) ou (j1<=0) entao
            enquanto (j1>2) ou (j1<=0) faca
                     escreval(j1, " não é um número válido!")
                     escreva(n1, ", digite 1 ou 2 para jogar:")
                     leia(j1)
            fimenquanto
         fimse
         escreval
         cont <- cont+j1
         escreva("Contador:",cont)
         escreval
         
         se (cont<21) entao
            escreva(n2,", digite 1 ou 2 para jogar:")
            leia(j2)
            
            se (j2>2) ou (j2<=0) entao
               enquanto (j2>2) e (j2<=0) faca
                        escreval(j2, " não é um número válido!")
                        escreva(n2, ", digite 1 ou 2 para jogar: ")
                        leia(j2)
               fimenquanto
            fimse
            escreval
            cont <- cont + j2
            
            se (cont>=21) entao
               escreva(n1," ganhou!!!")
            fimse
            
         senao
              escreva(n2, " ganhou!!!")
         fimse
fimenquanto
Fimalgoritmo