Algoritmo "Menu de Opções"

Var
o,enter,m:inteiro
sal,nSal:real

Inicio

enquanto (1<>0) faca

         limpatela
         escreval("1 - Novo salário")
         escreval("2 - Férias")
         escreval("3 - Décimo terceiro")
         escreval("4 - Sair")
         escreval
         //ENTRADA
                     escreva("Digite o valor da opção desejada: ")
                     leia(o)
                     escreval
                     se (o>4) ou (o<1) entao
                        enquanto (o>4) ou (o<1) faca
                                 escreval("Opção inválida!")
                                 escreva("Escolha uma opção entre 1 e 4: ")
                                 leia(o)
                        fimenquanto
                     fimse

         //PROCESASAMENTO
         escolha o
                 caso 1
                      limpatela
                      escreval("==NOVO SALÁRIO==")
                      escreva("Digite o salário atual: ")
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
                      escreval("Novo salário: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 2
                      limpatela
                      escreval("==FÉRIAS==")
                      escreva("Digite o salário: ")
                      leia(sal)
                      nSal <- sal + sal/3
                      escreval
                      escreval("Férias: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 3
                      limpatela
                      escreval("==DÉCIMO TERCEIRO==")
                      escreva("Digite o salário: ")
                      leia(sal)
                      m <- 13
                      enquanto (m>12) faca
                               escreva("Digite o número de meses de trabalho na empresa: ")
                               leia(m)
                               se (m>12) entao
                                  escreva("Digite um número menor ou igual a 12")
                                  escreval
                                  escreval
                               fimse
                      fimenquanto
                      nSal <- sal*m/12
                      escreval("Décimo terceiro: R$",nSal:5:2)
                      escreval
                      escreva("Pressione ENTER para voltar ao menu")
                      leia(enter)
                 caso 4
                      fimalgoritmo

         fimescolha
fimenquanto


Fimalgoritmo