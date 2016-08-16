Algoritmo "Exercício 21"

Var
p: real
cod: inteiro
Inicio
escreval("Algoritmo - Procedência do produto")
escreval

//ENTRADA
escreva("Digite o preço do produto: ")
leia(p)
escreva("Digite o código do produto: ")
leia(cod)

//PROCESSAMENTO e SAÍDA
escreval

se (cod = 1) entao
   escreva("Procedência: Sul")

fimse

se (cod = 2) entao
   escreva("Procedência: Norte")

fimse

se (cod = 3) entao
   escreva("Procedência: Leste")

fimse
se (cod = 4) entao
   escreva("Procedência: Oeste")

fimse
se (cod = 5) ou ( cod = 6) entao
   escreva("Procedência: Nordeste")

fimse
se (cod = 7) ou (cod = 8) ou (cod = 9) entao
   escreva("Procedência: Sudeste")

fimse
se (cod>=10) e (cod<=20) entao
   escreva("Procedência: Centro-oeste")

fimse
se (cod>=21) e (cod<=30) entao
   escreva("Procedência: Nordeste")

fimse


Fimalgoritmo