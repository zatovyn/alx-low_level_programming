section .data
msg: db "Hello, Holberton", 10  ; Define variable named "msg" in db, (10 is new line)

section .text
global main

extern printf     ; Declare a reference to "printf" function

main:              ; Define the entry point of the program.
push msg       ; Push the address of "msg" onto the stack as an argument for printf
call printf    ; Call the printf function
add esp, 4     ; Adjust the stack pointer to remove the argument

mov eax, 1     ; Set the exit status of the program to 1 (successful termination)
xor ebx, ebx   ; Clear the ebx register
int 0x80       ; Make a system call to terminate the program and return the exit status
