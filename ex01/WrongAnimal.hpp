/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 11:03:02 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WRONGANIMAL_HPP_
	#define _WRONGANIMAL_HPP_

	#include <string>

	#define WRONGANIMAL_DFT_TYPE	"wrong_animal_default_type_"
	#define WRONGANIMAL_DFT_SOUND "wrong_animal_default_sound_"
	
	class WrongAnimal
	{
		protected:
			static const std::string	type;
			static const std::string	sound;
			
		public:
			// Constructors
			WrongAnimal();
			WrongAnimal(const WrongAnimal &src);
			
			// Destructor
			virtual ~WrongAnimal();
			
			// Operators
			WrongAnimal & operator=(const WrongAnimal &assign);
			
			// Getters / Setters
			const std::string &	getType( void ) const;
			const std::string & getSound( void ) const;
			
			// Actions
			void	makeSound( void ) const;
			
	};

#endif
