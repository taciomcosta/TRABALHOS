algoritmo "Algoritmo - Reajuste salarial"

var
nome: literal
s: real
inicio
escreval("Algoritmo - Reajuste salarial")
escreval
//ENTRADA
escreva("Digite o nome do funcionário: ")
leia(nome)
escreva("Digite o salário do funcionário:")
leia(s)
escreval
//PROCESSAMENTO
se ( s < 2500) entao
   s <- s*1.30
//SAÍDA
   escreval("O funcionário ",nome," possui o direito de 30% de aumento salarial")
   escreval("Novo salário: R$ ",s)
   senao
        escreval("O funcionário não possui o direito ao aumento salarial")
fimse

fimalgoritmo
