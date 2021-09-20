//
//  Cannon.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/Cannon/Cannon.h"

coc::BUILDING::Cannon::Cannon(const glm::vec2& _position,
							  coc::BUILDING::CANNON::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::CANNON_ID,
						_position,
						coc::BUILDING::CANNON::SIZE,
						false,
						true)
{
	
}
