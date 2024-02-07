	global	main
	extern	printf
	
	section	.txt

main:
	mov	rdi, message
	mov	rax, 0
	call	printf
	ret
message: db "Hello, Holberton", 10, 0
