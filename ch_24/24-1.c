#include <stdio.h>

#if defined(ANDROID20)
    #pragma message("Compile Android SDK 2.0...")
    #define VERSION "Android 2.0"
#elif defined(ANDROID23)
    #pragma message("Compile Android SDK 2.3...")
    #define VERSION "Android 2.3"
#elif defined(ANDROID40)
    #pragma message ("Compile Android SDK 4.0...")
    #define VERSION "Android 4.0"
#else
    #error Compile Version is not provided!
#endif

int main()
{
    printf("%s\n", VERSION);

    return 0;
}
