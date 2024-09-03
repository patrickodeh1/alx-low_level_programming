section .data
    fmt db 'Hello, Holberton', 10, 0  ; The format string with a newline character and null terminator

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov rdi, fmt      ; Format string (first argument)
    call printf       ; Call printf

    ; Exit the program
    mov eax, 0        ; Return code 0
    ret               ; Return from main
