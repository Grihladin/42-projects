/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:06:01 by mratke            #+#    #+#             */
/*   Updated: 2025/06/27 21:32:33 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl {
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  void complain(std::string level);
};

#endif
