Algoritmo "Tabela de Cargos e Sal�rios com Registro"

tipo
    TABELA = registro
                     cod:inteiro
                     cargo:caractere
                     sal:real
             fimregistro
Var
dado:vetor [1..17] de TABELA
i,j:inteiro
pes:caractere
achou:logico

Inicio
escreval("Tabela de Cargos e Sal�rios com Registro")
escreval
//ENTRADA
para i de 1 ate 17 passo 1 faca
     limpatela
     dado[i].cod <- i
     escreva("Insira um cargo para o c�digo",dado[i].cod,": ")
     leia(dado[i].cargo)
     escreval
     escreva("Insira um sal�rio para o cargo: ")
     leia(dado[i].sal)
     escreval
fimpara
//PROCESSAMENTO E SA�DA
pes <- "sim"
enquanto (pes="sim") faca
         j <- 0
         i <- 1
         achou <- falso
         limpatela
         enquanto ((j<1) ou (j>18)) faca
                  escreva("Pesquisa por um c�digo:")
                  leia(j)
                  se (j<1) ou (j>18) entao
                     escreval("C�digo inv�lido, insira um c�digo entre 1 e 18")
                  fimse
                  se(j=18) entao
                           i <- 18
                           j <- 1
                           para j de 1 ate 17 passo 1 faca
                                escreval("C�DIGO: ",dado[j].cod)
                                escreval("CARGO: ",dado[j].cargo)
                                escreval("SAL�RIO: ",dado[j].sal)
                                escreval
                                escreval
                           fimpara
                           
                  fimse
         fimenquanto
         enquanto (i<=17) e (achou=falso) faca
              se (dado[i].cod=j) entao
                 achou <- verdadeiro
                 j <- 18
              senao
                   i<-i+1
              fimse
         fimenquanto
         se (achou=verdadeiro) entao
            escreval("Registro localizado!")
            escreval("C�digo:",dado[i].cod)
            escreval("Cargo:",dado[i].cargo)
            escreval("Sal�rio:",dado[i].sal)
         senao
              escreval("C�digo n�o localizado")
         fimse
         escreva("Deseja continuar pesquisando(sim/nao)? ")
         leia(pes)
fimenquanto
Fimalgoritmo