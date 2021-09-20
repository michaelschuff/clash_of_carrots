//
//  OnReady.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/20/21.
//

#ifndef OnReady_h
#define OnReady_h

#include <stdio.h>
#include <dpp/dpp.h>

namespace coc
{
struct handle_on_ready {
	const dpp::cluster& bot;
	const dpp::commandhandler& command_handler;
	
	handle_on_ready(const dpp::cluster& _bot,
					const dpp::commandhandler& _command_handler);
	
	void operator()(const dpp::ready_t& event) const;
};
}


#endif /* OnReady_h */
