//
//  DarkBarracks.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/DarkBarracks/DarkBarracks.h"

coc::BUILDING::DarkBarracks::DarkBarracks(const glm::vec2& _position,
										  coc::BUILDING::DARK_BARRACKS::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::DARK_BARRACKS_ID,
						_position,
						coc::BUILDING::DARK_BARRACKS::SIZE,
						false,
						true)
{
	
}
