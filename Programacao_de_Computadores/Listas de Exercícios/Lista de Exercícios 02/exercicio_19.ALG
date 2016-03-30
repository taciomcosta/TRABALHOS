Algoritmo "Exercício 19"

Var
h: real
s: caractere

Inicio
escreval("Algoritmo - Peso ideal")
escreval

//ENTRADA
escreva("Digite a sua altura: ")
leia(h)
escreva("Digite o seu sexo ( M/F): ")
leia(s)

//PROCESSAMENTO e SAÍDA
escreval
se ( s >= "m") entao
   h <- (72.7*h)-58
   escreva("Peso ideal: ",h," Kg")
senao

      h <- (62.1*h)-44.7
      escreva("Peso ideal: ",h," Kg")
fimse





Fimalgoritmo