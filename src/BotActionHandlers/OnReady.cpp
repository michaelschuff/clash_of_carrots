//
//  OnReady.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/20/21.
//

#include <BotActionHandlers/OnReady.h>

coc::handle_on_ready::handle_on_ready(const dpp::cluster& _bot,
									  const dpp::commandhandler& _command_handler) :
bot(_bot),
command_handler(_command_handler)
{
	
}

void coc::handle_on_ready::operator()(const dpp::ready_t& event) const
{
	std::cout << "Logged in as " << bot.me.username << "!" << std::endl;
}
