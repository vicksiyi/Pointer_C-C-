/*
 * ArrayList.h
 * Copyright (C) 2020 root <root@tw.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <ostream>
#include "LinearList.h"

template<class T>
class arrayList : public linearList<T>
{
    public:
        arrayList(int initialCapacity = 10);
        arrayList(const arrayList<T>&);
        ~arrayList() {delete [] element;}

        // ADT方法
        bool empty() const { return listSize == 0;}
        int size() const { return listSize; }
        T& get(int theIndex) const;
        int indexOf(const T& theElement) const;
        void erase(int theIndex);
        void insert(int theIndex, const T& theElement);
        void output(ostream& out) const;
        int capacity() const {return arrayLength;}

    protected:
        void checkIndex(int theIndex) const;
        T* element;
        int arrayLength;
        int listSize;
};

#endif /* !ARRAYLIST_H */
