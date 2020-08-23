/*
 * ctime.c
 * Copyright (C) 2020 root <root@tw.com>
 *
 * Distributed under terms of the MIT license.
 */
#include <stdio.h>
#include <time.h>


int
main()
{
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s  \n", ctime(&biggest));
    return 0;
}



