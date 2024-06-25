/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 11:06:54 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WRONGCAT_HPP_
	#define _WRONGCAT_HPP_

	#include <string>
	#include "WrongAnimal.hpp"

	#define WRONGCAT_DFT_TYPE	"Wrong Cat"
	#define WRONGCAT_DFT_SOUND	"Wrong Meow"
	
	class WrongCat : public WrongAnimal
	{
		protected:
			static const std::string	type;
			static const std::string	sound;
			
		public:
			// Constructors
			WrongCat();
			WrongCat(const WrongCat &src);
			
			// Destructor
			virtual ~WrongCat();
			
			// Operators
			WrongCat & operator=(const WrongCat &assign);
			
			// Getters / Setters
			const std::string &	getType( void ) const;
			const std::string & getSound( void ) const;
			
			// Actions
			void	makeSound( void ) const;
			
	};

#endif
