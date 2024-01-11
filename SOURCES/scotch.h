#include <bits/wordsize.h>

#if __WORDSIZE == 32
#include "scotch-32.h"
#elif __WORDSIZE == 64
#include "scotch-64.h"
#else
#error "Unknown word size"
#endif

