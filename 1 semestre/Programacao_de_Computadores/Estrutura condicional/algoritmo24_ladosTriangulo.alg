algoritmo "Algoritmo - Lados de um Tri�ngulo"

var
a,b,c: real

inicio
escreval ("Algoritmo - Lados de um Tri�ngulo")
escreval
//ENTRADA
escreva("Digite o tamanho do lado A do tri�ngulo: ")
leia(a)
escreva("Digite o tamanho do lado B do tri�ngulo: ")
leia(b)
escreva("Digite o tamanho do lado C do tri�ngulo: ")
leia(c)

//PROCESSAMENTO
se (a<(b+c)) entao
   se (b<(a+c)) entao
      se (c<(a+b)) entao
         escreva(a,", ",b," e ",c, " podem ser lados de um tri�ngulo.")
         senao
         escreva(a,", ",b," e ",c, " N�O podem ser lados de um tri�ngulo.")
      fimse
   fimse
fimse
fimalgoritmo
