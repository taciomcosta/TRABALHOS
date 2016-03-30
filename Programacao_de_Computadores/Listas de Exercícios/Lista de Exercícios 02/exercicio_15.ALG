Algoritmo "Exercício 15"

Var
v: real
op: inteiro

Inicio
escreval("Algoritmo - Tipo de investimento")
escreval

//ENTRADA
escreva("Digite o valor do investimento:")
leia(v)
escreval
escreval("1. Poupança")
escreval("2. Fundos de renda fixa")
escreva("Digite o tipo de investimento:")
leia(op)

//PROCESSAMENTO e SAÍDA
escreval
se ( op=1) entao
   escreval ("Valor corrigido de acordo com o tipo de investimento: R$",v*1.03)
   escreval ("Rendimento mensal de 3%: R$",v*0.03)
fimse
se ( op=2) entao
      escreval ("Valor corrigido de acordo com o tipo de investimento: R$",v*1.04)
   escreval ("Rendimento mensal de 3%: R$",v*0.04)
fimse



fimalgoritmo