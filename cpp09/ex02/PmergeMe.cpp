#include "PmergeMe.hpp"


//shared functions

bool    custom_cmp(std::pair<int , int> a , std::pair<int , int> b )
{
    if(a.second < b.second)
        return 1;
    return 0;
}

void    print_before(char **av)
{
    int i = 1;
    int error = 0;

    std::cout << "Before : ";
    while(av[i])
    {
        std::string input = av[i];
        std::cout << input << " ";
        if(input.size() > 10 || std::atol(input.c_str()) > INT_MAX || std::atol(input.c_str()) < 0)
            error = 1;
        for(size_t j = 0 ; j < input.size() ; j++)
        {
            if(!isdigit(input[j]))
                error = 1;
        }
        i++;
    }
    std::cout << "\n";
    if(error == 1)
        throw CustomException("Error : input is invalid");
}

////////////////////////////////// deque function //////////////////////////////////

void    create_pairs(std::deque<std::pair<int , int> > *deque , char **av , int *addi_value)
{
    int i = 1;

    while(av[i])
    {
        if(av[i] && av[i + 1])
        {
            std::pair<int , int> tmp_pair(std::atoi(av[i]) , std::atoi(av[i+1]));
            deque->push_back(tmp_pair);
            i += 2;
        }
        else
        {
            *addi_value = std::atoi(av[i]);
            i++;
        }
    }
}

