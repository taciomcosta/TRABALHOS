Algoritmo "Algoritmo - Reprova��o ou n�o"

Var
m,f,i,rep,repF,pauser:inteiro
n1,n2,n3,med,max,min:real
mens:caractere //MEU VISUALG N�O ACEITA 'LITERAL' COMO TIPO DE DADO

Inicio
i <- 1
max <- 0
min <- 10
para i de 1 ate 10 passo 1 faca
     //ENTRADA
     escreva("Insira o n�mero de matr�cula do aluno",i,": ")
     leia(m)
     escreva("Insira o n�mero de aulas comparecido: ")
     leia(f)
     escreva("Digite a 1� nota do aluno: ")
     leia(n1)
     escreva("Digite a 2� nota do aluno: ")
     leia(n2)
     escreva("Digite a 3� nota do aluno: ")
     leia(n3)
     //PROCESSAMENTO
     med <- (n1+n2+n3)/3
     se (med<6) ou (f<40) entao
        rep <- rep+1
        mens <- "ALUNO REPROVADO"
        se (f<40) entao
           repF <- repF + 1
        fimse
     senao
          mens <- "ALUNO APROVADO"
     fimse
     se (n1>max) entao
        max <-n1
     fimse
     se (n3>max) entao
        max <-n2
     fimse
     se (n3>max) entao
        max <-n3
     fimse
     se (n1<min) entao
        min <-n1
     fimse
     se (n2<min) entao
        min <-n1
     fimse
     se (n3<min) entao
        min <-n1
     fimse
     //SA�DA
     escreval("-----------------------")
     escreval
     escreval("N� de matr�cula: ",m)
     escreval("Nota final: ",med:2:2)
     escreval(mens)
     escreval("Pressione ENTER para prosseguir")
     leia(pauser)
     limpatela
fimpara
escreval
escreval("Maior nota da sala: ",max)
escreval("Menor nota da sala: ",min)
escreval("Alunos reprovados: ",rep)
escreval("Alunos reprovados por frequ�ncia nas aulas: ",repF*100/10)


Fimalgoritmo