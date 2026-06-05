#pragma once

#include <deque>
#include <vector>
#include<iostream>
#include<ctime>
#include<climits>
#include <cstdlib>
#include <algorithm>
#include <list>
class CustomException : public std::runtime_error
{
    public:
        explicit CustomException(std::string msg) : runtime_error(msg){}
};



void    print_before(char **av);
bool    custom_cmp(std::pair<int , int> a , std::pair<int , int> b );
void    create_pairs(std::deque<std::pair<int , int> > *deque , char **av , int *addi_value);
void    sort_pair(std::deque<std::pair<int , int> > *deque);
void    print_after(std::deque<int> main_chain);
void    mergeSort(std::deque<std::pair<int, int> >::iterator start, std::deque<std::pair<int, int> >::iterator end, size_t size);
void    init_main_chain(std::deque<int> *main_chain, std::deque<std::pair<int, int> > dequey);
void    binary_search_insertion(std::deque<int> *main_chain, std::deque<int>::iterator end, int val);
void    insert_into_main_chain(std::deque<std::pair<int, int> > dequey, std::deque<int> *main_chain, int additional_value);


void    create_pairs2(std::list<std::pair<int , int> > *list , char **av , int *addi_value);
void    sort_pairs2(std::list<std::pair<int , int> > *list);
void    print_after2(std::list<int> main_chain);
void    mergeSort2(std::list<std::pair<int, int> >& lst);
void    init_main_chain2(std::list<int> *main_chain, std::list<std::pair<int, int> > list);
void    binary_search_insertion2(std::list<int> *main_chain, std::list<int>::iterator end, int val);
void    insert_into_main_chain2(std::list<std::pair<int, int> > list, std::list<int> *main_chain, int addi_value);
