/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 10:47:49 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

// Static members
const std::string	Animal::type = ANIMAL_DFT_TYPE;
const std::string	Animal::sound = ANIMAL_DFT_SOUND;

// Constructors
Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &src)
{
	src.getType();
	std::cout << "Animal copy constructor called" << std::endl;
}

// Destructors
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	assign.getType();
	return *this;
}

// Getters / Setters
const std::string &	Animal::getType( void ) const
{
	return type;
}
const std::string &	Animal::getSound( void ) const
{
	return sound;
}

// Actions
void	Animal::makeSound( void ) const
{
	std::cout << getType() << ": " << getSound() << std::endl;
}
