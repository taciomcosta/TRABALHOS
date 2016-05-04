algoritmo "Algoritmo - Lados de um Triângulo"

var
a,b,c: real

inicio
escreval ("Algoritmo - Lados de um Triângulo")
escreval
//ENTRADA
escreva("Digite o tamanho do lado A do triângulo: ")
leia(a)
escreva("Digite o tamanho do lado B do triângulo: ")
leia(b)
escreva("Digite o tamanho do lado C do triângulo: ")
leia(c)

//PROCESSAMENTO
se (a<(b+c)) entao
   se (b<(a+c)) entao
      se (c<(a+b)) entao
         escreva(a,", ",b," e ",c, " podem ser lados de um triângulo.")
         senao
         escreva(a,", ",b," e ",c, " NÃO podem ser lados de um triângulo.")
      fimse
   fimse
fimse
fimalgoritmo
