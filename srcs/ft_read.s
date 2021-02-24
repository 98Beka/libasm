segment .text
	global _ft_read
	
extern ___error

_ft_read:
	mov rax, 0x2000003
	syscall	
	jc _error
	jmp exit

_error:
	mov r11, rax
	push r11
    call ___error
    pop r11
	mov [rax], r11
	mov rax, -1

exit:
	ret