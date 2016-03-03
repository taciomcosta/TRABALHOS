Algoritmo "jogoForca"

Var

   p,i,j,d: caractere
   c1,c2,c3,c4,c5,c6,c7,c8,c9,c10: caractere
   h1,h2,h3,h4,h5,h6,h7,h8,h9,h10: caractere
   //pc: vetor [1 .. 10] de inteiro
   pc,c: vetor [1 .. 10] de caractere
   k,cont:inteiro

Inicio

   escreval ("Jogo da forca - para 2 ou mais jogadores ")
   escreval
   escreval

   escreva("Jogador 1, digite o número de letras da sua palavra: ")
   leia(i)
   escreval

   escreva("Jogador 1, digite sua palavra: ")
   leia(p)
   escreval

   escreva("Jogador 1, deseja incluir uma dica? (S/N)")
   leia(d)
   escolha d

   caso "s"

      escreva("Jogador 1, digite uma dica: ")

      leia(d)


   caso "n"
      d <- "nenhuma"
   fimescolha

   limpatela
   c1<-" _ "
   c2<-"_ "
   c3<-"_ "
   c4<-"_ "
   c5<-"_ "
   c6<-"_ "
   c7<-"_ "
   c8<-"_ "
   c9<-"_ "
   c10<-"_ "
   escolha i
   caso "10"
   cont <-  1
   para k de 1 ate 10 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)
   caso "9"
      cont <-  1
      para k de 1 ate 9 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9)

   caso "8"
cont <-  1
      para k de 1 ate 8 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8)


   caso "7"
cont <-  1
      para k de 1 ate 7 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7)


   caso "6"
cont <-  1
      para k de 1 ate 6 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5,c6)


   caso "5"
cont <-  1
      para k de 1 ate 5 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3,c4,c5)

   caso "4"
cont <-  1
      para k de 1 ate 4 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara

      escreva("PALAVRA:",c1,c2,c3,c4)


   caso "3"
cont <-  1
      para k de 1 ate 3 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2,c3)


   caso "2"
