section     .data
	msg db 'Hello, Holberton', 10 /*String*/
	msglen equ $ -msg /*length of string*/

section .text
	global main /*Main*/

main:
	mov rax, 1 /*Write*/
	mov rdi, 1	/*STDOUT_FILENO,*/
	mov rsi, msg /*Hello, Holberton*/
	mov rdx, msglen	/*sizeof("Hello, Holberton"*/
	syscall /*);*/

	mov rax, 60 /*Exit(*/
	mov rdi, 0	/*EXIT_SUCCESS*/
	syscall	/*);*/
