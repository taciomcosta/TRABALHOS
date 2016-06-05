Algoritmo "Algoritmo - Número de ônibus"

Var
nt,no,rb:inteiro
b: real


Inicio
//ENTRADA
escreval("Algoritmo - número de ônibus")
escreval
escreva("Digite o número de alunos que irão ao passeio: ")
leia(nt)
escreva ("Digite o número de alunos que um único ônibus comporta: ")
leia(no)
escreval
//PROCESSAMENTO
rb <- nt%no
b <- (nt-rb)/no

se (rb>0) entao
b <- b+1
fimse
//SAÍDA
escreva("Serão necessários ",b, " ônibus para levar os ",nt," alunos ao passeio")




Fimalgoritmo