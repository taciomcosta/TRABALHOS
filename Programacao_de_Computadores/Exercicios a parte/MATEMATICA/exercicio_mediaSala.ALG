Algoritmo "Algoritmo - Média de uma turma de 50 alunos"

Var
i:inteiro
media,total:real

Inicio
escreval("Algoritmo - Média de uma turma de 50 alunos")
escreval

i <- 0
media <- 0
total <- 0
para i de 1 ate 50 passo 1 faca
     escreva("Digite a média do",i,"° aluno: ")
     leia(media)
     total <- total + media
fimpara

escreval
escreva("A média aritmética total dos 50 alunos é:",total/50)


Fimalgoritmo