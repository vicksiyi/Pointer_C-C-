/*
 * ArrayList.cpp
 * Copyright (C) 2020 root <root@tw.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <sstream>
#include "ArrayList.h"
using namespace std;

template<class T>
arrayList<T>::arrayList(int initialCapacity)
{
    if(initialCapacity < 1){
        ostringstream s;
        s << "initial capacity = "<<initialCapacity<<" Must be > 0";
        throw illegalParameterValue(s.str());
    }
    arrayLength = initialCapacity;
    element = new T[arrayLength];
    listSize = 0;
}

template<class T>
arrayList<T>::arrayList(const arrayList<T>& theList)
{
    arrayLength = theList.arrayLength;
    listSize = theList.listSize;
    element = new T[arrayLength];
    copy(theList.element, theList.element + listSize, element);    
}
