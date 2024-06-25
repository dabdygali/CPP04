/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 13:20:34 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _BRAIN_HPP_
	#define _BRAIN_HPP_

	#include <string>

	#define BRAIN_DFT_IDEAS_QTY	100
	
	class Brain
	{
		private:
			std::string	ideas[BRAIN_DFT_IDEAS_QTY];
			
		public:
			// Constructors
			Brain();
			Brain(const Brain &src);
			
			// Destructor
			virtual ~Brain();
			
			// Operators
			Brain & operator=(const Brain &assign);
			
			// Getters / Setters
			int					getQtyOfIdeas( void ) const;
			const std::string	(&getIdeas( void ) const)[BRAIN_DFT_IDEAS_QTY];
			void				setIdeas(std::string (&arr)[BRAIN_DFT_IDEAS_QTY]);
			
			// Actions
			
	};

#endif
