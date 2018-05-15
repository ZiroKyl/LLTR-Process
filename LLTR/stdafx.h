// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <algorithm>
#include <vector>
#include <bitset>


#ifdef INTRISTIC

//http://stackoverflow.com/a/109069
//http://stackoverflow.com/questions/3849337/msvc-equivalent-to-builtin-popcount
#if defined(_MSC_VER)
#include <intrin.h>
#define POPCNT(a) __popcnt(a)
#elif defined(__GNUC__)
#define POPCNT(a) __builtin_popcount(a)
#endif

#else
inline unsigned __int32 POPCNT(unsigned __int32 i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
#endif

// TODO: reference additional headers your program requires here
