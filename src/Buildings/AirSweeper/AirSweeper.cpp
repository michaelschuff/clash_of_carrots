//
//  AirSweeper.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/AirSweeper/AirSweeper.h"

coc::BUILDING::AirSweeper::AirSweeper(const glm::vec2& _position,
									  coc::BUILDING::AIR_SWEEPER::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::AIR_SWEEPER_ID,
						_position,
						coc::BUILDING::AIR_SWEEPER::SIZE,
						false,
						true)
{
	
}
