/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 14:36:18 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _DOG_HPP_
	#define _DOG_HPP_

	#include <string>
	#include "Animal.hpp"
	#include "Brain.hpp"

	#define DOG_DFT_TYPE	"Dog"
	#define DOG_DFT_SOUND	"Bark"
	
	class Dog : virtual public Animal
	{
		private:
			Brain	*_brain;
			
		protected:
			static const std::string	type;
			static const std::string	sound;
			
		public:
			// Constructors
			Dog();
			Dog(const Dog &src);
			
			// Destructor
			virtual ~Dog();
			
			// Operators
			Dog & operator=(const Dog &assign);
			
			// Getters / Setters
			const std::string &	getType( void ) const;
			const std::string & getSound( void ) const;
			const Brain*		getBrain( void ) const;
			void				setBrain(const Brain *brainPTR);
			void				setBrain(const Brain &brainREF);
			
			// Actions
			
	};

#endif
