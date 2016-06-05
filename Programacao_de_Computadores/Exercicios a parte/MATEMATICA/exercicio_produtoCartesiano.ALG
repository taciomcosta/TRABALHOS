Algoritmo "algoritmo_produtoCartesiano_paresOrdenados"

Var

i,j:inteiro
a,b: vetor [1..3] de inteiro
x,y:inteiro


Inicio

//ENTRADA

escreval("Algoritmo de pares ordenados e produto cartesiano")
escreval
escreval("O conjunto A é composto por 3 elementos.")

            para i de 1 ate 3 faca

                  escreva("Digite um valor para o",i,"° elemento de A: ")
                  leia(a[i])
                  escreval

            fimpara
            
            
            escreval
            escreval
            escreval("O conjunto B é composto por 2 elementos.")
            
            

            para j de 1 ate 2 faca
            
                 escreva("Digite um valor para o ",j,"° elemento de B: ")
                 leia(b[j])
                 escreval
                 
           fimpara
           

           i <- 1
           
           escreval
           escreval
           escreval

           //CONJUNTO A
           
           escreval("R E S U L T A D O S")
           escreval
           escreva ("Conjunto A ={")
           
           para i  de 1 ate 3 faca
           
                  escreva(a[i],",")
           fimpara
           
           escreval("}")
           escreval
           
           //CONJUNTO B
           
                             j <- 1
           escreva ("Conjunto B ={")

           para j  de 1 ate 2 faca

                  escreva(b[j],",")
                  

           fimpara

           escreval("}")
           escreval



           //PRODUTO CARTESIANO
           escreva ("O produto cartesiano é: A X B = {")


           i <- 1

           
           para i de 1 ate 3 faca

                       para j de 1 ate 2 faca
                                               

                       escreva("(",a[i],",",b[j],")")

                                                  
                       fimpara

           
           fimpara

           escreva("}")
           escreval

//PROCESSAMENTO



//SAÍDA



Fimalgoritmo