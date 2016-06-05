algoritmo "Algoritmo - Números primos"

var
i,x,v: inteiro

inicio
escreval("Algoritmo - Números primos")
escreva
escreva("Digite um número qualquer:")
leia(x)
para i de 1 ate x passo 1 faca
     se (x%i=0) e (i<>1) e (i<>x) entao
        v <- 1
     fimse
     se (i=x) e (v<>1) entao
        escreval
        escreva(x," é um número primo")
     fimse
fimpara
se (v=1) entao
   escreval
   escreva(x," NÃO é um número primo")
fimse
//2 ° FORMA
// cont <- 0
//para i de 1 ate x passo 1 faca
//     se   (x%i=0) entao
//          cont <- cont + 1
//     fimse
//fimpara
// se (cont=2) entao
//    escreva(x, " é primo")
// senao
//    escreva(x, " NÃO é primo")
// fimse
fimalgoritmo
