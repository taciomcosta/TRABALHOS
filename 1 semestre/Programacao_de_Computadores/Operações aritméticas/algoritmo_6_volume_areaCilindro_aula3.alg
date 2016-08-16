    algoritmo "algoritmo6_volume_e_areaCilindro_aula3"
    
    var
    
    r,h,v,a: real
    
    
    inicio
    //ler raio e altura, calcular volume e area
    //area=2*pi*r(h+r) e Vol=pi*r^2*h
    
    //ENTRADA
    
    escreva("Digite o valor do raio: ")
    leia(r)
    escreval
    
    escreva("Digite o valor do altura: ")
    leia(h)
    escreval
    
    //PROCESSAMENTO
    
    a <- 2*pi*r*(h+r)      // O visuAlg j� tem o valor de pi, basta utilizar "pi" para indic�-lo
    v <- pi* r^2 *h
    
    //SA�DA
    
    escreval("A �rea do cilindro � ", a:4:2, " cm�")
    escreval
    escreval ("O volume do cilindro � ", v:4:2, "cm�")
    
    
    fimalgoritmo

