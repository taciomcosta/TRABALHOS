algoritmo "Algoritmo - Reajuste salarial"

var
nome: literal
s: real
inicio
escreval("Algoritmo - Reajuste salarial")
escreval
//ENTRADA
escreva("Digite o nome do funcion�rio: ")
leia(nome)
escreva("Digite o sal�rio do funcion�rio:")
leia(s)
escreval
//PROCESSAMENTO
se ( s < 2500) entao
   s <- s*1.30
//SA�DA
   escreval("O funcion�rio ",nome," possui o direito de 30% de aumento salarial")
   escreval("Novo sal�rio: R$ ",s)
   senao
        escreval("O funcion�rio n�o possui o direito ao aumento salarial")
fimse

fimalgoritmo
