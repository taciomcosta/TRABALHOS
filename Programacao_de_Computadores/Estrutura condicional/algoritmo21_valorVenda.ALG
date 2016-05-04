Algoritmo "Algoritmo - Valor da Venda"

Var
vc,vv:real

Inicio
escreval("Algoritmo - Valor da Venda")
escreval
//ENTRADA
escreva("Digite o valor da compra: ")
leia(vc)

//PROCESSAMENTO e SAÍDA

se (vc<10) entao
   escreva("Valor da venda com lucro de 70%: R$",vc*1.7)
   senao
   se (vc>=10) e (vc<30) entao
      escreva("Valor da venda com lucro de 50%: R$",vc*1.5)
      senao
      se (vc>=30) e (vc<50) entao
         escreva("Valor da venda com lucro de 40%: R$",vc*1.4)
         senao
         se (vc>=50) entao
         escreva("Valor da venda com lucro de 30%: R$",vc*1.3)
         fimse
      fimse
   fimse
fimse


Fimalgoritmo