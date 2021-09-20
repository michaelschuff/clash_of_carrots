//
//  TownHall.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/10/21.
//

#include "Buildings/TownHall/TownHall.h"

coc::BUILDING::TownHall::TownHall(const glm::vec2& _position,
								  coc::BUILDING::TOWN_HALL::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::TOWN_HALL_ID,
		 _position,
		 coc::BUILDING::TOWN_HALL::SIZE,
		 coc::BUILDING::TOWN_HALL::isDefense(_level),
		 true)
{
	
}

bool coc::BUILDING::TOWN_HALL::isDefense(TOWN_HALL::LEVEL _level)
{
	return _level > 11;
}
