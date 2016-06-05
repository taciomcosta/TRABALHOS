Algoritmo "Estudo do sinal - Função quadrática"

Var
x1,x2,v,delta:real
a,b,c:real


Inicio
//ENTRADA
escreval("Estudo do sinal - Função quadrática")
escreval
escreval
escreva("Digite o valor do coeficiente a: ")
leia(a)
escreva("Digite o valor do coeficiente b: ")
leia(b)
escreva("Digite o valor do coeficiente c: ")
leia(c)

//PROCESSAMENTO
limpatela
delta <- b^2 - (4*a*c)
escreval("Delta =",delta)
escreval

se ( delta > 0) entao
   x1 <- (-b-raizq(delta))/2*a
   x2 <- (-b+raizq(delta))/2*a
   escreval("x1 =",x1:3:2," e x2=",x2:3:2)
   escreval
   se (a > 0) entao
         escreval("f(x)<0, x <",x1:3:2," ou x >", x2:3:2)
         escreval("f(x)=0, x =",x1:3:2," ou x =",x2:3:2)
         escreval("f(x)>0, ",x1:3:2," < x < ",x2:3:2)
   fimse
   se (a < 0) entao
         escreval("f(x)<0, ",x1:3:2," < x < ",x2:3:2)
         escreval("f(x)=0, x =",x1:3:2," ou x =",x2:3:2)
         escreval("f(x)>0, x <",x1:3:2," ou x >",x2:3:2)
   fimse
      
fimse

se ( delta = 0) entao
   x1 <- (-1*b)/(2*a)
   x2 <- x1
   escreval("x1 = x2 =",x1:3:2)
   escreval
   se ( a > 0) entao
      escreval("f(x)>=0, VxER")
   fimse
   se ( a < 0) entao
      escreval("f(x)<=0, VxER")
   fimse
fimse

se ( delta < 0) entao
   escreval("Não é possível determinar x1 e x2")
   escreval
   se ( a > 0) entao
      escreva("f(x) > 0, VxER")
   fimse
   se ( a < 0) entao
      escreva("f(x) < 0, VxER")
   fimse
fimse
//SAÍDA

escreval
escreval
escreval
escreval
escreval
escreval



Fimalgoritmo