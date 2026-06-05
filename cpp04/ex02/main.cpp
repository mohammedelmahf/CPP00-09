/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:30:05 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 14:12:57 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;

	{
		Animal* animal_arr[5];

		int i = 0;
		while (i < 5)
		{
			if (i % 2 == 0)
				animal_arr[i] = new Dog();
			else
				animal_arr[i] = new Cat();
			i++;
		}

		std::cout << std::endl;

		i = 0;
		while ( i < 5)
		{
			std::cout << "This is a " << animal_arr[i]->getType() << std::endl;
			animal_arr[i]->makeSound();
			i++;
		}

		std::cout << std::endl;

		i = 0;
		while ( i < 5)
		{
			delete animal_arr[i];
			i++;
		}
	}

	std::cout << std::endl;

	{
		Cat cat;
		Cat copy_cat(cat);
		
		std::cout << std::endl;

		std::cout << "This is idea 10 from cat: " << cat.getIdea(10) << std::endl;
		cat.setIdea(10, "This is the new idea to paint the moon");
		std::cout << "This is the new idea 10 from cat: " << cat.getIdea(10) << std::endl;

		std::cout << "This is idea 10 from copy_cat: " << copy_cat.getIdea(10) << std::endl;

		std::cout << std::endl;
	}
	
	std::cout << std::endl;


	{
		Dog dog;
		Dog assignment_dog(dog);
		std::cout << std::endl;
		
		std::cout << "This is idea 10 from dog: " << dog.getIdea(10) << std::endl;
		dog.setIdea(10, "This is the new idea to paint the moon");
		std::cout << "This is the new idea 10 from dog: " << dog.getIdea(10) << std::endl;
		std::cout << std::endl;

		std::cout << "This is idea 10 from assignment_dog before assignment: " << assignment_dog.getIdea(10) << std::endl;
		assignment_dog = dog;
		std::cout << "This is idea 10 from assignment_dog after assignment: " << assignment_dog.getIdea(10) << std::endl;
		std::cout << std::endl;

		assignment_dog.setIdea(10, "Better paint the mars!");
		std::cout << "This is the new idea 10 from assignment dog: " << assignment_dog.getIdea(10) << std::endl;
		std::cout << "This is idea 10 from dog: " << dog.getIdea(10) << std::endl;

		std::cout << std::endl;
	}

	return 0;
}