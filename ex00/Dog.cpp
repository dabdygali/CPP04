/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 10:51:41 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Static members
const std::string	Dog::type = DOG_DFT_TYPE;
const std::string	Dog::sound = DOG_DFT_SOUND;

// Constructors
Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &src) : Animal()
{
	src.getType();
	std::cout << "Dog copy constructor called" << std::endl;
}

// Destructors
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	assign.getType();
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
