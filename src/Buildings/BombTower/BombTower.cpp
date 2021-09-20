//
//  BombTower.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/BombTower/BombTower.h"

coc::BUILDING::BombTower::BombTower(const glm::vec2& _position,
									coc::BUILDING::BOMB_TOWER::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::BOMB_TOWER_ID,
						_position,
						coc::BUILDING::BOMB_TOWER::SIZE,
						false,
						true)
{
	
}
