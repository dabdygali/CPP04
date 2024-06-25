/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 10:52:06 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

// Static members
const std::string	Cat::type = CAT_DFT_TYPE;
const std::string	Cat::sound = CAT_DFT_SOUND;

// Constructors
Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &src) : Animal()
{
	src.getType();
	std::cout << "Cat copy constructor called" << std::endl;
}

// Destructors
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	assign.getType();
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

// Actions
