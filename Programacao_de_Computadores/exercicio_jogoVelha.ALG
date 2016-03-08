Algoritmo "jogoVelha"

Var
n1,n2: caractere
a1,a2,a3,b1,b2,b3,c1,c2,c3:caractere
j1,j2,j3,j4,j5:caractere
g1,g2,g3,g4:caractere
va1,va2,va3,vb1,vb2,vb3,vc1,vc2,vc3:logico


Inicio
//ENTRADA
escreval("Jogo da véia")
escreval
escreval
escreval("Jogador 1, insira seu nome: ")
leia(n1)
escreval
escreva("Jogador 2, insira seu nome: ")
leia(n2)
escreval
escreval(n1, "você será 'X'")
escreval(n2, "você será 'O'")

//PROCESSAMENTO
a1 <- "a1"
a2 <- "a2"
a3 <- "a3"
b1 <- "b1"
b2 <- "b2"
b3 <- "b3"
c1 <- "c1"
c2 <- "c2"
c3 <- "c3"

va1 <- falso
va2 <- falso
va3 <- falso
vb1 <- falso
vb2 <- falso
vb3 <- falso
vc1 <- falso
vc2 <- falso
vc3 <- falso

limpatela
escreval("Jogo da véia")
escreval
escreval
escreval("_A1_|_A2_|_A3_")
escreval("_B1_|_B2_|_B3_")
escreval("_C1_|_C2_|_C3_")
escreval
escreval(n1, ", é a sua vez. Digite o valor onde deseja jogar:")
leia(j1)

se (j1=a1) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   va1 <- verdadeiro
   

fimse

se (j1=a2) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_X_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   va2 <- verdadeiro


fimse

se (j1=a3) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_X_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   va3 <- verdadeiro

fimse

se (j1=b1) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_X_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   vb1 <- verdadeiro
   

fimse


se (j1=b2) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_B!_|_X_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   vb2 <- verdadeiro

fimse


se (j1=b3) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_B1_|_B2_|_X_")
   escreval("_C1_|_C2_|_C3_")
   vb3 <- verdadeiro

fimse


se (j1=c1) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_X_|_C2_|_C3_")
   vc1 <- verdadeiro

fimse


se (j1=c2) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_B!_|_B2_|_B3_")
   escreval("_C1_|_X_|_C3_")
   vc2 <- verdadeiro

fimse


se (j1=c3) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_X_")
   vc3 <- verdadeiro


fimse

escreval(n2, ", é a sua vez. Digite o valor onde deseja jogar:")
leia(g1)

se (g1=a1) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")




