/**
 *    Copyright 2017 jmpews
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef hook_zz_h
#define hook_zz_h

#include <stdint.h>
#include <stdbool.h>

#define DEBUG_MODE 0

#ifndef zz_type
#define zz_type

typedef void *zpointer;
typedef unsigned long zsize;
typedef unsigned long zaddr;
typedef unsigned long zuint;
typedef long zint;
typedef unsigned char zbyte;

#endif

#if defined(false)
#else
#define false 0
#define true 1
#endif

#ifndef zz_register_type
#define zz_register_type
#if defined (__aarch64__)
typedef union FPReg_ {
    __int128_t q;
    struct {
        double d1; // Holds the double (LSB).
        double d2;
    } d;
    struct {
        float f1; // Holds the float (LSB).
        float f2;
        float f3;
        float f4;
    } f;
} FPReg;

// just ref how to backup/restore registers
typedef struct _RegState {
    uint64_t pc;
    uint64_t sp;

    union {
        uint64_t x[29];
        struct {
            uint64_t x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28;
        } regs;
    } general;

    uint64_t fp;
    uint64_t lr;

    union {
        FPReg q[8];
        FPReg q0,q1,q2,q3,q4,q5,q6,q7;
    } floating;
} RegState;
#elif defined(__x86_64__)
#endif
#endif


typedef enum _ZZSTATUS {
    ZZ_UNKOWN = -1,
    ZZ_DONE = 0,
    ZZ_SUCCESS,
    ZZ_FAILED,
    ZZ_DONE_HOOK,
    ZZ_DONE_INIT,
    ZZ_DONE_ENABLE,
    ZZ_ALREADY_HOOK,
    ZZ_ALREADY_INIT,
    ZZ_ALREADY_ENABLED,
    ZZ_NEED_INIT,
    ZZ_NO_BUILD_HOOK
} ZZSTATUS;


typedef struct _CallStack
{
    long call_id;
} CallStack;

typedef struct _ThreadStack
{
    long thread_id;
	zsize size;
} ThreadStack;


typedef void (*PRECALL)(RegState *rs, ThreadStack *threadstack, CallStack *callstack);
typedef void (*POSTCALL)(RegState *rs, ThreadStack *threadstack, CallStack *callstack);
typedef void (*HALFCALL)(RegState *rs, ThreadStack *threadstack, CallStack *callstack);

zpointer ZzGetCallStackData(CallStack *callstack_ptr, char *key);
bool ZzSetCallStackData(CallStack *callstack_ptr, char *key, zpointer value_ptr, zsize value_size);

#define STACK_CHECK_KEY(callstack, key) (bool)ZzGetCallStackData(callstack, key)
#define STACK_GET(callstack, key, type) *(type *)ZzGetCallStackData(callstack, key)
#define STACK_SET(callstack, key, value, type) ZzSetCallStackData(callstack, key, &(value), sizeof(type))

ZZSTATUS ZzBuildHook(zpointer target_ptr, zpointer replace_ptr, zpointer *origin_ptr, PRECALL pre_call_ptr,
    POSTCALL post_call_ptr);
ZZSTATUS ZzBuildHookAddress(zpointer target_start_ptr, zpointer target_end_ptr, PRECALL pre_call_ptr, HALFCALL half_call_ptr);
ZZSTATUS ZzEnableHook(zpointer target_ptr);
ZZSTATUS ZzRuntimeCodePatch(zaddr address, zpointer codedata, zuint codedata_size);

#endif