	extern	printf ;Funtion c.

	section	.data ;This init variables.
holberton:
	db	"Hello, Holberton", 0 ;This String.
fmt:
	db "%s", 10, 0 ;Format "\n",'0'.

	section	.text 

	global	main ;Standart gcc entry value.
main:
	push rbp ;Alligned.
	mov	rdi,fmt ;Call function printf.
	mov	rsi,holberton
	mov	rax,0 
	call printf
	pop	rbp 
	mov	rax,0 ;Return value - No error.
	ret ;Return.
