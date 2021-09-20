//
//  Scattershot.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/Scattershot/Scattershot.h"

coc::BUILDING::Scattershot::Scattershot(const glm::vec2& _position,
							  coc::BUILDING::SCATTERSHOT::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::SCATTERSHOT_ID,
						_position,
						coc::BUILDING::SCATTERSHOT::SIZE,
						false,
						true)
{
	
}
