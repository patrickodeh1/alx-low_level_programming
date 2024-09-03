section .data
    msg db 'Hello, Holberton', 10, 0   ; The message with a newline character

section .text
    global main
    extern printf

main:
    ; Prepare the stack frame for printf
    mov rdi, fmt           ; First argument: format string
    mov rsi, msg           ; Second argument: message
    call printf            ; Call printf

    ; Exit the program
    mov eax, 0             ; Return code 0
    ret                    ; Return from main
       
section .data
    fmt db '%s', 0         ; Format string for printf
