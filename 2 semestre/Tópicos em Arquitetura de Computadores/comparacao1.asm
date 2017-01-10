
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV AL, 5; Carrega o valor 5 em AL
MOV BL, 5; Carrega o valor 5 em BL
CMP AL, BL; Compara os valores de AL e BL e afeta os bits do registrador FLAG
    
;ret retorna o controle para o SO
ret 




