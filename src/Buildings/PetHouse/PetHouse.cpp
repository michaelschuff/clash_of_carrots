//
//  PetHouse.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/PetHouse/PetHouse.h"

coc::BUILDING::PetHouse::PetHouse(const glm::vec2& _position,
							  coc::BUILDING::PET_HOUSE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::PET_HOUSE_ID,
						_position,
						coc::BUILDING::PET_HOUSE::SIZE,
						false,
						true)
{
	
}
