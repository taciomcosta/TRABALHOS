Algoritmo "Exercício 25"

Var
h,m,s: inteiro

Inicio
escreval("Algoritmo - Conversão do tempo")
escreval

//ENTRADA
escreva("Digite as horas: ")
leia(h)
escreva("Digite os minutos: ")
leia(m)
//PROCESSAMENTO
h <- h*60
m <- m+h
s <- m*60

//SAÍDA
escreval
escreval
escreval(h/60," horas equivale a ",h," minutos")
escreval ("O total de minutos é: ",m)
escreval("O tempo total em segundos é: ",s)




Fimalgoritmo