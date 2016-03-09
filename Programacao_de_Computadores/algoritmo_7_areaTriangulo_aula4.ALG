Algoritmo "Algoritmo 7 - Área do triângulo - Aula 4"

Var
p,a,b,c,area: real
Inicio
//ENTRADAS
escreval("Algoritmo - Área do triângulo")
escreval
escreva("Digite o tamanho 1° lado do triângulo em cm: ")
leia(a)
escreval
escreva("Digite o tamanho 2° lado do triângulo em cm: ")
leia(b)
escreval
escreva("Digite o tamanho 3° lado do triângulo em cm: ")
leia(c)
escreval

//PROCESSAMENTO
p <- (a+b+c)/2
area <- raizq(p*(p-a)*(p-b)*(p-c))

//SAÍDA
limpatela
escreva ("A área do triângulo é ", area:4:2)


Fimalgoritmo