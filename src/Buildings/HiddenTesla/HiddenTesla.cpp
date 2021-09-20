//
//  HiddenTesla.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/HiddenTesla/HiddenTesla.h"

coc::BUILDING::HiddenTesla::HiddenTesla(const glm::vec2& _position,
										coc::BUILDING::HIDDEN_TESLA::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::HIDDEN_TESLA_ID,
						_position,
						coc::BUILDING::HIDDEN_TESLA::SIZE,
						false,
						true)
{
	
}
