//
//  Account.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Account_h
#define Account_h

#include <stdio.h>
#include <string>

#include <Buildings/Village.h>

namespace coc
{

class Account
{
public:
	Account(const std::string& _username,
			const Village& _village);
	
	const Village& village;
	const std::string& username;
	
private:
	std::string m_s_username;
	Village m_village;
};

}

#endif /* Account_h */
