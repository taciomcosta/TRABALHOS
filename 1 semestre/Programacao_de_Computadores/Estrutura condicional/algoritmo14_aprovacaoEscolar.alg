algoritmo "Algoritmo - Aprova��o escolar"

var
n1,n2,n3,n4,media: real
inicio
escreval("Algoritmo - Aprova��o escolar")
escreval

//ENTRADA
escreva("Digite a primeira nota: ")
leia(n1)
escreval
escreva("Digite a segunda nota: ")
leia(n2)
escreval
escreva("Digite a terceira nota: ")
leia(n3)
escreval
escreva("Digite a quarta nota: ")
leia(n4)
escreval
//PROCESSAMENTO
media <- (n1+n2+n3+n4)/4

se (media < 7) entao
//SA�DA
   escreval("M�dia: ", media:2:1)
   escreval("Aluno reprovado!")
   senao
      escreval("M�dia: ", media:2:1)
      escreval("Aluno aprovado!")
fimse


fimalgoritmo
