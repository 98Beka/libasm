section .text
	global _ft_strcmp

_ft_strcmp:
    mov rcx, -1

loop:
    inc rcx
    mov al, byte[rdi + rcx]
	mov dl, byte[rsi + rcx]
    cmp al, 0
    je exit
    cmp dl, 0
    je exit
    cmp al, dl 
    jne exit
    jmp loop

exit:
    movzx rax, al
    movzx rdx, dl  
    sub rax, rdx
    ret 

