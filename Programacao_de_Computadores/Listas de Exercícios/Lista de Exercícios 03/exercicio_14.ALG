Algoritmo "Algoritmo - Idade, peso, altura, cor dos olhos e dos cabelos"
Var
i,p,j,gp1,gp2,gp3:inteiro
a,medI:real
o,c:caractere
Inicio
para j de 1 ate 20 passo 1 faca
     escreva("Pessoa",j,", insira sua idade: ")
     leia(i)
     escreva("Insira seu peso: ")
     leia(p)
     escreva("Insira sua altura: ")
     leia(a)
     escreva("Insira a cor dos seus olhos(A/P/V/C): ")
     leia(o)
     escreva("Insira a cor dos seus cabelos(P/C/L/R): ")
     leia(c)
     se (i>50) e (p<60) entao
        gp1 <- gp1 + 1
     fimse
     medI <- medI + i
     se (o="a") entao
        gp2 <- gp2 + 1
     senao
          se (c="r") entao
             gp3 <- gp3 + 1
          fimse
     fimse
     limpatela
fimpara
//SAÍDA
escreval("Pessoas com mais de 50 anos e menos de 60Kg:",gp1)
escreval("Média das idades:",medI/20)
escreval("Pessoas com olhos azuis: ",gp2*100/20,"%")
escreval("Pessoas ruivas que não possuem olhos azuis:", gp3)


Fimalgoritmo