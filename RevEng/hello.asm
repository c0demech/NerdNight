; Intro to Reverse Engineering ELF binaries
; @c0demech
; 
; nasm -f elf -o hello_asm.o hello.asm
; ld -o hello_asm hello.o

section .data

msg     db      "Hello, Georgia!",0xa
len     equ     $ - msg

section .text

    global _start

_start:

    ; sys_write(file, msg, len) write our string to stdout.
    mov     edx,len   ; third argument: message length.
    mov     ecx,msg   ; second argument: pointer to message to write.
    mov     ebx,1     ; first argument: file handle (stdout).
    mov     eax,4     ; system call number (sys_write).
    int     0x80	; call kernel (executes function sys_write()).

    ; exit gracefully - sys_exit(0)
    mov     ebx,0	; first syscall argument: exit code.
    mov     eax,1     ; system call number (sys_exit).
    int     0x80	; call kernel (executes function sys_exit()).
