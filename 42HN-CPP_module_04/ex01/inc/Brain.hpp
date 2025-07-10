/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:15:04 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 20:36:10 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>
#include <string>

class Brain {
public:
  // Constructors
  Brain();
  Brain(const Brain &copy);

  // Destructor
  ~Brain();

  // Operators
  Brain &operator=(const Brain &assign);

  // Functions

private:
  std::string ideas[100];
};

#endif
