```asm
section .data
    msg db 'Hello, Holberton', 10 ; message to print with newline

section .text
    global main
    extern printf

main:
    ; Call printf
    lea rdi, [msg]      ; Load address of msg into rdi
    xor rax, rax       ; Clear rax (no floating-point arguments)
    call printf         ; Call printf

    ; Exit program
    mov eax, 0         ; Return 0
    ret
```
