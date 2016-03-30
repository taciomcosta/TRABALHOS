algoritmo "Algoritmo - Tempo em dias"

var
dia,a,m,s,d: inteiro
inicio
escreval ("Algoritmo - Tempo em dias")
escreval

//ENTRADA
escreva("Digite o número de dias: ")
leia(dia)
//PROCESSAMENTO
a <- dia\365
m <- (dia%365)\30
s <- ((dia%365)%30)\7
d <- ((dia%365)%30)%7

//SAÍDA
escreval
escreva(dia, " dias equivalem a ",a," anos ",m," meses ",s," semanas",d," dias")
fimalgoritmo