cont <-  1
      para k de 1 ate 2 faca

      c[k] <- copia(p,cont,1)
      cont <- cont+1

      fimpara
      escreva("PALAVRA:",c1,c2)


   fimescolha
   escreval
   escreval("Dica: ",d)
   escreval

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
   escreval("Jogador 2, digite uma letra: ")
   leia(h1)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h1=c[k]) entao
        se (cont=1) entao
        
             c1 <- h1
        fimse
        
        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse
        se (cont=6) entao

             c6 <- h1
        fimse
        se (cont=7) entao

             c7 <- h1
        fimse
        se (cont=8) entao

             c8 <- h1
        fimse
        se (cont=9) entao

             c9 <- h1
        fimse
        se (cont=10) entao

             c10 <- h1
        fimse


        fimse
  fimpara
  fimse
  
  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse
        se (cont=6) entao

             c6 <- h1
        fimse
        se (cont=7) entao

             c7 <- h1
        fimse
        se (cont=8) entao

             c8 <- h1
        fimse
        se (cont=9) entao

             c9 <- h1
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse
        se (cont=6) entao

             c6 <- h1
        fimse
        se (cont=7) entao

             c7 <- h1
        fimse
        se (cont=8) entao

             c8 <- h1
        fimse

                           fimse
  fimpara
  fimse
  
  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse
        se (cont=6) entao

             c6 <- h1
        fimse
        se (cont=7) entao

             c7 <- h1
        fimse

                      fimse
  fimpara
  fimse
  
  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse
        se (cont=6) entao

             c6 <- h1
        fimse

                 fimse
  fimpara
  fimse
  

  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse
        se (cont=5) entao

             c5 <- h1
        fimse

            fimse
  fimpara
  fimse
  

  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
        se (cont=4) entao

             c4 <- h1
        fimse

   fimse
  fimpara
  fimse
  

  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse
        se (cont=3) entao

             c3 <- h1
        fimse
       fimse
  fimpara
  fimse
  

  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h1=c[k]) entao
        se (cont=1) entao

             c1 <- h1
        fimse

        se (cont=2) entao

             c2 <- h1
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)


        escreval("Jogador 2, digite uma letra: ")
   leia(h2)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse
        se (cont=6) entao

             c6 <- h2
        fimse
        se (cont=7) entao

             c7 <- h2
        fimse
        se (cont=8) entao

             c8 <- h2
        fimse
        se (cont=9) entao

             c9 <- h2
        fimse
        se (cont=10) entao

             c10 <- h2
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse
        se (cont=6) entao

             c6 <- h2
        fimse
        se (cont=7) entao

             c7 <- h2
        fimse
        se (cont=8) entao

             c8 <- h2
        fimse
        se (cont=9) entao

             c9 <- h2
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse
        se (cont=6) entao

             c6 <- h2
        fimse
        se (cont=7) entao

             c7 <- h2
        fimse
        se (cont=8) entao

             c8 <- h2
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse
        se (cont=6) entao

             c6 <- h2
        fimse
        se (cont=7) entao

             c7 <- h2
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse
        se (cont=6) entao

             c6 <- h2
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse
        se (cont=5) entao

             c5 <- h2
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
        se (cont=4) entao

             c4 <- h2
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse
        se (cont=3) entao

             c3 <- h2
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h2=c[k]) entao
        se (cont=1) entao

             c1 <- h2
        fimse

        se (cont=2) entao

             c2 <- h2
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h3)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse
        se (cont=6) entao

             c6 <- h3
        fimse
        se (cont=7) entao

             c7 <- h3
        fimse
        se (cont=8) entao

             c8 <- h3
        fimse
        se (cont=9) entao

             c9 <- h3
        fimse
        se (cont=10) entao

             c10 <- h3
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse
        se (cont=6) entao

             c6 <- h3
        fimse
        se (cont=7) entao

             c7 <- h3
        fimse
        se (cont=8) entao

             c8 <- h3
        fimse
        se (cont=9) entao

             c9 <- h3
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse
        se (cont=6) entao

             c6 <- h3
        fimse
        se (cont=7) entao

             c7 <- h3
        fimse
        se (cont=8) entao

             c8 <- h3
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse
        se (cont=6) entao

             c6 <- h3
        fimse
        se (cont=7) entao

             c7 <- h3
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse
        se (cont=6) entao

             c6 <- h3
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse
        se (cont=5) entao

             c5 <- h3
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
        se (cont=4) entao

             c4 <- h3
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse
        se (cont=3) entao

             c3 <- h3
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h3=c[k]) entao
        se (cont=1) entao

             c1 <- h3
        fimse

        se (cont=2) entao

             c2 <- h3
        fimse

   fimse
  fimpara
  
     escreval("Jogador 2, digite uma letra: ")
   leia(h4)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse
        se (cont=6) entao

             c6 <- h4
        fimse
        se (cont=7) entao

             c7 <- h4
        fimse
        se (cont=8) entao

             c8 <- h4
        fimse
        se (cont=9) entao

             c9 <- h4
        fimse
        se (cont=10) entao

             c10 <- h4
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse
        se (cont=6) entao

             c6 <- h4
        fimse
        se (cont=7) entao

             c7 <- h4
        fimse
        se (cont=8) entao

             c8 <- h4
        fimse
        se (cont=9) entao

             c9 <- h4
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse
        se (cont=6) entao

             c6 <- h4
        fimse
        se (cont=7) entao

             c7 <- h4
        fimse
        se (cont=8) entao

             c8 <- h4
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse
        se (cont=6) entao

             c6 <- h4
        fimse
        se (cont=7) entao

             c7 <- h4
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse
        se (cont=6) entao

             c6 <- h4
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse
        se (cont=5) entao

             c5 <- h4
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
        se (cont=4) entao

             c4 <- h4
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse
        se (cont=3) entao

             c3 <- h4
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h4=c[k]) entao
        se (cont=1) entao

             c1 <- h4
        fimse

        se (cont=2) entao

             c2 <- h4
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)



fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h5)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse
        se (cont=6) entao

             c6 <- h5
        fimse
        se (cont=7) entao

             c7 <- h5
        fimse
        se (cont=8) entao

             c8 <- h5
        fimse
        se (cont=9) entao

             c9 <- h5
        fimse
        se (cont=10) entao

             c10 <- h5
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse
        se (cont=6) entao

             c6 <- h5
        fimse
        se (cont=7) entao

             c7 <- h5
        fimse
        se (cont=8) entao

             c8 <- h5
        fimse
        se (cont=9) entao

             c9 <- h5
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse
        se (cont=6) entao

             c6 <- h5
        fimse
        se (cont=7) entao

             c7 <- h5
        fimse
        se (cont=8) entao

             c8 <- h5
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse
        se (cont=6) entao

             c6 <- h5
        fimse
        se (cont=7) entao

             c7 <- h5
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse
        se (cont=6) entao

             c6 <- h5
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse
        se (cont=5) entao

             c5 <- h5
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
        se (cont=4) entao

             c4 <- h5
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse
        se (cont=3) entao

             c3 <- h5
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h5=c[k]) entao
        se (cont=1) entao

             c1 <- h5
        fimse

        se (cont=2) entao

             c2 <- h5
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h6)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse
        se (cont=6) entao

             c6 <- h6
        fimse
        se (cont=7) entao

             c7 <- h6
        fimse
        se (cont=8) entao

             c8 <- h6
        fimse
        se (cont=9) entao

             c9 <- h6
        fimse
        se (cont=10) entao

             c10 <- h6
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse
        se (cont=6) entao

             c6 <- h6
        fimse
        se (cont=7) entao

             c7 <- h6
        fimse
        se (cont=8) entao

             c8 <- h6
        fimse
        se (cont=9) entao

             c9 <- h6
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse
        se (cont=6) entao

             c6 <- h6
        fimse
        se (cont=7) entao

             c7 <- h6
        fimse
        se (cont=8) entao

             c8 <- h6
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse
        se (cont=6) entao

             c6 <- h6
        fimse
        se (cont=7) entao

             c7 <- h6
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse
        se (cont=6) entao

             c6 <- h6
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse
        se (cont=5) entao

             c5 <- h6
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
        se (cont=4) entao

             c4 <- h6
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse
        se (cont=3) entao

             c3 <- h6
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h6=c[k]) entao
        se (cont=1) entao

             c1 <- h6
        fimse

        se (cont=2) entao

             c2 <- h6
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h7)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse
        se (cont=6) entao

             c6 <- h7
        fimse
        se (cont=7) entao

             c7 <- h7
        fimse
        se (cont=8) entao

             c8 <- h7
        fimse
        se (cont=9) entao

             c9 <- h7
        fimse
        se (cont=10) entao

             c10 <- h7
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse
        se (cont=6) entao

             c6 <- h7
        fimse
        se (cont=7) entao

             c7 <- h7
        fimse
        se (cont=8) entao

             c8 <- h7
        fimse
        se (cont=9) entao

             c9 <- h7
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse
        se (cont=6) entao

             c6 <- h7
        fimse
        se (cont=7) entao

             c7 <- h7
        fimse
        se (cont=8) entao

             c8 <- h7
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse
        se (cont=6) entao

             c6 <- h7
        fimse
        se (cont=7) entao

             c7 <- h7
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse
        se (cont=6) entao

             c6 <- h7
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse
        se (cont=5) entao

             c5 <- h7
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
        se (cont=4) entao

             c4 <- h7
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse
        se (cont=3) entao

             c3 <- h7
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h7=c[k]) entao
        se (cont=1) entao

             c1 <- h7
        fimse

        se (cont=2) entao

             c2 <- h7
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h8)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse
        se (cont=6) entao

             c6 <- h8
        fimse
        se (cont=7) entao

             c7 <- h8
        fimse
        se (cont=8) entao

             c8 <- h8
        fimse
        se (cont=9) entao

             c9 <- h8
        fimse
        se (cont=10) entao

             c10 <- h8
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse
        se (cont=6) entao

             c6 <- h8
        fimse
        se (cont=7) entao

             c7 <- h8
        fimse
        se (cont=8) entao

             c8 <- h8
        fimse
        se (cont=9) entao

             c9 <- h8
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse
        se (cont=6) entao

             c6 <- h8
        fimse
        se (cont=7) entao

             c7 <- h8
        fimse
        se (cont=8) entao

             c8 <- h8
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse
        se (cont=6) entao

             c6 <- h8
        fimse
        se (cont=7) entao

             c7 <- h8
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse
        se (cont=6) entao

             c6 <- h8
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse
        se (cont=5) entao

             c5 <- h8
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
        se (cont=4) entao

             c4 <- h8
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse
        se (cont=3) entao

             c3 <- h8
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h8=c[k]) entao
        se (cont=1) entao

             c1 <- h8
        fimse

        se (cont=2) entao

             c2 <- h8
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

        escreval("Jogador 2, digite uma letra: ")
   leia(h9)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse
        se (cont=6) entao

             c6 <- h9
        fimse
        se (cont=7) entao

             c7 <- h9
        fimse
        se (cont=8) entao

             c8 <- h9
        fimse
        se (cont=9) entao

             c9 <- h9
        fimse
        se (cont=10) entao

             c10 <- h9
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse
        se (cont=6) entao

             c6 <- h9
        fimse
        se (cont=7) entao

             c7 <- h9
        fimse
        se (cont=8) entao

             c8 <- h9
        fimse
        se (cont=9) entao

             c9 <- h9
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse
        se (cont=6) entao

             c6 <- h9
        fimse
        se (cont=7) entao

             c7 <- h9
        fimse
        se (cont=8) entao

             c8 <- h9
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse
        se (cont=6) entao

             c6 <- h9
        fimse
        se (cont=7) entao

             c7 <- h9
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse
        se (cont=6) entao

             c6 <- h9
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse
        se (cont=5) entao

             c5 <- h9
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
        se (cont=4) entao

             c4 <- h9
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse
        se (cont=3) entao

             c3 <- h9
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h9=c[k]) entao
        se (cont=1) entao

             c1 <- h9
        fimse

        se (cont=2) entao

             c2 <- h9
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

     
        escreval("Jogador 2, digite uma letra: ")
   leia(h10)

   j <- i
      cont <- cont -1
   se (cont =10) entao
   cont <- 1
  para k de 1 ate 10 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse
        se (cont=6) entao

             c6 <- h10
        fimse
        se (cont=7) entao

             c7 <- h10
        fimse
        se (cont=8) entao

             c8 <- h10
        fimse
        se (cont=9) entao

             c9 <- h10
        fimse
        se (cont=10) entao

             c10 <- h10
        fimse


        fimse
  fimpara
  fimse

  se (cont =9) entao
   cont <- 1
  para k de 1 ate 9 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse
        se (cont=6) entao

             c6 <- h10
        fimse
        se (cont=7) entao

             c7 <- h10
        fimse
        se (cont=8) entao

             c8 <- h10
        fimse
        se (cont=9) entao

             c9 <- h10
        fimse


         fimse

  fimpara
  fimse
  se (cont =8) entao
   cont <- 1
  para k de 1 ate 8 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse
        se (cont=6) entao

             c6 <- h10
        fimse
        se (cont=7) entao

             c7 <- h10
        fimse
        se (cont=8) entao

             c8 <- h10
        fimse

                           fimse
  fimpara
  fimse

  se (cont =7)      entao
   cont <- 1
  para k de 1 ate 7 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse
        se (cont=6) entao

             c6 <- h10
        fimse
        se (cont=7) entao

             c7 <- h10
        fimse

                      fimse
  fimpara
  fimse

  se (cont =6)       entao
   cont <- 1
  para k de 1 ate 6 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse
        se (cont=6) entao

             c6 <- h10
        fimse

                 fimse
  fimpara
  fimse


  se (cont =5)            entao
   cont <- 1
  para k de 1 ate 5 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse
        se (cont=5) entao

             c5 <- h10
        fimse

            fimse
  fimpara
  fimse


  se (cont =4)                      entao
   cont <- 1
  para k de 1 ate 4 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
        se (cont=4) entao

             c4 <- h10
        fimse

   fimse
  fimpara
  fimse


  se (cont =3)                 entao
   cont <- 1
  para k de 1 ate 3 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse
        se (cont=3) entao

             c3 <- h10
        fimse
       fimse
  fimpara
  fimse


  se (cont =2)           entao
   cont <- 1
  para k de 1 ate 2 faca
   se (h10=c[k]) entao
        se (cont=1) entao

             c1 <- h10
        fimse

        se (cont=2) entao

             c2 <- h10
        fimse

   fimse
  fimpara


fimse

     escreva("PALAVRA:",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10)

Fimalgoritmo