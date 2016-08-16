Algoritmo "Exercício 6"

Var
n1,n2,res: real
op: inteiro

Inicio
escreval("Algoritmo - Operações com dois números")
escreval

//ENTRADA
escreva("Digite o primeiro número: ")
leia(n1)
escreva("Digite o segundo número: ")
leia(n2)
escreval
escreval("1. Média ")
escreval("2. Subtração do maior pelo menor número")
escreval("3. Produto")
escreval
escreva("Digite o número da operação que deseja efetuar: ")
leia(op)
escreval

//PROCESSAMENTO
res <- 0
se ( op < 1) ou (op > 3) entao
   escreva("Opção inválida")
fimse

se (op = 1) entao
   res <- (n1+n2)/2
fimse

se (op = 2) entao
   se (n1>=n2) entao
      res <-n1 - n2
   fimse
   se (n2>n1) entao
      res <- n2 - n1
   fimse
fimse

se (op = 3) entao
   res <- n1*n2
fimse

//SAÍDA
escreval

escreva("Resultado:", res)


Fimalgoritmo