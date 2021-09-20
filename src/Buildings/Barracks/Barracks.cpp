//
//  Barracks.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/Barracks/Barracks.h"

coc::BUILDING::Barracks::Barracks(const glm::vec2& _position,
								  coc::BUILDING::BARRACKS::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::BARRACKS_ID,
						_position,
						coc::BUILDING::BARRACKS::SIZE,
						false,
						true)
{
	
}
