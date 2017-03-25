
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

MOV AL, 6; Carrega 6 no AL 
CMP AL, 7; Compara 6 e 7 (6-7)
JLE label1;Se AL <= 6, vai para label1
MOV AL, 6;Senao, executa a linha 10 e 11
MOV AH, 7
JMP exit;Salta para a etiqueta exit
label1:
    MOV AL, 7;
    MOV AH, 6;
exit:
    ret





