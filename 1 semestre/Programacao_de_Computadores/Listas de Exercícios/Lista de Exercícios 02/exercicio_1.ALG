Algoritmo "Exerc�cio 1"

Var
n1,n2,n3,n4,m: real

Inicio
escreval("Algoritmo - M�dia e aprova��o final")
escreval

//ENTRADA
escreva("Digite a primeira nota: ")
leia(n1)
escreva("Digite a segunda nota: ")
leia(n2)
escreva("Digite a terceira nota: ")
leia(n3)
escreva("Digite a quarta nota: ")
leia(n4)

//PROCESSAMENTO
m <- (n1+n2+n3+n4)/4

//SA�DA
escreval
se ( m < 7) entao
   escreval("O aluno foi reprovado. M�dia: ",m )
senao
   escreval("O aluno foi aprovado. M�dia: ",m )
fimse


Fimalgoritmo