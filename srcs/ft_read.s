segment .text
	global _ft_read
	
extern ___error

_ft_read:
	mov 	rax, 0x2000003
	syscall	
		jc _error
	jmp exit

_error:
	push rbx
    mov rbx, rax
    call ___error
    mov [rax], rbx
    mov rax, -1		
	jmp exit		
	
exit:
	ret