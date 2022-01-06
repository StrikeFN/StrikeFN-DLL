// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdio.h>

void Main() {
    FILE* fptr;

    AllocConsole();

    freopen_s(&fptr, "CONOUT$", "w", stdout);
    freopen_s(&fptr, "CONOUT$", "w", stderr);
    freopen_s(&fptr, "CONIN$", "r", stdin);

    printf("Initializing StrikeFN...\n\n");
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Main();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

