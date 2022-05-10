#include <pspkernel.h>
#include <pspdebug.h>

#define MAJOR_VERSION 1
#define MINOR 0

PSP_MODULE_INFO("Sandbox", 0, MAJOR_VERSION, MINOR);

int main()
{
    pspDebugScreenInit();
    pspDebugScreenPrintf("Hello this is Sandbox  booting..");
    while (1)
    {
        
    }
}