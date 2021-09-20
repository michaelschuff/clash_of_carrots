//
//  XBow.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/XBow/XBow.h"

coc::BUILDING::XBow::XBow(const glm::vec2& _position,
						  coc::BUILDING::X_BOW::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::X_BOW_ID,
						_position,
						coc::BUILDING::X_BOW::SIZE,
						false,
						true)
{
	
}
