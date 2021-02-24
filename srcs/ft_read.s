segment .text
	global _ft_read
	
extern ___error

_ft_read:
	mov rax, 0x2000003
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
	ret

exit:
	ret