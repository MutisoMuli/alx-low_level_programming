; Declare necessary C functions
	extern printf      ; Declare the C function to be called

section .data         ; Data section for initialized variables
msg: db "Hello, Holberton", 0  ; Define a null-terminated string
fmt: db "%s", 10, 0  ; Define a format string for printing with a newline

section .text         ; Text section for code

global main           ; Main function entry point
main:                 ; Start of the main function
	push rbp          ; Align the stack by pushing the base pointer

	mov rdi, fmt      ; Load the format string address into rdi
	mov rsi, msg      ; Load the message address into rsi
	mov rax, 0        ; Clear rax (typically done with XOR or OR)
	call printf       ; Call the C function printf

	pop rbp           ; Restore the stack

	mov rax, 0        ; Set rax to 0 to indicate normal execution
	ret               ; Return to the caller
