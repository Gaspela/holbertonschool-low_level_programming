	global	main

	section	.text
main:	mov	rax, 1 /*Write*/
	mov	rdi, 1
	mov	rsi, holberton /*Hello, Holberton*/
	mov	rdx, 17 /*Sizeof*/
	syscall
	mov	rax, 60 /*Exit*/
	xor	rdi, rdi
	syscall

	section	.data
holberton:db	"Hello, Holberton", 10
