#include "main.hpp"
#include "memory.hpp"

int main() {
    printf("hello, world\n");
    ram someRam;
    reg regs;
    someRam.mem[0] = 0;
    if(someRam.mem[0] == 0){
        printf("howdy world!!\n");
    }
    regs.v0 = 1;
    if(regs.v0 == 1) {
        printf("yep\n");
    }
}