senao
     se (g1=a1) e (va2=verdadeiro) entao
        limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_O_|_X_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")

    senao
         se (g1=a1) e (va3=verdadeiro) entao
        limpatela
        escreval("Jogo da véia")
        escreval
        escreval
        escreval("_O_|_A2_|_X_")
        escreval("_B1_|_B2_|_B3_")
        escreval("_C1_|_C2_|_C3_")

        senao
             se (g1=a1) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_O_|_A2_|_A3_")
             escreval("_X_|_B2_|_B3_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=a1) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_O_|_A2_|_A3_")
                  escreval("_B1_|_X_|_B3_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=a1) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_O_|_A2_|_A3_")
                       escreval("_B1_|_B2_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=a1) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_O_|_A2_|_A3_")
                            escreval("_B1_|_B2_|_B3_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=a1) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_O_|_A2_|_A3_")
                                    escreval("_B1_|_B2_|_B3_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=a1) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_O_|_A2_|_A3_")
                                         escreval("_B1_|_B2_|_B3_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
        




se (g1=a2) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_O_|_A3_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=a2) e (va3=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_O_|_X_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=a2) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_A1_|_O_|_A3_")
             escreval("_X_|_B2_|_B3_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=a2) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_A1_|_O_|_A3_")
                  escreval("_B1_|_X_|_B3_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=a2) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_A1_|_O_|_A3_")
                       escreval("_B1_|_B2_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=a2) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_A!_|_O_|_A3_")
                            escreval("_B1_|_B2_|_B3_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=a2) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_A1_|_O_|_A3_")
                                    escreval("_B1_|_B2_|_B3_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=a2) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_A1_|_O_|_A3_")
                                         escreval("_B1_|_B2_|_B3_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse

se (g1=a3) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_O_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=a3) e (va2=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_X_|_O_")
   escreval("_B1_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=a3) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_A1_|_A2_|_O_")
             escreval("_X_|_B2_|_B3_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=a3) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_A1_|_A2_|_O_")
                  escreval("_B1_|_X_|_B3_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=a3) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_A1_|_A2_|_O_")
                       escreval("_B1_|_B2_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=a3) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_A1_|_A2_|_O_")
                            escreval("_B1_|_B2_|_B3_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=a3) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_A1_|_A2_|_O_")
                                    escreval("_B1_|_B2_|_B3_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=a3) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_A1_|_A2_|_O_")
                                         escreval("_B1_|_B2_|_B3_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         

se (g1=b1) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_A3_")
   escreval("_O_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b1) e (va2=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_X_|_A3_")
   escreval("_O_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")
   

se (g1=b1) e (va3=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_X_")
   escreval("_O_|_B2_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b1) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_A1_|_A2_|_A3_")
             escreval("_X_|_B2_|_B3_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=b1) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_A1_|_A2_|_O_")
                  escreval("_O_|_X_|_B3_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=b1) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_A1_|_A2_|_O_")
                       escreval("_O_|_B2_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=b1) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_A1_|_A2_|_O_")
                            escreval("_O_|_B2_|_B3_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=b1) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_A1_|_A2_|_O_")
                                    escreval("_O_|_B2_|_B3_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=b1) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_A1_|_A2_|_O_")
                                         escreval("_O_|_B2_|_B3_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         

se (g1=b2) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_A3_")
   escreval("_B1_|_O_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b2) e (va2=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_X_|_A3_")
   escreval("_B1_|_O_|_B3_")
   escreval("_C1_|_C2_|_C3_")


se (g1=b2) e (va3=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_X_")
   escreval("_B1_|_O_|_B3_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b2) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_A1_|_A2_|_A3_")
             escreval("_X_|_O_|_B3_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=b2) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_A1_|_A2_|_A3_")
                  escreval("_B1_|_X_|_B3_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=b2) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_A1_|_A2_|_A3_")
                       escreval("_B1_|_O_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=b2) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_A1_|_A2_|_A3_")
                            escreval("_B1_|_O_|_B3_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=b2) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_A1_|_A2_|_A3_")
                                    escreval("_B1_|_O_|_B3_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=b2) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_A1_|_A2_|_A3_")
                                         escreval("_B1_|_O_|_B3_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         

se (g1=b3) e (va1=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_X_|_A2_|_A3_")
   escreval("_B1_|_B2|_O_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b3) e (va2=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_X_|_A3_")
   escreval("_B1_|_B2_|_O_")
   escreval("_C1_|_C2_|_C3_")


se (g1=b3) e (va3=verdadeiro) entao
   limpatela
   escreval("Jogo da véia")
   escreval
   escreval
   escreval("_A1_|_A2_|_X_")
   escreval("_B1_|_B2_|_O_")
   escreval("_C1_|_C2_|_C3_")


senao
se (g1=b3) e (vb1=verdadeiro) entao
             limpatela
             escreval("Jogo da véia")
             escreval
             escreval
             escreval("_A1_|_A2_|_A3_")
             escreval("_B1_|_B2_|_O_")
             escreval("_C1_|_C2_|_C3_")

             senao
                  se (g1=b3) e (vb2=verdadeiro) entao
                  limpatela
                  escreval("Jogo da véia")
                  escreval
                  escreval
                  escreval("_A1_|_A2_|_A3_")
                  escreval("_B1_|_X_|_O_")
                  escreval("_C1_|_C2_|_C3_")

                  senao
                       se (g1=b3) e (vb3=verdadeiro) entao
                       limpatela
                       escreval("Jogo da véia")
                       escreval
                       escreval
                       escreval("_A1_|_A2_|_A3_")
                       escreval("_B1_|_B2_|_X_")
                       escreval("_C1_|_C2_|_C3_")

                       senao
                            se (g1=b3) e (vc1=verdadeiro) entao
                            limpatela
                            escreval("    Jogo da véia")
                            escreval
                            escreval
                            escreval("_A1_|_A2_|_A3_")
                            escreval("_B1_|_B2_|_O_")
                            escreval("_X_|_C2_|_C3_")

                            senao
                                    se (g1=b3) e (vc2=verdadeiro) entao
                                    limpatela
                                    escreval("Jogo da véia")
                                    escreval
                                    escreval
                                    escreval("_A1_|_A2_|_A3_")
                                    escreval("_B1_|_B2_|_O_")
                                    escreval("_C1_|_X_|_C3_")

                                    senao
                                         se (g1=b3) e (vc3=verdadeiro) entao
                                         limpatela
                                         escreval("Jogo da véia")
                                         escreval
                                         escreval
                                         escreval("_A1_|_A2_|_A3_")
                                         escreval("_B1_|_B2_|_O_")
                                         escreval("_C1_|_C2_|_X_")

                                         senao
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse
                                         fimse


Fimalgoritmo