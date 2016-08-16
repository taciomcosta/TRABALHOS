Algoritmo "Algoritmo - Parâmetros"
//PROGRAMA PRINCIPAL:
//   -recebe um valor;
//   -envia o valor para a subrotina
//   -recebe o fatorial da subrotina
//   -exibi o fatorial ao usuário

//SUBROTINA FATORIAL
//   -recebe o valor do PROGRAMA PRINCIPAL
//   -calcula o fatorial
//   -envia o fatorial para o PROGRAMA PRINCIPAL

//SUB-ROTINA
procedimento FATORIAL (N:inteiro; var FAT:inteiro)
             var
             i:inteiro
             inicio
             FAT <- 1
             para i de 1 ate N passo 1 faca
                  FAT <- FAT * i
             fimpara
fimprocedimento

//PRINCIPAL
Var
LIMITE, RETORNO:inteiro

Inicio
escreval("Algoritmo - Fatorial com subrotina de PROCEDIMENTO e PARÂMETROS")
escreval
escreva("Digite o valor para o fatorial:")
leia(LIMITE)
//LIMITE: enviando o valor do PROGRAMA PRINCIPAL para a SUB-ROTINA
//RETORNO: recebendo o valor da sub-rotina no PROGRAMA PRINCIPAL
FATORIAL(LIMITE,RETORNO)
escreva("Fatorial:",RETORNO)


Fimalgoritmo