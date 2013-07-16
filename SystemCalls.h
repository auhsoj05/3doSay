/* 
 * File:   SystemCalls.h
 * Author: joshua
 *
 * Created on June 29, 2013, 4:13 PM
 */

#ifndef SYSTEMCALLS_H
#define	SYSTEMCALLS_H
#include <cstdint>
typedef int result; //not sure what this is supposed to actually be
typedef int handle;
typedef int func;
enum MemoryState{FREE=0, RESERVED=1
    
};
struct MemoryInfo{
    uint32_t BaseAddress;
    uint32_t size;
    uint32_t State;
    
};
struct PageInfo{
    uint32_t Flags;
};
 result ControlMemory(uint32_t* outaddr, uint32_t addr0, uint32_t addr1, uint32_t size, uint32_t operation, uint32_t permission); //outaddr is usually the same as the input addr0
 result QueryMemory(MemoryInfo* info, PageInfo* out, uint32_t permissions);
 void ExitProcess();
 result GetProcessAffinityMask(uint8_t affinitymask, handle process, int32_t processorcount);
 result SetProcessAffinityMask(handle process, uint8_t* affinitymask, int32_t processorcount);
 result GetProcessidealProcessor(int32_t* idealprocessor, handle process );
 result SetProcessidealProcessor(handle process, int32_t idealprocessor);
 result CreateThread(handle* thread, func entrypoint, uint32_t arg, uint32_t stacktop, )
 
 


#endif	/* SYSTEMCALLS_H */

