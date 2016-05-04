algoritmo "Algoritmo - Preço e Classificação do Produto"
var
p:real
c:literal
inicio
escreval("Algoritmo - Preço e Classificação do Produto")
escreval
//ENTRADA
escreva("Digite o valor atual do produto: ")
leia(p)
//PROCESSAMENTO
se(p<=50) entao
   p <- p*1.05
senao
   se(p<=100) entao
      p <- p*1.1
   senao
      p <- p*1.15
   fimse
fimse
se(p<=80) entao
   c <- "Barato"
senao
   se (p<=120) entao
      c <- "Normal"
   senao
      se (p<=200) entao
         c <- "Caro"
      senao
         c <- "Muito caro"
      fimse
   fimse
fimse

//SAÍDA
escreval ("Novo preço: R$ ",p:4:2)
escreval("Classificação: ",c)
fimalgoritmo
