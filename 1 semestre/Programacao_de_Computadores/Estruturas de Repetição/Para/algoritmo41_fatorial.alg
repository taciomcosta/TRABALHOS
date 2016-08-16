algoritmo "Algoritmo - Fatorial"

var
i,x,ac:inteiro
inicio
escreval("Algoritmo - Fatorial")
escreval
//ENTRADA
escreva("Digite um número inteiro positivo: ")
leia(x)
//PROCESSAMENTO
i <- 1
ac <- 1
para i de 1 ate x passo 1 faca
      ac <- ac * i
fimpara

//SAÍDA
escreval
escreva(x,"! = ",ac)

fimalgoritmo
