/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 15:12:13 by dabdygal         ###   ########.fr       */
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
Dog::Dog() : Animal()
{
	_brain = new(std::nothrow) Brain();
	if (!_brain)
		std::cerr << "ERROR: Failed to allocate memory for Dog brain" << std::endl;
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &src) : Animal()
{
	setBrain(src.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
}

// Destructors
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	if (_brain)
	{
		delete _brain;
		_brain = NULL;
	}
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	setBrain(assign.getBrain());
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

const Brain*		Dog::getBrain( void ) const
{
	return _brain;
}
void				Dog::setBrain(const Brain *brainPTR)
{
	if (_brain)
	{
		if (brainPTR)
			*_brain = *brainPTR;
		else
			{
				delete _brain;
				_brain = NULL;
			}
	}
	else if (brainPTR)
	{
		_brain = new(std::nothrow) Brain(*brainPTR);
		if (!_brain)
			std::cerr << "ERROR: Failed to allocate memory for Dog Brain" << std::endl;
	}
}
void				Dog::setBrain(const Brain &brainREF)
{
	if (_brain)
		*_brain = brainREF;
	else
	{
		_brain = new(std::nothrow) Brain(brainREF);
		if (!_brain)
			std::cerr << "ERROR: Failed to allocate memory for Dog Brain" << std::endl;
	}
}
// Actions
