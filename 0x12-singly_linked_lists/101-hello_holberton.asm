section .data
    fmt db 'Hello, Holberton', 10, 0  ; The format string with a newline character and null terminator

section .text
    global main
    extern printf

main:
    ; Set up the argument for printf
    mov rdi, fmt       ; Address of the format string in rdi (first argument)

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 0         ; Return code 0
    ret                ; Return from main
