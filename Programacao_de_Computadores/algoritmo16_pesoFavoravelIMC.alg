algoritmo "Algoritmo = Peso fávoravel (IMC)"

var
imc,p,h: real
inicio
escreval("Algoritmo = Peso fávoravel (IMC)")
escreval

//ENTRADA
escreva("Digite a sua altura em metros: ")
leia(h)
escreval
escreva("Digite o seu peso em kg: ")
leia(p)
escreval

//PROCESSAMENTO
imc <- p / h^2

//SAÍDA
se (imc <= 20) entao
   escreval("IMC = ",imc:3:2," - Abaixo do Peso")
fimse
se (imc > 20) e (imc <= 25) entao
   escreval("IMC = ",imc:3:2," - Peso Normal")
fimse
se (imc > 25) e (imc <= 30) entao
   escreval("IMC = ",imc:3:2," - Sobrepeso")
fimse
se (imc > 30) e (imc <= 40) entao
   escreval("IMC = ",imc:3:2," - Obeso")
fimse
se (imc > 40) entao
   escreval("IMC = ",imc:3:2," - Obeso Mórbido")
fimse
fimalgoritmo
