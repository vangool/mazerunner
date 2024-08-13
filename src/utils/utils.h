/**
 * File: utils.h
 *
 * Utility functions
 *
 * @author: Michael VG
 * @updatedlast: 2024/08/12
 *
 */

#ifndef __UTILS_H__
#define __UTILs_H__

#ifdef _WIN32
#include <conio.h>
#else
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

#endif //__UTILS_H__
