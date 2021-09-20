//
//  GoldMine.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/GoldMine/GoldMine.h"

coc::BUILDING::GoldMine::GoldMine(const glm::vec2& _position,
								  coc::BUILDING::GOLD_MINE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::GOLD_MINE_ID,
						_position,
						coc::BUILDING::GOLD_MINE::SIZE,
						false,
						true)
{
	
}
