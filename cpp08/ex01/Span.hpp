#pragma once 
#include <vector>
#include <iostream>


class Span
{
    private:
        unsigned int _maxSize;
        std::vector<int> _numbers;
    public:
        Span(unsigned int N);
        Span(const Span& source);
        Span& operator=(const Span& source);
        ~Span();

        void addNumber(int number);


        int shortestSpan() const;
        int longestSpan() const;

};