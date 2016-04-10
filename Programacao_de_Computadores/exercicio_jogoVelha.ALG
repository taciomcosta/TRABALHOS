Algoritmo "Jogo da Velha"

Var
n1,n2: caractere
a1,a2,a3,b1,b2,b3,c1,c2,c3:caractere
j1,j2:caractere
x1,y1:caractere
res: caractere
x,y: inteiro
cont: inteiro



Inicio
//ENTRADA

limpatela
escreval("Jogo da Velha")
escreval
escreval
escreval("Jogador 1, insira seu nome: ")
leia(n1)
escreval
escreva("Jogador 2, insira seu nome: ")
leia(n2)
escreval


//PROCESSAMENTO
a1 <- "A1"
a2 <- "A2"
a3 <- "A3"
b1 <- "B1"
b2 <- "B2"
b3 <- "B3"
c1 <- "C1"
c2 <- "C2"
c3 <- "C3"
cont <- 3
escreval(n1,", deseja ser X ou O?")
leia(j1)
se (j1="X") entao
   j2 <- "O"
   senao
   j2 <- "X"
fimse
enquanto (((a1<>j1) ou (a2<>j1) ou (a3<>j1)) e ((b1<>j1) ou (b2<>j1) ou (b3<>j1)) e ((c1<>j1) ou (c2<>j1) ou (c3<>j1)) e ((a1<>j1) ou (b1<>j1) ou (c1<>j1)) e ((a2<>j1) ou (b2<>j1) ou (c2<>j1)) e ((a3<>j1) ou (b3<>j1) ou (c3<>j1)) e ((a1<>j1) ou (b2<>j1) ou (c3<>j1)) e ((a3<>j1) ou (b2<>j1) ou (c1<>j1))) e ((a1<>j2) ou (a2<>j2) ou (a3<>j2)) e ((b1<>j2) ou (b2<>j2) ou (b3<>j2)) e ((c1<>j2) ou (c2<>j2) ou (c3<>j2)) e ((a1<>j2) ou (b1<>j2) ou (c1<>j2)) e ((a2<>j2) ou (b2<>j2) ou (c2<>j2)) e ((a3<>j2) ou (b3<>j2) ou (c3<>j2)) e ((a1<>j2) ou (b2<>j2) ou (c3<>j2)) e ((a3<>j2) ou (b2<>j2) ou (c1<>j2)) faca
         se (cont=12) entao
                  limpatela
                  escreval("Jogo da Velha")
                  escreval
                  escreval
                  escreval("_",a1,"_|_",a2,"_|_",a3,"_")
                  escreval("_",b1,"_|_",b2,"_|_",b3,"_")
                  escreval("_",c1,"_|_",c2,"_|_",c3,"_")
                  escreval
                  escreva("Deu Velha!")
                  Fimalgoritmo
                  fimse
         se (cont%2=1) entao
            limpatela
            escreval("Jogo da Velha")
            escreval
            escreval
            escreval("_",a1,"_|_",a2,"_|_",a3,"_")
            escreval("_",b1,"_|_",b2,"_|_",b3,"_")
            escreval("_",c1,"_|_",c2,"_|_",c3,"_")
            escreval
            escreval(n1, ", é a sua vez. Digite o valor onde deseja jogar:")
            leia(x1)
         se (x1="a1") entao
            x <- 11
            senao
            se (x1="a2") entao
               x <- 12
               senao
               se (x1="a3") entao
                  x <- 13
                  senao
               se (x1="b1") entao
                  x <- 21
                  senao
                  se (x1="b2") entao
                     x <- 22
                     senao
                     se (x1="b3") entao
                        x <- 23
                        senao
                        se (x1="c1") entao
                           x <- 31
                           senao
                           se (x1="c2") entao
                              x <- 32
                              senao
                              se (x1="c3") entao
                              x <- 33
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
       fimse

       escolha x
               caso 11
               a1 <- j1
               caso 12
               a2 <- j1
               caso 13
               a3 <- j1
               caso 21
               b1 <- j1
               caso 22
               b2 <- j1
               caso 23
               b3 <- j1
               caso 31
               c1 <- j1
               caso 32
               c2 <- j1
               caso 33
               c3 <- j1
       fimescolha
       cont <- cont + 1
       senao
            limpatela
            escreval("Jogo da Velha")
            escreval
            escreval
            escreval("_",a1,"_|_",a2,"_|_",a3,"_")
            escreval("_",b1,"_|_",b2,"_|_",b3,"_")
            escreval("_",c1,"_|_",c2,"_|_",c3,"_")
            escreval
            escreval(n2, ", é a sua vez. Digite o valor onde deseja jogar:")
            leia(y1)
            se (y1="a1") entao
               y <- 11
               senao
                    se (y1="a2") entao
                    y <- 12
                    senao
                         se (y1="a3") entao
                            y <- 13
                            senao
                            se (y1="b1") entao
                               y <- 21
                               senao
                               se (y1="b2") entao
                                  y <- 22
                                  senao
                                  se (y1="b3") entao
                                     y <- 23
                                     senao
                                     se (y1="c1") entao
                                        y <- 31
                                        senao
                                        se (y1="c2") entao
                                           y <- 32
                                           senao
                                           se (y1="c3") entao
                                              y <- 33
                                           fimse
                                        fimse
                                     fimse
                                  fimse
                               fimse
                            fimse
                         fimse
                    fimse
               fimse

               escolha y
                       caso 11
                            a1 <- j2
                       caso 12
                            a2 <- j2
                       caso 13
                            a3 <- j2
                       caso 21
                            b1 <- j2
                       caso 22
                            b2 <- j2
                       caso 23
                            b3 <- j2
                       caso 31
                            c1 <- j2
                       caso 32
                            c2 <- j2
                       caso 33
                            c3 <- j2
               fimescolha
               cont <- cont + 1
         fimse
fimenquanto

limpatela
escreval("Jogo da Velha")
escreval
escreval

escreval("_",a1,"_|_",a2,"_|_",a3,"_")
escreval("_",b1,"_|_",b2,"_|_",b3,"_")
escreval("_",c1,"_|_",c2,"_|_",c3,"_")
escreval

se (cont%2=1) entao
   escreval
   escreva(n2," é o vencedor!!!")
   senao
        escreva(n1," é o vencedor!!!")
fimse
escreval

Fimalgoritmo