#include "PmergeMe.hpp"
#include <iostream>


int main(int ac , char **av)
{
    if(ac < 2)
    {
        std::cerr << "Not enough arguments provided" << std::endl;
        return(1);
    }

    {
        std::cout << "using std::deque" << std::endl;
        clock_t start = clock();
        std::deque<std::pair<int , int> > deque;
        std::deque<int> main_chain;
        int addi_value = -1;
        try
        {
            print_before(av);
            create_pairs(&deque , av , &addi_value);
            sort_pair(&deque);
            mergeSort(deque.begin() , deque.end() , 0);
            init_main_chain(&main_chain , deque);
            insert_into_main_chain(deque , &main_chain , addi_value);
            print_after(main_chain);
            clock_t end = clock();
			std::cout << "Time to process a range of " << main_chain.size() << " elements with std::deque: " << static_cast<double>(end - start) / 1000 << " millisec" << std::endl << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "using std::list" << std::endl;
        clock_t start = clock();
        std::list<std::pair<int , int> > list;
        std::list<int> main_chain;
        int addi_value = -1;
        try
        {
            print_before(av);
            create_pairs2(&list , av , &addi_value);
            sort_pairs2(&list);
            mergeSort2(list);
            init_main_chain2(&main_chain , list);
            insert_into_main_chain2(list , &main_chain , addi_value);
            print_after2(main_chain);
            clock_t end = clock();
			std::cout << "Time to process a range of " << main_chain.size() << " elements with std::list: " << static_cast<double>(end - start) / 1000 << " millisec" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}