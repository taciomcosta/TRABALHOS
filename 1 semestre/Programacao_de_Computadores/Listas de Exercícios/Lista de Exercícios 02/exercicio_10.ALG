Algoritmo "Exercício 10"

Var
cf: real

Inicio
escreval("Algoritmo - Custo ao consumidor de um carro novo")
escreval

//ENTRADA
escreva("Digite o custo de fábrica: ")
leia(cf)

//PROCESSAMENTO
se (cf<=12000) entao
   cf <- cf + (cf*0.05)
senao
se (cf>12000) e ( cf<25000) entao
      cf <- cf + (cf*0.10) + (cf*0.15)
senao
se (cf>25000) entao
      cf <- cf + (cf*0.15) + (cf*0.20)
fimse
fimse
fimse

//SAÍDA
escreva("Custo ao consumidor: R$ ",cf)


Fimalgoritmo