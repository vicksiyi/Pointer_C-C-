/*
 * Complex.cc
 * Copyright (C) 2020 root <root@tw.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include "Complex.h"

int
main()
{
    int a,b;
    cin>>a;
    cin>>b;
    complex A = complex(a,b);
    A.ptr();
    complex B = complex(a,b);
    complex C = A + B;
    complex D = A - B;
    C.ptr();
    D.ptr();
    return 0;
}


