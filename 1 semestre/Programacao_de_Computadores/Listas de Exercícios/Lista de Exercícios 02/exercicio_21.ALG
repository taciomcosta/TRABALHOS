Algoritmo "Exerc�cio 21"

Var
p: real
cod: inteiro
Inicio
escreval("Algoritmo - Proced�ncia do produto")
escreval

//ENTRADA
escreva("Digite o pre�o do produto: ")
leia(p)
escreva("Digite o c�digo do produto: ")
leia(cod)

//PROCESSAMENTO e SA�DA
escreval

se (cod = 1) entao
   escreva("Proced�ncia: Sul")

fimse

se (cod = 2) entao
   escreva("Proced�ncia: Norte")

fimse

se (cod = 3) entao
   escreva("Proced�ncia: Leste")

fimse
se (cod = 4) entao
   escreva("Proced�ncia: Oeste")

fimse
se (cod = 5) ou ( cod = 6) entao
   escreva("Proced�ncia: Nordeste")

fimse
se (cod = 7) ou (cod = 8) ou (cod = 9) entao
   escreva("Proced�ncia: Sudeste")

fimse
se (cod>=10) e (cod<=20) entao
   escreva("Proced�ncia: Centro-oeste")

fimse
se (cod>=21) e (cod<=30) entao
   escreva("Proced�ncia: Nordeste")

fimse


Fimalgoritmo