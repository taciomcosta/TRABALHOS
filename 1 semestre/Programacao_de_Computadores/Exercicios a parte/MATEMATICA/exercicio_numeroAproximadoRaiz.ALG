Algoritmo "Algoritmo - N�mero inteiro que mais se aproxima da raiz quadrada"
Var
i:inteiro
raiz,r:real
decimal:real


Inicio
escreval("Algoritmo - N�mero inteiro que mais se aproxima da raiz quadrada")
escreval
//ENTRADA
escreva("Digite um n�mero qualquer: ")

//PROCESSAMENTO
leia(r)
raiz <- raizq(r)
decimal <- raiz

//EXTRAINDO A PARTE DECIMAL PARA A VARI�VEL decimal
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