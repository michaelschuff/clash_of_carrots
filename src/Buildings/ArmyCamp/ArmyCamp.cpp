//
//  ArmyCamp.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/ArmyCamp/ArmyCamp.h"

coc::BUILDING::ArmyCamp::ArmyCamp(const glm::vec2& _position,
								  coc::BUILDING::ARMY_CAMP::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::ARMY_CAMP_ID,
						_position,
						coc::BUILDING::ARMY_CAMP::SIZE,
						false,
						true)
{
	
}
