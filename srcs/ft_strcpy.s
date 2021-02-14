section	.text
	global	_ft_strcpy

_ft_strcpy:
	xor		rcx, rcx
	cmp		rsi, 0
	jz		exit
	jmp		copy
inc:
	inc		rcx
copy:
	mov		dl, BYTE [rsi + rcx]
	mov		BYTE [rdi + rcx], dl
	cmp		dl, 0
	jnz		inc
exit:
	mov		rax, rdi
	ret