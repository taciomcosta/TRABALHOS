Algoritmo "Algoritmo - Estudo dos sinais da função do 1°grau"

Var
a,b,x,raiz: real


Inicio
escreval("Algortimo - Estudo dos sinais da função do 1° grau")
escreval
//ENTRADA
escreva("Digite o coeficiente angular: ")
leia(a)

escreva("Digite o coeficiente linear: ")
leia(b)

//PROCESSAMENTO
x <- -b/a

//SAÍDA
limpatela
escreval("Estudo do sinal")
escreval

se(a>0) entao
        escreval(a,">0 -> Reta crescente")
        escreval("f(x) < 0  <->  x <",x,")")
        escreval("f(x) = 0  <->  x =",x,")")
        escreval("f(x) > 0  <->  x >",x,")")
fimse


se(a<0) entao
        escreval("f(x) = ",a,"x + ",b)
        escreval
        escreval(a,">0 -> Reta decrescente")
        escreval(" raiz: x =",x)
        escreval
        escreval("f(x)< 0  <->  x >",x,")")
        escreval("f(x)= 0  <->  x =",x,")")
        escreval("f(x)> 0  <->  x <",x,")")
fimse






Fimalgoritmo