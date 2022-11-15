/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:40:14 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 18:30:29 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << "Value on top of Stack " << mstack.top() << std::endl;

  std::cout << "Poping first value of stack" << std::endl;
  mstack.pop();

  std::cout << "Size of stack now : " << mstack.size() << std::endl;
  
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  
  ++it;
  --it;
  
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
 
  std::stack<int> s(mstack);
  
  return 0;
}
