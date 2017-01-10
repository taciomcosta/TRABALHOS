
;Observe o registrador FLAG

org 100h

MOV AL, 3; Carrega 3 no AL (A low/,menos significativo)
ADD AL, -4; Adiciona -4 ao AL

; ret retorna o controle para o SO                             
ret                         




