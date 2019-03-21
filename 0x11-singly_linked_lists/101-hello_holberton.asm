    global      main

main:
    mov     edi,format
    xor     eax,eax
    call    printf
    mov     eax,0
    ret

msg     db  'Hello, Holberton',0
