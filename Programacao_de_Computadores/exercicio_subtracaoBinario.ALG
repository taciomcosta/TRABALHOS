Algoritmo "Algoritmo - Soma de Binários"
Var
n1,n2:caractere
aa,ba,ca,da,ea,fa,ga,ha: inteiro
ab,bb,cb,db,eb,fb,gb,hb:inteiro
sa,sb,sc,sd,see,sf,sg,sh: inteiro
n11,n22,n3,n4,n5,n6,n7,n8: inteiro
resa,resb:inteiro



Inicio
escreval("Algoritmo - Soma de Binários")
escreval
escreval
//ENTRADAS
escreva("Digite um número binário com 8 dígitos: ")
leia(n1)
escreva("Digite outro número binário com 8 dígitos: ")
leia(n2)
//PROCESSAMENTO
//n1
aa <- caracpnum(copia(n1,1,1))
ba <- caracpnum(copia(n1,2,1))
ca <- caracpnum(copia(n1,3,1))
da <- caracpnum(copia(n1,4,1))
ea <- caracpnum(copia(n1,5,1))
fa <- caracpnum(copia(n1,6,1))
ga <- caracpnum(copia(n1,7,1))
ha <- caracpnum(copia(n1,8,1))

resa <- aa*128 + ba*64 + ca*32 + da*16 + ea*8 + fa*4 + ga*2 + ha*1

//n2
ab <- caracpnum(copia(n2,1,1))
bb <- caracpnum(copia(n2,2,1))
cb <- caracpnum(copia(n2,3,1))
db <- caracpnum(copia(n2,4,1))
eb <- caracpnum(copia(n2,5,1))
fb <- caracpnum(copia(n2,6,1))
gb <- caracpnum(copia(n2,7,1))
hb <- caracpnum(copia(n2,8,1))

resb <- ab*128 + bb*64 + cb*32 + db*16 + eb*8 + fb*4 + gb*2 + hb*1

//armazenamento para a SAÍDA

n11 <- aa
n22 <- ba
n3 <- ca
n4 <- da
n5 <- ea
n6 <- fa
n7 <- ga
n8 <- ha


//ha
se (ha>=hb) entao
   sh <- ha-hb
senao
     se(ga=1) entao
     ga <-0
     ha <- ha+2
     sh <- ha-hb
     senao
      se(fa=1) entao
      fa <- 0
      ga <- 1
      ha <- ha+2
      sh <- ha-hb
      senao
         se(ea=1) entao
         ea <- 0
         fa <- 1
         ga <- 1
         ha <- ha+2
         sh <- ha-hb
         senao
            se(da=1) entao
            da <- 0
            ea <- 1
            fa <- 1
            ga <- 1
            ha <- ha+2
            sh <- ha-hb
            senao
               se(ca=1) entao
               ca <- 0
               da <- 1
               ea <- 1
               fa <- 1
               ga <- 1
               ha <- ha+2
               sh <- ha-hb
               senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- 1
                  da <- 1
                  ea <- 1
                  fa <- 1
                  ga <- 1
                  ha <- ha+2
                  sh <- ha-hb
                  senao
                       se(aa=1) entao
                       aa <- 0
                       ba <- 1
                       ca <- 1
                       da <- 1
                       ea <- 1
                       fa <- 1
                       ga <- 1
                       ha <- ha+2
                       sh <- ha-hb
                       fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
     fimse
fimse

//ga

se (ga>=gb) entao
   sg <- ga-gb
senao
      se(fa=1) entao
      fa <- 0
      ga <- ga+2
      sg <- ga-gb
      senao
           se(ea=1) entao
           ea <- 0
           fa <- 1
           ga <- ga+2
           sg <- ga-gb
           senao
            se(da=1) entao
            da <- 0
            ea <- 1
            fa <- 1
            ga <- ga+2
            sg <- ga-gb
            senao
               se(ca=1) entao
               ca <- 0
               da <- 1
               ea <- 1
               fa <- 1
               ga <- ga+2
               sg <- ga-gb
               senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- 1
                  da <- 1
                  ea <- 1
                  fa <- 1
                  ga <- ga+2
                  sg <- ga-gb
                  senao
                    se(aa=1) entao
                    aa <- 0
                    ba <- 1
                    ca <- 1
                    da <- 1
                    ea <- 1
                    fa <- 1
                    ga <- ga+2
                    sg <- ga-gb
                    fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
fimse


//fa

se (fa>=fb) entao
   sf <- fa-fb
senao
         se(ea=1) entao
         ea <- 0
         fa <- fa+2
         sf <- fa-fb
         senao
            se(da=1) entao
            da <- 0
            ea <- 1
            fa <- fa+2
            sf <- fa-fb
            senao
               se(ca=1) entao
               ca <- 0
               da <- 1
               ea <- 1
               fa <- fa+2
               sf <- fa-fb
               senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- 1
                  da <- 1
                  ea <- 1
                  fa <- fa+2
                  sf <- fa-fb
                  senao
                     se(aa=1) entao
                     aa <- 0
                     ba <- 1
                     ca <- 1
                     da <- 1
                     ea <- 1
                     fa <- fa+2
                     sf <- fa-fb
                     fimse
                  fimse
               fimse
            fimse
         fimse
fimse


//ea

se (ea>=eb) entao
   see <- ea-eb
senao
            se(da=1) entao
            da <- 0
            ea <- ea+2
            see <- ea-eb
            senao
               se(ca=1) entao
               ca <- 0
               da <- 1
               ea <- ea+2
               see <- ea-eb
               senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- 1
                  da <- 1
                  ea <- ea+2
                  see <- ea-eb
                  senao
                     se(aa=1) entao
                     aa <- 0
                     ba <- 1
                     ca <- 1
                     da <- 1
                     ea <- ea+2
                     see <- ea-eb
                     fimse
                  fimse
               fimse
            fimse
fimse


//da

se (da>=db) entao
   sd <- da-db
senao
               se(ca=1) entao
               ca <- 0
               da <- da+2
               sd <- da-db
               senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- 1
                  da <- da+2
                  sd <- da-db
                  senao
                     se(aa=1) entao
                     aa <- 0
                     ba <- 1
                     ca <- 1
                     da <- da+2
                     sd <- da-db
                     fimse
                  fimse
               fimse
fimse


//ca

se (ca>=cb) entao
   sc <- ca-cb
senao
                  se(ba=1) entao
                  ba <- 0
                  ca <- ca+2
                  sc <- ca-cb
                  senao
                     se(aa=1) entao
                       aa <- 0
                       ba <- 1
                       ca <- ca+2
                       sc <- ca-cb
                       fimse
                    fimse
fimse


//ba

se (ba>=bb) entao
   sb <- ba-bb
senao
   se(aa=1) entao
      aa <- 0
      ba <- ba+2
      sb <- ba-bb
   fimse
fimse

sa <- aa-ab




//SAÍDA
escreval
         escreval(" ",n11,n22,n3,n4,n5,n6,n7,n8," = ",resa)
         escreval("-")
         escreval(" ",ab,bb,cb,db,eb,fb,gb,hb," = ",resb)
         escreval("------------------------")
         escreval(sa,sb,sc,sd,see,sf,sg,sh," = ", resa-resb)
Fimalgoritmo