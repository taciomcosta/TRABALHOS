Algoritmo "Algoritmo - Idade e sexo"

Var
i,j,cM,cH:inteiro
medI,medH,medM:real
s:caractere

Inicio
//ENTRADA
medI <- 0
medM <- 0
medH <- 0
para j de 1 ate 7 passo 1 faca
     limpatela
     escreva("Pessoa",j,", digite sua idade: ")
     leia(i)
     escreva("Digite a letra do seu sexo(M/F): ")
     leia(s)
     medI <- medI + i
     se (s="m") entao
        cM <- cM + 1
        medM <- medM + i
     senao
          cH <- cH + 1
          medH <- medH + i
     fimse
fimpara

//SAÍDA
escreval("Média de idade: ",medI/7," anos")
escreval("Média de idade das mulheres: ",medM/cM," anos")
escreval("Média de idade das homens: ",medH/cH," anos")



Fimalgoritmo