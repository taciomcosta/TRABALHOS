Algoritmo "ALgoritmo - área do triângulo - aula 4"
Var
a,b,c,p,area:real

Inicio
//ENTRADAS
escreval("Algoritmo - área do triângulo")
escreval
escreva("Digite o tamanho do 1° lado do triângulo: ")
leia(a)
escreval
escreva("Digite o tamanho do 2° lado do triângulo: ")
leia(b)
escreval
escreva("Digite o tamanho do 3° lado do triângulo: ")
leia(c)

//PROCESSAMENTO
p <- (a+b+c)/2
area <- raizq(p*(p-a)*(p-b)*(p-c))

//SAÍDA
limpatela
escreva("A área do triângulo é ",area:4:2)


Fimalgoritmo