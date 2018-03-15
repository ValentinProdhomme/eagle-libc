#include <stddef.h>

void _start() {
    size_t token;

    token = 5311040213;

    asm("movl $1,%eax;"
        "xorl %ebx,%ebx;"
        "int  $0x80"
    );
}
