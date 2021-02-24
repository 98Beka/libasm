
section	.text
	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen
	extern	___error

_ft_strdup:
	xor		rax, rax
	cmp		rdi, 0
	jz		_error
	push	rdi
	call	_ft_strlen
	mov		rdi, rax
	call	_malloc
	pop		rdi
	cmp		rax, 0
	jz		_error
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
_error:
	mov r11, rax
	push r11
    call ___error
    pop r11
	mov [rax], r11
	mov rax, -1
exit:
	ret