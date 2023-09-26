//
//  main.cpp
//  Chip_8_Emu_C++
//
//  Created by Greyson Chavez on 9/24/23.
//


// An emulator duplicates a computer using software programs in a different computer
    // Von Neumann architecture -
    // CPU              -   Does the heavy lifting
    //                  -   Reads instructions, and performs calculations

    // Memory           -   RAM and ROM   -   Where the program code is stored

    // Input Device
    // Output Device

    // Bus              -   Connects all parts, so they can communicate
    //                  -   Provides address, carries data, carries additional info



// Start with CPU emulation
    // CPU fetches byte's from memory and executes functions with those byts (opcodes)
        // opcodes - Operation Codes


// Emulators are loops

// while we have not received the stop command
// while ( ! stop_emulation )
// {
    // exectureCPU( parameters ) ;

    // gnerateInterrupts () ;           Errors? CPU cycles?

    // graphics() ;

    // sound() ;

    // other() ;

    // timeSincronization() ;

// }




// Graphics()
    // Basic -
        // a bitmap with a bit, byte, or bytes for each pizel
        // tile and sprite



// interrupts -
    // certain conditions that must be fulfilled in order to continue emulation
    // These can help with timinh


// Keep track of time via - count CPU cycles
    // Time for one thing to be executed
    // If NES executes 10 cycles in 1 second
    // we must ensure EMULATOR executes 10 cycles in 1 second



// CPU must -
    // signal for interrupts and internal interrupt priority policy
        // Interrupts triggered from outside CPU
    // CPU must count number of executed cycles
        // this number must be same as num and time synchronization decided outside CPU



#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) 
{
    
    std::array<std::uint8_t, 0xFFF> memory { } ;
    
    std::uint16_t programCounter { 0x200 } ;
    std:uint16_t indexRegister { 0 } ;
    
    std::vector<std::uint16_t> addressStack { } ;
    
    std::uint8_t delayTimer { } ;
    std::uint8_t soundTimer { } ;
    
    std::array<std::uint8_t, 0x10> variableRegisters { } ;
    std::cout << variableRegisters.size() << '\n' ;
    
    
    return 0;
}
