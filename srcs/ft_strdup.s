
section	.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen
	extern	___error

_ft_strdup:
	xor		rax, rax
	cmp		rdi, 0
	jz		error
	push	rdi
	call	_ft_strlen
	mov		rdi, rax
	call	_malloc
	pop		rdi
	cmp		rax, 0
	jz		error
	xor		rcx, rcx
	jmp		copy
inc:
	inc		rcx
copy:
	mov		dl, BYTE [rdi + rcx]
	mov		BYTE [rax + rcx], dl
	cmp		dl, 0
	jnz		inc
	jmp		exit
error:
	push rbx
    mov rbx, rax
    call ___error
    mov [rax], rbx
    mov rax, -1		
	jmp exit	
exit:
	ret