//
//  Account.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Account/Account.h"

coc::Account::Account(const std::string& _username,
					  const coc::Village& _village) :
m_s_username(_username),
m_village(_village),

username(m_s_username),
village(m_village)
{
	
}
