Algoritmo "Exercício 21"

Var
ht,he,sm,sb,sf: real

Inicio
escreval("Algoritmo - Salário a receber")
escreval

//ENTRADA
escreva("Digite as horas trabalhadas: ")
leia(ht)
escreva("Digite as horas extras trabalhadas: ")
leia(he)
escreva("Digite o valor do salário mínimo: ")
leia(sm)

//PROCESSAMENTO
sb <- ht
ht <- ht*(sm/8)
he <- he*(he*sm/4)
sb <- sb*ht
sf <- sb+he


//SAÍDA
escreval
escreval("O salário a receber é: R$",sf:7:2)





Fimalgoritmo