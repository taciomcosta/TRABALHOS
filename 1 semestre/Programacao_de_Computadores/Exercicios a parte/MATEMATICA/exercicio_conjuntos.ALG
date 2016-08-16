Algoritmo "Conjuntos"

Var
   a1,a2,a3,b1,b2,b3,res:inteiro


Inicio

   //ENTRADAS
   escreval("Algoritmo de Conjuntos")
   escreval

   escreva("Digite 3 valores para o conjunto A:")
   leia (a1,a2,a3)
   escreval

   escreva("Digite 3 valores para o conjunto B:")
   leia (b1,b2,b3)
   escreval

   escreval ("1. Reunião")
   escreval ("2. Intersecção ")
   escreval

   escreva ("Digite o número da operação deseja fazer: ")
   leia (res)
   escreval

   //PROCESSAMENTO

   //REUNIÃO
   se (res=1) entao

      escreval ("--------------------- Reunião ---------------------")
      escreval

      escreva ("{ ")

      se ((a1=b1) ou (a1=b2) ou (a1=b3)) entao

         escreva (a1,",")
      senao

         escreva (a1,",")
      fimse


      se ((a2=b1) ou (a2=b2) ou (a2=b3)) entao

         escreva (a2,",")
      senao
         escreva
         escreva (a2,",")
      fimse


      se ((a3=b1) ou (a3=b2) ou (a3=b3)) entao

         escreva (a3,",")
      senao
         escreva
         escreva (a3,",")
      fimse

      escreva (" }")



   fimse

   //INTERSEÇÃO
   se (res=2)entao

      escreval ("--------------------- Interseção ---------------------")
      escreval

      escreva( "A interseção B = { ")


// INTERSEÇÃO - elemento a1

      se ((a1=b1) e (a1<>b2) e (a1<>b3)) entao
         escreva(a1,",")
      fimse
      

      se ((a1<>b1) e (a1=b2) e (a1<>b3)) entao
         escreva(a1,",")
      fimse
      
      se ((a1<>b1) e (a1<>b2) e (a1=b3)) entao
         escreva(a1,",")
      fimse
      
// INTERSEÇÃO - elemento a1
      
      se ((a2=b1) e (a2<>b2) e (a2<>b3)) entao
         escreva(a2,",")
      fimse


      se ((a2<>b1) e (a2=b2) e (a2<>b3)) entao
         escreva(a2,",")
      fimse

      se ((a2<>b1) e (a2<>b2) e (a2=b3)) entao
         escreva(a2,",")
      fimse
      
// INTERSEÇÃO - elemento a3

      se ((a3=b1) e (a3<>b2) e (a3<>b3)) entao
         escreva(a3,",")
      fimse


      se ((a3<>b1) e (a3=b2) e (a3<>b3)) entao
         escreva(a3,",")
      fimse

      se ((a3<>b1) e (a3<>b2) e (a3=b3)) entao
         escreva(a3,",")
      fimse


          escreva (" }")





   fimse







Fimalgoritmo
