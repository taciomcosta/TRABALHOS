Algoritmo "Exerc�cio 6"

Var
n1,n2,res: real
op: inteiro

Inicio
escreval("Algoritmo - Opera��es com dois n�meros")
escreval

//ENTRADA
escreva("Digite o primeiro n�mero: ")
leia(n1)
escreva("Digite o segundo n�mero: ")
leia(n2)
escreval
escreval("1. M�dia ")
escreval("2. Subtra��o do maior pelo menor n�mero")
escreval("3. Produto")
escreval
escreva("Digite o n�mero da opera��o que deseja efetuar: ")
leia(op)
escreval

//PROCESSAMENTO
res <- 0
se ( op < 1) ou (op > 3) entao
   escreva("Op��o inv�lida")
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

//SA�DA
escreval

escreva("Resultado:", res)


Fimalgoritmo