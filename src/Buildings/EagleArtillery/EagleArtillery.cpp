//
//  EagleArtillery.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/EagleArtillery/EagleArtillery.h"

coc::BUILDING::EagleArtillery::EagleArtillery(const glm::vec2& _position,
											  coc::BUILDING::EAGLE_ARTILLERY::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::EAGLE_ARTILLERY_ID,
						_position,
						coc::BUILDING::EAGLE_ARTILLERY::SIZE,
						false,
						true)
{
	
}
