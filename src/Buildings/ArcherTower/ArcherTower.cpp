//
//  ArcherTower.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/ArcherTower/ArcherTower.h"

coc::BUILDING::ArcherTower::ArcherTower(const glm::vec2& _position,
										coc::BUILDING::ARCHER_TOWER::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::ARCHER_TOWER_ID,
						_position,
						coc::BUILDING::ARCHER_TOWER::SIZE,
						false,
						true)
{
	
}
