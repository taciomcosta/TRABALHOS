Algoritmo "ALgoritmo - �rea do tri�ngulo - aula 4"
Var
a,b,c,p,area:real

Inicio
//ENTRADAS
escreval("Algoritmo - �rea do tri�ngulo")
escreval
escreva("Digite o tamanho do 1� lado do tri�ngulo: ")
leia(a)
escreval
escreva("Digite o tamanho do 2� lado do tri�ngulo: ")
leia(b)
escreval
escreva("Digite o tamanho do 3� lado do tri�ngulo: ")
leia(c)

//PROCESSAMENTO
p <- (a+b+c)/2
area <- raizq(p*(p-a)*(p-b)*(p-c))

//SA�DA
limpatela
escreva("A �rea do tri�ngulo � ",area:4:2)


Fimalgoritmo