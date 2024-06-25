/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/24 17:05:44 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ANIMAL_HPP_
	#define _ANIMAL_HPP_

	#include <string>

	#define ANIMAL_DFT_TYPE	"_animal_default_type_"
	#define ANIMAL_DFT_SOUND "_animal_default_sound_"
	
	class Animal
	{
		protected:
			static const std::string	type;
			static const std::string	sound;
			
		public:
			// Constructors
			Animal();
			Animal(const Animal &src);
			
			// Destructor
			virtual ~Animal();
			
			// Operators
			Animal & operator=(const Animal &assign);
			
			// Getters / Setters
			virtual const std::string &	getType( void ) const;
			virtual const std::string & getSound( void ) const;
			
			// Actions
			void	makeSound( void ) const;
			
	};

#endif
