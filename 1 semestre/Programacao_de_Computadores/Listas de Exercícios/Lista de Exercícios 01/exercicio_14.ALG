Algoritmo "Exercício 14"

Var
aa,an,a,m,d,s: inteiro

Inicio
escreval("Algoritmo - Idade ")
escreval

//ENTRADA
escreva("Digite o seu ano de nascimento: ")
leia(an)
escreva("Digite o ano atual: ")
leia(aa)

//PROCESSAMENTO
a <- aa - an
m <- a*12
d <- m*30
s <- d\7

//SAÍDA
escreval("Sua idade em anos é aproximadamente: ",a)
escreval("Sua idade em meses é aproximadamente: ",m)
escreval("Sua idade em dias é aproximadamente: ",d)
escreval("Sua idade em semanas é aproximadamente: ",s)


Fimalgoritmo