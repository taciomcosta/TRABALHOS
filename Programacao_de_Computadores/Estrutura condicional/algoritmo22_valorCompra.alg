algoritmo "Valor da venda"

var
vc,vv: real
inicio
escreval("Valor da venda")
escreval
//ENTRADA
escreva("Digite o valor da compra: ")
leia(vc)
escreval
//PROCESSAMENTO
se(vc<10) entao
          vv<-vc*1.7
          senao
               se(vc<30) entao
                         vv<-vc*1.5
                         senao
                              se(vc<50) entao
                                    vv<-vc*1.4
                                    senao
                                    vv<-vc*1.3
                              fimse
               fimse
fimse

//SAÍDA
escreval
escreva("Valor da venda: R$",vv:4:2)
fimalgoritmo


