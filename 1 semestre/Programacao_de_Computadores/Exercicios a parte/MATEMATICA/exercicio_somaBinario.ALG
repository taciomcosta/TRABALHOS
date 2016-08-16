Algoritmo "Algoritmo - Soma de Binários"
Var
n1,n2:caractere
aa,ba,ca,da,ea,fa,ga,ha: inteiro
ab,bb,cb,db,eb,fb,gb,hb:inteiro
sa,sb,sc,sd,see,sf,sg,sh,ss: inteiro
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

//soma
ss <- 0
sh <- ha+hb
sg <- ga+gb
sf <- fa+fb
see <- ea+eb
sd <- da+db
sc <- ca+cb
sb <- ba+bb
sa <- aa+ab

se ( sh > 1 ) entao
   enquanto (sh>=2) faca
   sh <- sh-2
   sg <- sg +1
   fimenquanto
fimse
se ( sg > 1 ) entao
   enquanto (sg>=2) faca
   sg <- sg-2
   sf <- sf+1
   fimenquanto
fimse
se ( sf > 1 ) entao
   enquanto (sf>=2) faca
   sf <- sf-2
   see <- see+1
   fimenquanto
fimse
se ( see > 1 ) entao
   enquanto (see>=2) faca
   see <- see-2
   sd <- sd+1
   fimenquanto
fimse
se ( sd > 1 ) entao
   enquanto (sd>=2) faca
   sd <- sd-2
   sc <- sc+1
   fimenquanto
fimse
se ( sc > 1 ) entao
   enquanto (sc>=2) faca
   sc <- sc-2
   sb <- sb+1
   fimenquanto
fimse
se ( sb > 1 ) entao
   enquanto (sb>=2) faca
   sb <- sb-2
   sa <- sa+1
   fimenquanto
fimse
se ( sa > 1 ) entao
   enquanto (sa>=2) faca
   sa <- sa-2
   ss <- ss+1
   fimenquanto
fimse

//SAÍDA
escreval
se(ss=0) entao
         escreval(aa,ba,ca,da,ea,fa,ga,ha," = ",resa," + ")
         escreval(ab,bb,cb,db,eb,fb,gb,hb," = ",resb)
         escreval("------------------------")
         escreval(sa,sb,sc,sd,see,sf,sg,sh," = ", resa+resb)
fimse
se(ss=1) entao
         escreval(" ",aa,ba,ca,da,ea,fa,ga,ha," = ",resa," + ")
         escreval(" ",ab,bb,cb,db,eb,fb,gb,hb," = ",resb)
         escreval("------------------------")
         escreval(ss,sa,sb,sc,sd,see,sf,sg,sh," = ", resa+resb)
fimse
Fimalgoritmo