/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 10:28:47 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CAT_HPP_
	#define _CAT_HPP_

	#include <string>
	#include "Animal.hpp"

	#define CAT_DFT_TYPE	"Cat"
	#define CAT_DFT_SOUND	"Meow"
	
	class Cat : virtual public Animal
	{
		protected:
			static const std::string	type;
			static const std::string	sound;
			
		public:
			// Constructors
			Cat();
			Cat(const Cat &src);
			
			// Destructor
			virtual ~Cat();
			
			// Operators
			Cat & operator=(const Cat &assign);
			
			// Getters / Setters
			const std::string &	getType( void ) const;
			const std::string & getSound( void ) const;
			
			// Actions
			
	};

#endif
