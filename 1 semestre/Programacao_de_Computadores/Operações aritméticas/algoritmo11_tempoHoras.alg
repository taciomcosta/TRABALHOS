algoritmo "Algoritmo - Tempo"

var
seg, h, m, s: inteiro
inicio
escreval("Algoritmo - Tempo")
escreval

//ENTRADA
escreva("Digite o tempo em segundos: ")
leia(seg)
//PROCESSAMENTO
h <- seg\3600
m <- (seg%3600)\60
s <- (seg%3600)%60
//SA�DA
escreval
escreva("O tempo equivale � ",h,"h",m,"m e ",s,"  s")

fimalgoritmo
