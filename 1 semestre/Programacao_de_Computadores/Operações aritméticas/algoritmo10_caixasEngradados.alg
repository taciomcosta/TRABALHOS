algoritmo "N�mero de caixas para garrafas"

var
ng,ne,nc,res: inteiro

inicio
escreval("---------- N�mero de engradados ----------")
escreval
escreval
//ENTRADA
escreva("Digite o n�mero de garrafas: ")
leia(ng)
escreval
escreva("Digite o n�mero de engradados: ")
leia(ne)


//PROCESSAMENTO
nc <- ng\ne
res <- ng % ne

//SA�DA
escreval
escreval("Ser� necess�rias ",nc," engradados e ",res," garrafas n�o ser�o embaladas")


fimalgoritmo
