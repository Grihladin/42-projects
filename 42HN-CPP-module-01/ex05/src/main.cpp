/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:07:04 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:50:40 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void) {
  Harl h;
  h.complain("1");
  h.complain("qwereqwrqw    qwerqwer");
  h.complain("qwerqwfklhl");
  h.complain("DEBUG");
  h.complain("INFO");
  h.complain("WARNING");
  h.complain("ERROR");
}
