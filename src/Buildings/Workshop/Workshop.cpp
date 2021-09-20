//
//  Workshop.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/Workshop/Workshop.h"

coc::BUILDING::Workshop::Workshop(const glm::vec2& _position,
								  coc::BUILDING::WORKSHOP::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::WORKSHOP_ID,
						_position,
						coc::BUILDING::WORKSHOP::SIZE,
						false,
						true)
{
	
}
