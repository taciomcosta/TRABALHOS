Algoritmo "Algoritmo - Transa��o � vista e a prazo"
Var
i:inteiro
x,p,v:real
cod:caractere

Inicio
escreval("Algoritmo - Transa��o � vista e a prazo")
escreval
//ENTRADA
i <- 1
para i de 1 ate 15 passo 1 faca
     escreva("Insira o valor da",i,"� transa��o: ")
     leia(x)
     escreva("C�digo (P/V): ")
     leia(cod)
     se (cod="V") entao
        v <- v+x
     senao
          p <- p+x
     fimse
fimpara
//SA�DA
limpatela
escreval("Valor total das compras � vista:",v:7:2)
escreval("Valor total das compras a prazo:",p:7:2)
escreval("Valor total das primeiras presta��es:R$",p/3:7:2)


Fimalgoritmo