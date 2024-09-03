section .data
    msg db 'Hello, Holberton', 10, 0 ; message to print with newline and null terminator

section .text
    global main
    extern printf

main:
    ; Set up the argument for printf
    lea rdi, [msg]      ; Load address of msg into rdi
    xor rax, rax        ; Clear rax (no floating-point arguments)
    call printf         ; Call printf

    ; Exit the program
    mov eax, 0          ; Return code 0
    ret                 ; Return from main

