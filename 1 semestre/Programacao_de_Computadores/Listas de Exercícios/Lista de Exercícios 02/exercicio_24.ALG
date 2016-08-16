Algoritmo "Exercício 24"

Var
p: real
c:inteiro
s:caractere

Inicio
escreval("Algoritmo - Classificação do Produto")
escreval

//ENTRADA
escreva("Digite o preço do produto: ")
leia(p)
escreval
escreval("1. limpeza")
escreval("2. alimentação")
escreval("3. vestuário")
escreva("Digite a categoria do produto: ")
leia(c)
escreval
escreval("R:produtos que necessitam de refrigeração")
escreval("S:produtos que não necessitam de refrigeração")
escreva("Digite a situação do produto: ")
leia(s)
//PROCESSAMENTO e SAÍDA
escreval
se ( p <= 25) entao
   se (c=1) entao
   escreval("Percentual de aumento - 5%: R$",p*0.05)
     se(s="r") entao
        escreval("Imposto - 5%: R$",p*0.05)
     senao
        escreval("Imposto - 8%: R$",p*0.08)
        p <- p*0.97
        escreval("Novo preço: R$",p)
     fimse
   fimse
   se (c=2) entao
      escreval("Percentual de aumento - 8%: R$",p*0.08)
      escreval("Imposto - 5%: R$",p*0.05)
      p <- p*1.03
      escreval("Novo preço: R$",p)
   fimse
   se (c=3) entao
      escreval("Percentual de aumento - 10%: R$",p*0.10)
      se(s="r") entao
        escreval("Imposto - 5%: R$",p*0.05)
        p <- p*1.05
        escreval("Novo preço: R$",p)
      senao
        escreval("Imposto - 8%: R$",p*0.08)
        p <- p*1.02
        escreval("Novo preço: R$",p)
      fimse
   fimse
fimse

se ( p > 25) entao
   se (c=1) entao
      escreval("Percentual de aumento - 12%: R$",p*0.12)
      se(s="r") entao
        escreval("Imposto - 5%: R$",p*0.05)
        p <- p* 1.07
        escreval("Novo preço: R$",p)
      senao
        escreval("Imposto - 8%: R$",p*0.08)
        p <- p*1.04
        escreval("Novo preço: R$",p)
      fimse
   fimse
   se (c=2) entao
      escreval("Percentual de aumento - 15%: R$",p*0.15)
      escreval("Imposto - 5%: R$",p*0.05)
      p <- p*1.10
      escreval("Novo preço: R$",p)
   fimse

   se (c=3) entao
      escreva("Percentual de aumento - 18%: R$",p*0.18)
      se(s="r") entao
        escreval("Imposto - 5%: R$",p*0.05)
        p <- p*1.13
        escreval("Novo preço: R$",p)
      senao
        escreval("Imposto - 8%: R$",p*0.08)
        p <- p*1.10
        escreval("Novo preço: R$",p)
      fimse
   fimse
fimse

escreval

se ( p <=50) entao
   escreva("Classificação: Barato")
senao
se ( p >50) e ( p <=120) entao
   escreva("Classificação: Normal")
senao
se ( p >=120) entao
      escreva("Classificação: Caro")
senao
fimse
fimse
fimse




Fimalgoritmo