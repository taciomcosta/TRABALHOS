Algoritmo "Exerc�cio 5"

Var
n1,n2,op,res: real

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
escreval("4. Divis�o do primeiro pelo segundo")
escreval
escreva("Digite o n�mero da opera��o que deseja efetuar: ")
leia(op)
escreval

//PROCESSAMENTO
res <- 0
se ( op < 1) ou (op > 5) entao
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
se (op = 4) entao
   se( n2 = 0) entao
       escreva("Imposs�vel dividir por zero")
   senao
      res <- n1/n2
   fimse

fimse


//SA�DA
escreval

escreva("Resultado:", res)


Fimalgoritmo