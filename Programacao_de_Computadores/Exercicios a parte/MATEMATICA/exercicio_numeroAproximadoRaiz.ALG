Algoritmo "Algoritmo - Número inteiro que mais se aproxima da raiz quadrada"
Var
i:inteiro
raiz,r:real
decimal:real


Inicio
escreval("Algoritmo - Número inteiro que mais se aproxima da raiz quadrada")
escreval
//ENTRADA
escreva("Digite um número qualquer: ")

//PROCESSAMENTO
leia(r)
raiz <- raizq(r)
decimal <- raiz

//EXTRAINDO A PARTE DECIMAL PARA A VARIÁVEL decimal
enquanto (decimal>=1) faca
                    decimal <- decimal-1
fimenquanto
//


escreval
escreval("Raiz =",raiz)

se (decimal<=0.5) entao
   raiz <- raiz - decimal
senao
     raiz <- raiz - decimal +1
fimse

     escreval("Inteiro que mais se aproxima: ",raiz)




Fimalgoritmo