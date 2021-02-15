segment .text
	global _ft_write

extern ___error

_ft_write:
	mov rax, 0x2000004		
    syscall
	jc _error
	jmp exit	
_error:
	cmp edi, 0
	jl _er_less_df
	push rbx
    mov rbx, rax
    call ___error
    mov [rax], rbx
    mov rax, -1
	jmp exit
_er_less_df:
	mov rax, -1

exit:
	ret
	