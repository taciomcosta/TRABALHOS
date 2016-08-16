algoritmo "Número de caixas para garrafas"

var
ng,ne,nc,res: inteiro

inicio
escreval("---------- Número de engradados ----------")
escreval
escreval
//ENTRADA
escreva("Digite o número de garrafas: ")
leia(ng)
escreval
escreva("Digite o número de engradados: ")
leia(ne)


//PROCESSAMENTO
nc <- ng\ne
res <- ng % ne

//SAÍDA
escreval
escreval("Serã necessárias ",nc," engradados e ",res," garrafas não serão embaladas")


fimalgoritmo
