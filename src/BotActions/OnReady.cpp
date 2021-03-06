//
//  OnReady.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/20/21.
//

#include <BotActions/OnReady.h>

coc::handle_on_ready::handle_on_ready(dpp::cluster& _bot,
									  dpp::commandhandler& _command_handler) :
bot(_bot),
command_handler(_command_handler)
{
	
}

void coc::handle_on_ready::operator()(const dpp::ready_t& event)
{
	command_handler.add_command("create", dpp::parameter_registration_t(), dpp::param_info());
	std::cout << "Logged in as " << bot.me.username << "!" << std::endl;
}
