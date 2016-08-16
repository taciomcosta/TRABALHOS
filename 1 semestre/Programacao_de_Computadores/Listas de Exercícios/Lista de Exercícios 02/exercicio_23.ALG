Algoritmo "Exercício 23"

Var

cod, qtd: inteiro
p: real

Inicio
escreval("Algoritmo - Preço final do produto")
escreval

//ENTRADA
escreva("Digite o código do produto: ")
leia(cod)
escreva("Digite a quantidade comprada do produto: ")
leia(qtd)
//PROCESSAMENTO e SAÍDA
escreval
se ( cod >=1) e ( cod <=10)  entao
   escreval("Valor unitário do produto: R$10,00")
   p <- 10*qtd

   escreval("Valor total da nota: R$",p)
   se(p <=250) entao
        escreval("Desconto: 5%:",p*0.95)
   senao
   se(p >250) e ( p <= 500) entao
        escreval("Desconto: 5%:",p*0.90)
   senao
   se(p > 500) entao
        escreval("Desconto: 5%:",p*0.15)
   fimse
   fimse
   fimse

senao
se ( cod >=11) e ( cod <=20)  entao
   escreval("Valor unitário do produto: R$15,00")
   p <- 15*qtd
   escreval("Valor total da nota: R$",p)
   se(p <=250) entao
        escreval("Desconto: 5%: R$",p*0.95)
   senao
   se(p >250) e ( p <= 500) entao
        escreval("Desconto: 10%: R$",p*0.90)
   senao
   se(p > 500) entao
        escreval("Desconto: 15%: R$",p*0.15)
   fimse
   fimse
   fimse
senao
se ( cod >=21) e ( cod <=30)  entao
   escreval("Valor unitário do produto: R$20,00")
   p <- 20*qtd
   escreval("Valor total da nota: R$",p)
   se(p <=250) entao
        escreval("Desconto: 5%: R$",p*0.95)
   senao
   se(p >250) e ( p <= 500) entao
        escreval("Desconto: 10%: R$",p*0.90)
   senao
   se(p > 500) entao
        escreval("Desconto: 15%: R$",p*0.15)
   fimse
   fimse
   fimse
senao
se ( cod >=31) e ( cod <=40)  entao
   escreva("Valor unitário do produto: R$30,00")
   p <- 30*qtd
   escreval("Valor total da nota: R$",p)
   se(p <=250) entao
        escreval("Desconto: 5%: R$",p*0.95)
   senao
   se(p >250) e ( p <= 500) entao
        escreval("Desconto: 10%: R$",p*0.90)
   senao
   se(p > 500) entao
        escreval("Desconto: 15%: R$",p*0.15)
   fimse
   fimse
   fimse
fimse
fimse
fimse
fimse




Fimalgoritmo