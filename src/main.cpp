//
//  main.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/8/21.
//

#include <dpp/dpp.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include <glm/vec2.hpp>

#include <COC.h>
#include <Account/Account.h>
#include <BotActionHandlers/OnReady.h>
#include <BotActionHandlers/OnMessageCreate.h>


int main()
{
	std::string token;
	std::ifstream config_file("../config.txt");
	config_file >> token;
	
    dpp::cluster bot(token);
	
	dpp::commandhandler command_handler(&bot);
	command_handler.add_prefix("coc");
	
	bot.on_ready(coc::handle_on_ready(bot, command_handler));
	bot.on_message_create(coc::handle_on_message_create(bot, command_handler));

    bot.start(false);
    return 0;
}
