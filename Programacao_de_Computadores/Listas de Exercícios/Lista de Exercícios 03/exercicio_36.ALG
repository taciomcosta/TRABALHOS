Algoritmo "Algoritmo - Média da altura de pessoas com mais de 50 anos"

Var
i,cont:inteiro
a,medA:real

Inicio
enquanto (1<>0) faca
         //ENTRADA
         limpatela
         escreva("Digite sua altura:")
         leia(a)
         //SAÍDA
         se (a=0) entao
            escreval("Altura média das pessoas com mais de 50 anos: ",medA/cont,"m")
            fimalgoritmo
         fimse
         //ENTRADA (2)
         escreva("Digite sua idade:")
         leia(i)
         //PROCESSAMENTO
         se (i>50) entao
            medA <- medA + a
            cont <- cont + 1
         fimse
fimenquanto


Fimalgoritmo