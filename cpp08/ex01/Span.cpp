#include "Span.hpp"


Span::Span(unsigned int N) : _maxSize(N){}

Span::Span(const Span& source)
{
    *this = source;
}

Span&   Span::operator=(const Span& source)
{
    if(this != &source)
    {
        _maxSize = source._maxSize;
        _numbers = source._numbers;
    }
    return *this;
}

Span::~Span() {}


void    Span::addNumber(int number)
{
    if(_numbers.size() >= _maxSize)
        throw std::exception();
    
    _numbers.push_back(number);
}


int     Span::longestSpan() const 
{
    if(_numbers.size() < 2)
        throw std::exception();
    
    int min = *std::min_element(_numbers.begin() , _numbers.end());
    int max = *std::max_element(_numbers.begin() , _numbers.end());

    return max - min ;
}


int     Span::shortestSpan() const 
{
    if(_numbers.size() < 2)
        throw std::exception();
    
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin() , tmp.end());


    int shortest = tmp[1] - tmp[0];


    for(size_t i = 1 ; i < tmp.size(); i++)
    {
        int diff = tmp[i] -  tmp [i - 1];
        if(diff < shortest)
            shortest = diff;
    }
    return shortest;
}
