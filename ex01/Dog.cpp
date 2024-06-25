/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 13:48:06 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include <cstdlib>
#include "Dog.hpp"

// Static members
const std::string	Dog::type = DOG_DFT_TYPE;
const std::string	Dog::sound = DOG_DFT_SOUND;

// Constructors
Dog::Dog()
{
	_brain = new(std::nothrow) Brain();
	if (!_brain)
		std::cerr << "ERROR: Failed to allocate memory for Dog brain" << std::endl;
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &src) : Animal()
{
	_brain = new(std::nothrow) Brain(*src.getBrain());
	if (!_brain)
		std::cerr << "ERROR: Failed to allocate memory for Dog brain" << std::endl;
	std::cout << "Dog copy constructor called" << std::endl;
}

// Destructors
Dog::~Dog()
{
	if (_brain)
	{
		delete _brain;
		_brain = NULL;
	}
	std::cout << "Dog destructor called" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (_brain)
	{
		if (assign.getBrain())
			*_brain = *assign.getBrain();
		else
		{
			delete _brain;
			_brain = NULL;
		}
	}
	else if (assign.getBrain())
	{
		_brain = new(std::nothrow) Brain(*assign.getBrain());
		if (!_brain)
			std::cerr << "ERROR: Failed to allocate memory for Dog brain" << std::endl;
	}
	return *this;
}

// Getters / Setters
const std::string &	Dog::getType( void ) const
{
	return type;
}
const std::string &	Dog::getSound( void ) const
{
	return sound;
}

// Actions
