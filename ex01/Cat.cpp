/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 15:11:58 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include <cstdlib>
#include "Cat.hpp"

// Static members
const std::string	Cat::type = CAT_DFT_TYPE;
const std::string	Cat::sound = CAT_DFT_SOUND;

// Constructors
Cat::Cat() : Animal()
{
	_brain = new(std::nothrow) Brain();
	if (!_brain)
		std::cerr << "ERROR: Failed to allocate memory for Dog brain" << std::endl;
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &src) : Animal()
{
	setBrain(src.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
}

// Destructors
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	if (_brain)
	{
		delete _brain;
		_brain = NULL;
	}
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	setBrain(assign.getBrain());
	return *this;
}

// Getters / Setters
const std::string &	Cat::getType( void ) const
{
	return type;
}
const std::string &	Cat::getSound( void ) const
{
	return sound;
}

const Brain*		Cat::getBrain( void ) const
{
	return _brain;
}
void				Cat::setBrain(const Brain *brainPTR)
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
void				Cat::setBrain(const Brain &brainREF)
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
