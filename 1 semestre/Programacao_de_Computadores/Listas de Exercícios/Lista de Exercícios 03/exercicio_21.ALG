Algoritmo "Algoritmo - n!"

Var
i,x,ac: inteiro

Inicio
escreval("Algoritmo - n!")
escreval
escreva("Digite um valor inteiro positivo qualquer: ")
leia(x)

//PROCESSAMENTO
ac <- 1
se (x=0) entao
   escreva("0! = 1")
senao
   para i de 1 ate x passo 1 faca
        ac <- ac*i
   fimpara
   escreva(x,"! = ",ac)
fimse

Fimalgoritmo