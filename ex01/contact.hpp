/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/10 22:42:42 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
			std::string _first;
			std::string _last;
			std::string	_nick;
			std::string _phone;
			std::string	_secret;
	public:
			Contact(void);
			~Contact(void);
			
			std::string	get_first(void) const;
			std::string	get_last(void) const;
			std::string	get_nick(void) const;
			std::string	get_phone(void) const;
			std::string	get_secret(void) const;
			void		set_first(std::string str);
			void		set_last(std::string str);
			void		set_nick(std::string str);
			void		set_phone(std::string str);
			void		set_secret(std::string str);
	
}

#endif