//
//  OnMessageCreate.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/20/21.
//

#ifndef OnMessageCreate_h
#define OnMessageCreate_h

#include <stdio.h>
#include <dpp/dpp.h>
#include <COC.h>

namespace coc
{
struct handle_on_message_create {
	dpp::cluster& bot;
	dpp::commandhandler& command_handler;
	
	handle_on_message_create(dpp::cluster& _bot,
							 dpp::commandhandler& _command_handler);
	
	void operator()(const dpp::message_create_t& event);
};
}

#endif /* OnMessageCreate_h */
