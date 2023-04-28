section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov edi, fmt
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	mov eax, 0
	ret

section .data
	fmt db "Hello, Holberton!", 10, 0
