Algoritmo "Exerc�cio 21"

Var
ht,he,sm,sb,sf: real

Inicio
escreval("Algoritmo - Sal�rio a receber")
escreval

//ENTRADA
escreva("Digite as horas trabalhadas: ")
leia(ht)
escreva("Digite as horas extras trabalhadas: ")
leia(he)
escreva("Digite o valor do sal�rio m�nimo: ")
leia(sm)

//PROCESSAMENTO
sb <- ht
ht <- ht*(sm/8)
he <- he*(he*sm/4)
sb <- sb*ht
sf <- sb+he


//SA�DA
escreval
escreval("O sal�rio a receber �: R$",sf:7:2)





Fimalgoritmo