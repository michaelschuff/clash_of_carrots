//
//  AirDefense.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/AirDefense/AirDefense.h"

coc::BUILDING::AirDefense::AirDefense(const glm::vec2& _position,
									  coc::BUILDING::AIR_DEFENSE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::AIR_DEFENSE_ID,
						_position,
						coc::BUILDING::AIR_DEFENSE::SIZE,
						false,
						true)
{
	
}
