#ifdef _MSC_VER
#pragma warning(disable: 4244) // conversion from 'int' to 'opus_int16', possible loss of data
#endif

#ifdef __ANDROID__ // avoid issues with 64-bit stdio
#include <stdio.h>
#include <unistd.h>
#endif

#include "../src/info.c"
#include "../src/internal.c"
#include "../src/opusfile.c"
#include "../src/stream.c"
