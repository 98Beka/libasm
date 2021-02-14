	section	.text
	global	_ft_strcmp

_ft_strcmp:	
	xor		rcx, rcx
	cmp		rdi, 0
	je		ch_null
	cmp		rsi, 0
	je		ch_null
	jmp		check
ch_null:
	cmp		rdi, rsi
	jz		equal
	jg		greater
	jmp		lower
check:
	cmp		BYTE [rdi + rcx], 0	
	je		fin
	cmp		BYTE [rsi + rcx], 0	
	je		fin
	mov		dl, BYTE [rsi + rcx]
	cmp		BYTE [rdi + rcx], dl
	jne		fin
	inc		rcx
	jmp		check
fin:
	mov		dl, BYTE [rdi + rcx]
	sub		dl, BYTE [rsi + rcx]
	cmp		dl, 0
	jz		equal
	jl		lower
greater:
	mov		rax, 1
	ret
lower:
	mov		rax, -1
	ret
equal:
	mov		rax, 0
	ret