Algoritmo "Exercício 25"

Var

he,hf,h: real
Inicio
escreval("Algoritmo - Gratificação de natal")
escreval

//ENTRADA
escreva("Digite o número de horas extras trabalhadas:")
leia(he)
escreva("Digite o número de horas-falta:")
leia(hf)

//PROCESSAMENTO
h <- he-((2*hf)/3)

//SAÍDA
se (h < 600) entao
   escreva("Gratificação: R$100,00")
   senao
   se (h >= 600) e (h<1200) entao
      escreva("Gratificação: R$200,00")
      senao
      se (h >= 1200) e (h<=1800) entao
         escreva("Gratificação: R$300,00")
         senao
         se (h >= 1800) e (h<2400) entao
            escreva("Gratificação: R$400,00")
            senao
            se (h > 2400) entao
            escreva("Gratificação: R$500,00")
            fimse
         fimse
      fimse
   fimse
fimse



Fimalgoritmo