#include "main.hpp"
// #include "memory.hpp"

int main() {
    printf("initializing display...\n");
    memory mem;
    initialize_display(&mem);
    printf("initializing ram...\n");
    initialize_ram(&mem);
    // printf("%d\n", mem.ram[0x50]);
}

void initialize_display(memory* mem) {
    for(int i=0; i<32; i++) {
        for(int j=0; j<64; j++) {
            mem->display[j][i] = 0;
        }
    }
}

void initialize_ram(memory* mem) {
    //initialize ram to zeros
    for(int i=0; i<4096; i++) {
        mem->ram[i] = 0x00;
    }

    //Write font to ram starting at 0x50
    char foo[80] = {0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
                    0x20, 0x60, 0x20, 0x20, 0x70, // 1
                    0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
                    0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
                    0x90, 0x90, 0xF0, 0x10, 0x10, // 4
                    0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
                    0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
                    0xF0, 0x10, 0x20, 0x40, 0x40, // 7
                    0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
                    0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
                    0xF0, 0x90, 0xF0, 0x90, 0x90, // A
                    0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
                    0xF0, 0x80, 0x80, 0x80, 0xF0, // C
                    0xE0, 0x90, 0x90, 0x90, 0xE0, // D
                    0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
                    0xF0, 0x80, 0xF0, 0x80, 0x80};
    for(int i=0; i<80; i++) {
        mem->ram[i+0x50] = foo[i];
    }
}

void print_display(memory* mem) {
    for(int i=0; i<32; i++) {
        for(int j=0; j<64; j++) {
            if(mem->display[j][i]) {
                printf(" ");
            } else {
                printf("o");
            }
        }
        printf("\n");
    }
}
