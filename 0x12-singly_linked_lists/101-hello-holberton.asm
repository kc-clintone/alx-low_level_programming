section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 10, 0   ; Format string for printf with newline

section .text
    global main
    extern printf

main:
    push rdi        ; Preserve the registers
    push rsi
    push rax

    mov rdi, format ; Load the format string
    lea rsi, [hello] ; Load the address of the string to print
    xor rax, rax    ; Clear RAX (no floating point args)
    call printf     ; Call printf function

    pop rax         ; Restore the registers
    pop rsi
    pop rdi

    xor rax, rax    ; Return 0
    ret
