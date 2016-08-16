Algoritmo "Algoritmo - idade, peso, altura"
Var
j,i,p,gp1,gp2:inteiro
a,medI:real


Inicio
j <- 1
gp1 <- 0
gp2 <- 0
medI <- 0
para j de 1 ate 10 passo 1 faca
     limpatela
     escreva("Pessoa",j,", digite sua idade: ")
     leia(i)
     escreva("Digite seu peso: ")
     leia(p)
     escreva("Digite sua altura: ")
     leia(a)
     medI <- medI + i
     se (p>90) e (a<1.5) entao
        gp1 <- gp1 + 1
     fimse
     se (i>=10) e (i<30) e (a>1.9) entao
        gp2 <- gp2 +1
     fimse
fimpara
medI <- medI/10

//SAÍDA
limpatela
escreval("Média de idade: ",medI," anos")
escreval("Pessoas com mais de 90Kg e altura inferior a 1,50m: ",gp1)
escreval("Pessoas com idade entre 10 e 30 anos, que medem mais de 1,90m: ",gp2*100/10,"%")


Fimalgoritmo