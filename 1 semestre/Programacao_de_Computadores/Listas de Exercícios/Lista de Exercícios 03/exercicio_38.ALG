Algoritmo "Menu de Op��es"

Var
o,enter,m:inteiro
sal,nSal:real

Inicio

enquanto (1<>0) faca

         limpatela
         escreval("1 - Novo sal�rio")
         escreval("2 - F�rias")
         escreval("3 - D�cimo terceiro")
         escreval("4 - Sair")
         escreval
         //ENTRADA
                     escreva("Digite o valor da op��o desejada: ")
                     leia(o)
                     escreval
                     se (o>4) ou (o<1) entao
                        enquanto (o>4) ou (o<1) faca
                                 escreval("Op��o inv�lida!")
                                 escreva("Escolha uma op��o entre 1 e 4: ")
                                 leia(o)
                        fimenquanto
                     fimse

         //PROCESASAMENTO
         escolha o
                 caso 1
                      limpatela
                      escreval("==NOVO SAL�RIO==")
                      escreva("Digite o sal�rio atual: ")
                      leia(sal)
                      se (sal<350) entao
                         nSal <- sal*1.15
                      senao
                           se (sal<=600) entao
                              nSal <- sal*1.1
                           senao
                                nSal <- sal*1.05
                           fimse
                      fimse
                      escreval
                      escreval("Novo sal�rio: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 2
                      limpatela
                      escreval("==F�RIAS==")
                      escreva("Digite o sal�rio: ")
                      leia(sal)
                      nSal <- sal + sal/3
                      escreval
                      escreval("F�rias: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 3
                      limpatela
                      escreval("==D�CIMO TERCEIRO==")
                      escreva("Digite o sal�rio: ")
                      leia(sal)
                      m <- 13
                      enquanto (m>12) faca
                               escreva("Digite o n�mero de meses de trabalho na empresa: ")
                               leia(m)
                               se (m>12) entao
                                  escreva("Digite um n�mero menor ou igual a 12")
                                  escreval
                                  escreval
                               fimse
                      fimenquanto
                      nSal <- sal*m/12
                      escreval("D�cimo terceiro: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 4
                      fimalgoritmo

         fimescolha
fimenquanto


Fimalgoritmo