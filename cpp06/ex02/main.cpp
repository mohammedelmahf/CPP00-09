/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:01:13 by maelmahf          #+#    #+#             */
/*   Updated: 2026/02/20 16:01:14 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identified class: A (identify(Base *p))" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified class: B (identify(Base *p))" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified class: C (identify(Base *p))" << std::endl;
	else
		std::cout << "Identified class: unknown (identify(Base *p))" << std::endl;
}

void identify(Base &p)
{
	std::cout << std::endl;
	try {
		std::cout << "Trying to cast to A" << std::endl;
		A &a = dynamic_cast<A&>(p);
		std::cout << "Identified class: A (identify(Base &p))" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	
	std::cout << "---------------------" << std::endl;
	try {
		std::cout << "Trying to cast to B" << std::endl;
		B &b = dynamic_cast<B&>(p);
		std::cout << "Identified class: B (identify(Base &p))" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	
	std::cout << "---------------------" << std::endl;
	try {
		std::cout << "Trying to cast to C" << std::endl;
		C &c = dynamic_cast<C&>(p);
		std::cout << "Identified class: C (identify(Base &p))" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << std::endl;
	
	srand(time(NULL)); //seed for random number generator
	
	Base *base = generate(); //generate random class A, B or C

	identify(base); //identify class A, B or C
	identify(*base);
	
	delete base; //avoid leaks

	std::cout << std::endl;
	return (0);
}