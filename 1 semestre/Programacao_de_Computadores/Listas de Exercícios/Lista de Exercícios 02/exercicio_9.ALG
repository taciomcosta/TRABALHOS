Algoritmo "Exerc�cio 9"

Var
sm: real

Inicio
escreval("Algoritmo - Cr�dito especial")
escreval

//ENTRADA
escreva("Digite o saldo m�dio do �ltimo ano: ")
leia(sm)

//PROCESSAMENTO e SA�DA
escreval
se (sm<=200) entao
   escreval("Saldo m�dio: R$",sm)
   escreval("Cr�dito: R$",sm*0.10)
   escreval("Saldo final: R$",sm*1.10)
senao
se (sm>200) e (sm<=300) entao
   escreval("Saldo m�dio: R$",sm)
   escreval("Cr�dito: R$",sm*0.20)
   escreval("Saldo final: R$",sm*1.20)
senao
se (sm>300) e (sm<=400) entao
   escreval("Saldo m�dio: R$",sm)
   escreval("Cr�dito: R$",sm*0.25)
   escreval("Saldo final: R$",sm*1.25)
senao
se (sm>400) entao
   escreval("Saldo m�dio: R$",sm)
   escreval("Cr�dito: R$",sm*0.30)
   escreval("Saldo final: R$",sm*1.30)
fimse
fimse
fimse
fimse





Fimalgoritmo