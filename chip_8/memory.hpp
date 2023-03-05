#include <stack>

struct memory {
    //RAM
    char ram[4096];

    //REGISTERS
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char va;
    char vb;
    char vc;
    char vd;
    char ve;
    char vf;

    //STACK
    std::stack<short> sta;

    //PROGRAM COUNTER
    int pc;

    //INDEX REGISTER
    int i;

    //DELAY TIMER
    int delay_timer;

    //SOUND TIMER
    int sound_timer;

    //DISPLAY
    //TODO: should this be separate?
    int display[64][32];
};
