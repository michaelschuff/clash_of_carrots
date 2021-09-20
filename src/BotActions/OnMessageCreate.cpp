//
//  OnMessageCreate.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/20/21.
//

#include <BotActions/OnMessageCreate.h>

coc::handle_on_message_create::handle_on_message_create(dpp::cluster& _bot,
														dpp::commandhandler& _command_handler) :
bot(_bot),
command_handler(_command_handler)
{
	
}

void coc::handle_on_message_create::operator()(const dpp::message_create_t& event)
{
	coc::COC::CreateVillage(event.msg->author->username, event.msg->author->id);
}
