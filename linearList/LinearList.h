/*
 * LinearList.h
 * Copyright (C) 2020 root <root@tw.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef LINEARLIST_H
#define LINEARLIST_H
#include <iostream>
using namespace std;
template<class T>
class linearList
{
    public:
        virtual ~linearList() {};
        virtual bool empty() const = 0;
        virtual int size() const = 0;
        virtual T& get(int theIndex) const = 0;
        virtual int intdexOf(const T& theElement) const = 0;
        virtual void erase(int theIndex) = 0;
        virtual void insert(int theIndex,const T& theElement)  = 0;
        virtual void output(ostream& out) const = 0;
};

#endif /* !LINEARLIST_H */
