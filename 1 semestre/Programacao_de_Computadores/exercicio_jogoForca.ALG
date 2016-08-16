Algoritmo "Jogo da Forca"

Var
j1,j2,palavra:caractere
i: inteiro //contador do cp
ir: inteiro // i reserva
nc: inteiro // número de caracteres da palavra
cp: vetor [1..14] de caractere  //vetor para separar cada caractere da Palavra
r: vetor [1..14] de caractere // vetor da resposta
lde,ldc: vetor [1..10] de caractere // vetor das letras digitadas
x: caractere // digitado pelo jogador 2
erro: inteiro // numero de tentativas que ainda restam
cont: inteiro // usada para mostrar se o X já foi verdadeiro alguma vez
cont2: inteiro // valida se o jogador 2 ganhou ou não
dica: caractere

Inicio
escreval("Jogo da Forca")
escreval
//ENTRADA
escreva("Jogador 1, insira seu nome: ")
leia(j1)
escreva("Jogador 2, insira seu nome: ")
leia(j2)

escreva(j1, ", digite uma palavra de até 14 letras: ")
leia(palavra)
limpatela

escreva( j1, ", deseja incluir dica (s/n)? ")
leia(dica)
se (dica="s") entao
   escreva("Digite uma palavra para a dica (ex: ANIMAL) : ")
   leia(dica)
   senao
   dica <- "Nenhuma"
fimse

//ATRIBUINDO CADA CARACTERE PARA UMA VARIÁVEL
i <- 1
enquanto (i<14) faca
         cp[i] <- copia(palavra,i,1)
         i <- i+1
fimenquanto

//CONTANDO O NÚMERO DE CARACTERES DA PALAVRA
i <- 1
nc <- 0
enquanto (cp[i]<>"") faca
         nc <- i
         i <- i+1
fimenquanto

//ATRIBUINDO "_" ao vetor r
ir <- nc
i <- nc
i <- 1
enquanto (i <= nc) faca
         r[i] <- " _ "
         i <- i+1
fimenquanto

//CONTAGEM DAS CHANCES
i <- 1
erro <- 10
enquanto (erro > 0) faca
          limpatela
          escreval("---- Jogo da Forca ----")
          //SE NÃO HOUVER x NA PALAVRA
          i <- 1
          se (cont=1) entao
             erro <- erro -1
             escolha erro
                     caso 10
                          escreval("           ________________")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 9
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 8
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 7
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 6
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 5
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 4
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 3
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 2
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval("	        |        |   |")
                          escreval("                |        |   |")
                          escreval
                          escreval
                     caso 1
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval("	        |        |   |")
                          escreval("                |        |   |")
                          escreval("                |        O   O")
                          escreval("      __________|__________")
//CASO O JOGADOR PERCA TODAS TENTATIVAS
                     caso 0
                          limpatela
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | x < x |")
                          escreval("	        |      |___o___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval("	        |        |   |")
                          escreval("                |        |   |")
                          escreval("                |        O   O")
                          escreval("      __________|__________")
                          escreval
                          escreva(j1," é o vencedor!!!")
                          fimalgoritmo
             fimescolha
             escreval("Não há '",x,"' na palavra!")
             enquanto (lde[i] <> "") faca
                      i <- i+1
             fimenquanto
             lde[i] <- x
          fimse
          // SE HOUVER X NA PALAVRA
          i <- 1
          se (cont=0) entao
             escolha erro
                     caso 10
                          escreval("           ________________")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 9
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 8
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 7
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 6
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 5
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 4
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                          escreval
                     caso 3
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval
                          escreval
                          escreval
                          escreval

                     caso 2
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval("	        |        |   |")
                          escreval("                |        |   |")
                          escreval
                          escreval
                     caso 1
                          escreval("           ________________")
                          escreval(" 	        |          |      ")
                          escreval("	        |       ___|___")
                          escreval("	        |      | o < o |")
                          escreval("	        |      |___u___|")
                          escreval("	        |    O     |     O")
                          escreval("	        |    |  ___|___  |")
                          escreval("	        |    | |       | |")
                          escreval("	        |     \|       |/")
                          escreval("	        |      |_______|")
                          escreval("	        |        |   |")
                          escreval("                |        |   |")
                          escreval("                |        O   O")
                          escreval("      __________|__________")
             fimescolha
             enquanto (ldc[i] <> "") faca
                      i <- i+1
             fimenquanto
             ldc[i] <- x
          fimse
          //EXIBINDO A PALAVRA
          i <- 1
          escreva("PALAVRA: ")
          enquanto (i <= nc) faca
                   escreva(r[i])
                   i <- i+1
          fimenquanto
          // CASO O JOGADOR VENÇA
          i <- 1
          cont2 <-1
          enquanto (i<14) faca
                   ir <-i
                   se (r[i]=cp[i]) entao
                      i <- i+1
                      cont2 <- cont2 +1
                   fimse
                   se (ir=i) entao
                      i <- 14
                   fimse
          fimenquanto
          se (cont2 = 14) entao
              limpatela
                               escreval
                               escreval(j2, " é o vencedor!!!")
                               escreval("PALAVRA: ",palavra)
                               escreval
                               escreval
                               fimalgoritmo
          fimse
          //EXIBINDO AS LETRAS DIGITADAS
          i <- 1
          escreval
          escreval
          escreva("Letras digitadas: ")
          enquanto (i<=10) e ((lde[i]<>"") ou (ldc[i]<>""))faca
                   se (lde[i]<>"") entao
                      escreva(lde[i])
                      escreva(" ")
                      senao
                           escreva(lde[i])
                   fimse
                   se (ldc[i]<>"") entao
                      escreva(ldc[i])
                      escreva(" ")
                      senao
                      escreva(ldc[i])
                   fimse
                   i <- i+1
          fimenquanto
          escreval
          escreval
          //EXIBINDO A DICA
          escreva("DICA: ",dica)
          escreval
          // COMPARAÇÃO
          escreva(j2,", digite uma letra: ")
          leia(x)
          escreval
          escreval
          i <- 1
          cont <- 2
          enquanto (i <= nc) faca
                   se (x = cp[i]) e (cp[i] <> "") e (cp[i] <> " _ ") entao
                      r[i] <- cp [i]
                      cont <- 0
                      senao
                      se (cont=2) entao
                      cont <- 1
                      fimse
                   fimse
                   i <- i+1
          fimenquanto
fimenquanto
Fimalgoritmo