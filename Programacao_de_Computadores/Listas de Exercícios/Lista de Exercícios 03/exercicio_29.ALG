Algoritmo "Algoritmo "

Var
i,iMax,iMin,m200,mS_i,cont:inteiro
sal,medSal,mSal:real
s,ms_S:caractere

Inicio
iMin <- 100
iMax <- 0
enquanto (0<>1) faca
         //ENTRADA
         limpatela
         escreva("Digite a idade: ")
         leia(i)
         //SAÍDA
         se (i<0) entao
            limpatela
            medSal <- medSal + sal
            escreval("Média salarial: R$",medSal/cont:4:2)
            escreval("Menor idade: ",iMin)
            escreval("Maior idade: ",iMax)
            escreval("------------------------------------")
            escreval("==Pessoa com maior salário==")
            escreval("Salário: R$",mSal:5:2)
            escreval("Idade: ",mS_i)
            escreval("Sexo: ",mS_S)
            fimalgoritmo
         senao
              cont <- cont + 1
         fimse
         //ENTRADA (2)
         escreva("Digite o sexo(M/F): ")
         leia(s)
         escreva("Digite o salário: ")
         leia(sal)
         //PROCESSAMENTO
         se (i < iMin) entao
            iMin <- i
         fimse
         se (i > iMax) entao
            iMax <- i
         fimse
         se (sal > mSal) entao
            mSal <- sal
            mS_i <- i
            mS_s <- s
         fimse

fimenquanto

Fimalgoritmo