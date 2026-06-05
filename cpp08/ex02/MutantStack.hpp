#pragma once

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack& source);
        MutantStack& operator=(const MutantStack& source);
        ~MutantStack();


        //iterator typedef
        typedef typename std::stack<T>::container_type::iterator iterator;


        iterator begin();
        iterator end();

};


#include "MutantStack.tpp"