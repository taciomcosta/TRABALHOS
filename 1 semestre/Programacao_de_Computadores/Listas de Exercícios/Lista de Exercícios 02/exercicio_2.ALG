Algoritmo "Exerc�cio 2"

Var
n1,n2,m: real
Inicio
escreval("Algoritmo - M�dia e aprova��o final")
escreval

//ENTRADA
escreva("Digite a primeira nota: ")
leia(n1)
escreva("Digite a segunda nota: ")
leia(n2)

//PROCESSAMENTO
m <- (n1+n2)/2

//SA�DA
escreval
se (0<=m) e (m<4) entao
   escreval("M�dia:",m)
   escreva("Reprovado")
fimse
se (4<=m)e(m<7) entao
   escreval("M�dia:",m)
   escreva("Exame")
fimse
se (7<=m) e (m<=10) entao
   escreval("M�dia:",m)
   escreva("Aprovado")
fimse



Fimalgoritmo