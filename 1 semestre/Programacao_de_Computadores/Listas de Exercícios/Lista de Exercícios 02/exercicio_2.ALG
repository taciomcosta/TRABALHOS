Algoritmo "Exercício 2"

Var
n1,n2,m: real
Inicio
escreval("Algoritmo - Média e aprovação final")
escreval

//ENTRADA
escreva("Digite a primeira nota: ")
leia(n1)
escreva("Digite a segunda nota: ")
leia(n2)

//PROCESSAMENTO
m <- (n1+n2)/2

//SAÍDA
escreval
se (0<=m) e (m<4) entao
   escreval("Média:",m)
   escreva("Reprovado")
fimse
se (4<=m)e(m<7) entao
   escreval("Média:",m)
   escreva("Exame")
fimse
se (7<=m) e (m<=10) entao
   escreval("Média:",m)
   escreva("Aprovado")
fimse



Fimalgoritmo