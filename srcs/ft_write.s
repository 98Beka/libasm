segment .text
	global _ft_write
extern ___error
_ft_write:
	mov rax, 0x2000004		
    syscall
	jc _error
	jmp exit	
_error:
	mov r15, rax
	push rbp
    mov rbp, rsp
    call ___error
    mov rsp, rbp
    pop rbp
	mov [rax], r15
	mov rax, -1

exit:
	ret
	