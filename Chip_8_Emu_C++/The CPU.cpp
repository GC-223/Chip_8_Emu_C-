//
//  The CPU.cpp
//  Chip_8_Emu_C++
//
//  Created by Greyson Chavez on 9/24/23.
//




// Core Of The Emulator

// 2 Basic Ways -
    // Interpreter
    // 1. Get source code (raw bytes) - use fetch-decode-execute loop to read each byte, decode instructions, and execute

    // Translater
    // 2. Get native code and translate it into new code for target CPU




// 1. Interpreter
    // Reproduces how a basic CPU works
    // reads bytes from address of memory pointed to by Program Counter
    // CPU decodes bytes and performs the function
    // Program Counter is updated
    // Repeat

// The Program Counter points to an address in memory
    // Program runs function at that address
    // Program Counter increments ( or points to next needed address )
    // repeat



// A CPU is basically a switch/case statement
// switch ( the object at the address held by Program Counter )
    // case ( command 1 )
        // execute
    // case ( command 2 )
        // execute

    // etc

    // Increment Program Counter







// For our CPU -
    // Registers - pointers to instructions

    // MUST have a Program Counter that holds the address of the instruction to be executed

    // Can have



// We must have a struct/class to store the full state of the CPU
    // The CPU class will then be modified by the emulated instructions


// CPU Class



// Fetch-Decode Loop - main program

// We get the instruction that is pointed to by the program counter
// we decode that instruction
// we execute that instruction
// we loop

#include "The CPU.hpp"
