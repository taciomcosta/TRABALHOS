Algoritmo "Exercício 22"

Var
p:real
i:inteiro

Inicio
escreval("Algoritmo - Grupo de risco (Peso / Idade)")
escreval

//ENTRADA
escreva("Digite a sua idade: ")
leia(i)
escreva("Digite a sua peso: ")
leia(p)

//PROCESSAMENTO
escreval
se ( i < 20 ) entao
   se ( p <=60) entao
       escreva("Grupo de risco: 9")
   senao
   se ( p > 60) e ( p <=90) entao
       escreva("Grupo de risco: 8")
   senao
   se( p > 90) entao
       escreva("Grupo de risco: 7")
   fimse
   fimse
   fimse
senao
se ( i >= 20 ) e ( i <= 50 ) entao
   se ( p <=60) entao
       escreva("Grupo de risco: 6")
   senao
   se ( p > 60) e ( p <=90) entao
       escreva("Grupo de risco: 5")
   senao
   se( p > 90) entao
       escreva("Grupo de risco: 4")
   fimse
   fimse
   fimse
senao
se ( i > 50 ) entao
   se ( p <=60) entao
       escreva("Grupo de risco: 3")
   senao
   se ( p > 60) e ( p <=90) entao
       escreva("Grupo de risco: 2")
   senao
   se( p > 90) entao
       escreva("Grupo de risco: 1")
   fimse
   fimse
   fimse

fimse
fimse
fimse
//SAÍDA



Fimalgoritmo