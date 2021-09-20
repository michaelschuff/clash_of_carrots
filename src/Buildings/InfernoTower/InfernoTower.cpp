//
//  InfernoTower.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/InfernoTower/InfernoTower.h"

coc::BUILDING::InfernoTower::InfernoTower(const glm::vec2& _position,
										  coc::BUILDING::INFERNO_TOWER::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::INFERNO_TOWER_ID,
						_position,
						coc::BUILDING::INFERNO_TOWER::SIZE,
						false,
						true)
{
	
}