void    sort_pair(std::deque<std::pair<int , int> > *deque)
{
    for(std::deque<std::pair<int , int> >::iterator it = deque->begin() ; it != deque->end() ; ++it)
    {
        if(it->first > it->second)
        {
            int tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

void mergeSort(std::deque<std::pair<int, int> >::iterator start, std::deque<std::pair<int, int> >::iterator end, size_t size)
{
	if (size == 0 && start != end)
		size = std::distance(start, end);
	if (size <= 1)
		return;

	size_t firstHalf = size / 2;
	size_t secondHalf = size - firstHalf;
	std::deque<std::pair<int, int> >::iterator center = start + firstHalf;

	mergeSort(start, center, firstHalf);
	mergeSort(center, end, secondHalf);
	std::inplace_merge(start, center, end, &custom_cmp);
}

void init_main_chain(std::deque<int> *main_chain, std::deque<std::pair<int, int> > dequey)
{
	for (std::deque<std::pair<int, int> >::iterator it = dequey.begin(); it != dequey.end(); ++it)
		main_chain->push_back(it->second);
	if (!dequey.empty())
		main_chain->push_front(dequey.begin()->first);
}

void binary_search_insertion(std::deque<int> *main_chain, std::deque<int>::iterator end, int val)
{
    std::deque<int>::iterator place_to_insert = std::lower_bound(main_chain->begin(), end, val);
    main_chain->insert(place_to_insert, val);
}

void insert_into_main_chain(std::deque<std::pair<int, int> > dequey, std::deque<int> *main_chain, int addi_value)
{
	size_t Jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
	int jacobsthal_idx = 1;

	std::deque<int>::iterator slice_delim_it;
	std::deque<std::pair<int, int> >::iterator pair_it;
	std::deque<std::pair<int, int> >::iterator last_jacob_it = dequey.begin();

	while (Jacobsthal[jacobsthal_idx] <= dequey.size())
	{
		pair_it = dequey.begin() + (Jacobsthal[jacobsthal_idx] - 1);
		last_jacob_it = pair_it;

		int insertion_counter = 0;
		while (Jacobsthal[jacobsthal_idx] - insertion_counter > Jacobsthal[jacobsthal_idx - 1])
		{
			slice_delim_it = std::find(main_chain->begin(), main_chain->end(), pair_it->second);
			binary_search_insertion(main_chain, slice_delim_it, pair_it->first);
			pair_it--;
			insertion_counter++;
		}
		jacobsthal_idx++;
	}

	if (Jacobsthal[jacobsthal_idx] != dequey.size())
	{
		pair_it = dequey.end();
		if (pair_it != dequey.begin())
			pair_it--;
		while (pair_it != last_jacob_it)
		{
			slice_delim_it = std::find(main_chain->begin(), main_chain->end(), pair_it->second);
			binary_search_insertion(main_chain, slice_delim_it, pair_it->first);
			pair_it--;
		}
	}

	if (addi_value != -1)
	{
		binary_search_insertion(main_chain, main_chain->end(), addi_value);
	}
}

void print_after(std::deque<int> main_chain)
{
	std::cout << "After: ";
	for (std::deque<int>::iterator it = main_chain.begin(); it != main_chain.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << '\n';
}


////////////////////////////////// list function //////////////////////////////////


void create_pairs2(std::list<std::pair<int, int> > *list, char **argv, int *addi_value)
{
	int i = 1;

	while (argv[i])
	{
		if (argv[i] && argv[i + 1])
		{
			std::pair<int, int> pair_temp(std::atoi(argv[i]), std::atoi(argv[i + 1]));
			list->push_back(pair_temp);
			i += 2;
		}
		else
		{
			*addi_value = std::atoi(argv[i]);
			i++;
		}
	}
}

void sort_pairs2(std::list<std::pair<int, int> > *list)
{
	for (std::list<std::pair<int, int> >::iterator it = list->begin(); it != list->end(); ++it)
	{
		if (it->first > it->second)
		{
			int temp = it->first;
			it->first = it->second;
			it->second = temp;
		}
	}
}

// Do merge sort with recursive approach splitting the list in half each time and merging them back together
void mergeSort2(std::list<std::pair<int, int> >& lst)
{
	if (lst.size() <= 1)
		return;

	std::list<std::pair<int, int> > right;
	std::list<std::pair<int, int> > left;

	size_t half = lst.size() / 2;

	std::list<std::pair<int, int> >::iterator it = lst.begin();
	size_t i = 0;

	while (i < half)
	{
		left.push_back(*it);
		++it;
		++i;
	}
	while (it != lst.end())
	{
		right.push_back(*it);
		++it;
	}

	mergeSort2(left);
	mergeSort2(right);

	left.merge(right, custom_cmp);
	lst = left;
}

void init_main_chain2(std::list<int> *main_chain, std::list<std::pair<int, int> > list)
{
	for (std::list<std::pair<int, int> >::iterator it = list.begin(); it != list.end(); ++it)
		main_chain->push_back(it->second);

	// the first number of pend can always be inserted as the first number in the main chain.
	// it's always smaller than it's paired number
	if (!list.empty())
		main_chain->push_front(list.begin()->first);
}

// Do a binary search to find the correct position within the slice of the main chain and insert the value
void binary_search_insertion2(std::list<int> *main_chain, std::list<int>::iterator end, int val)
{
	std::list<int>::iterator place_to_insert = std::lower_bound(main_chain->begin(), end, val);
	main_chain->insert(place_to_insert, val);
	
	/*
	// print main chain
	std::cout << "main chain with current value: " << val << ": "
			  << "end_interator: " << *end << " place_to_insert: " << *(place_to_insert--) << std::endl;
	for (std::list<int>::iterator it = main_chain->begin(); it != main_chain->end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << '\n';
	*/
}


void insert_into_main_chain2(std::list<std::pair<int, int> > list, std::list<int> *main_chain, int addi_value)
{
	size_t Jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
	int jacobsthal_idx = 1;

	std::list<int>::iterator slice_delim_it;
	std::list<std::pair<int, int> >::iterator pair_it;
	std::list<std::pair<int, int> >::iterator last_jacob_it = list.begin();

	while (Jacobsthal[jacobsthal_idx] <= list.size())
	{
		pair_it = list.begin();
		std::advance(pair_it, Jacobsthal[jacobsthal_idx] - 1);
		last_jacob_it = pair_it;

		// how many pend elements have been inserted
		int insertion_counter = 0;
		while (Jacobsthal[jacobsthal_idx] - insertion_counter > Jacobsthal[jacobsthal_idx - 1])
		{
			slice_delim_it = std::find(main_chain->begin(), main_chain->end(), pair_it->second);
			binary_search_insertion2(main_chain, slice_delim_it, pair_it->first);
			pair_it--;
			insertion_counter++;
		}
		jacobsthal_idx++;
	}

	// if the Jacobsthal number is larger than the size of the list, insert the remaining elements
	if (Jacobsthal[jacobsthal_idx] != list.size())
	{
		pair_it = list.end();
		if (pair_it != list.begin())
			pair_it--;
		while (pair_it != last_jacob_it)
		{
			slice_delim_it = std::find(main_chain->begin(), main_chain->end(), pair_it->second);
			binary_search_insertion2(main_chain, slice_delim_it, pair_it->first);
			pair_it--;
		}
	}

	if (addi_value != -1)
	{
		binary_search_insertion2(main_chain, main_chain->end(), addi_value);
	}
}

void print_after2(std::list<int> main_chain)
{
	std::cout << "After: ";
	for (std::list<int>::iterator it = main_chain.begin(); it != main_chain.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << '\n';
}