Algoritmo "Algoritmo -  B�nus Especial"

Var
i: inteiro
nome: vetor [1..15] de caractere//MEU VISUALG N�O FUNCIONA COM VARI�VEIS DO TIPO LITERAL
compra: vetor [1..15] de real

Inicio
escreval("Algoritmo - B�nus Especial")
//ENTRADA
i <- 1
para i de 1 ate 15 passo 1 faca
     escreva("Digite o nome do ",i,"� cliente: ")
     leia(nome[i])
     escreva("Digite o valor das compras do cliente: ")
     leia(compra[i])
     limpatela
fimpara
//SA�DA
limpatela
i <- 1
para i de 1 ate 15 passo 1 faca
     escreval
     escreval("Cliente: ",nome[i])
     escreval("Valor total de compras: ",compra[i])
     se (compra[i] < 1000) entao
        escreval("B�nus de 10%:", compra[i]*0.1)
     senao
          escreval("B�nus de 15%:", compra[i]*0.15)
     fimse

fimpara


Fimalgoritmo