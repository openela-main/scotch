#include <bits/wordsize.h>

#if __WORDSIZE == 32
#include "scotchf-32.h"
#elif __WORDSIZE == 64
#include "scotchf-64.h"
#else
#error "Unknown word size"
#endif

