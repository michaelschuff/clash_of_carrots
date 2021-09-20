//
//  BarbarianKingAltar.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/BarbarianKingAltar/BarbarianKingAltar.h"

coc::BUILDING::BarbarianKingAltar::BarbarianKingAltar(const glm::vec2& _position,
													  coc::BUILDING::BARBARIAN_KING_ALTAR::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::BARBARIAN_KING_ALTAR_ID,
						_position,
						coc::BUILDING::BARBARIAN_KING_ALTAR::SIZE,
						false,
						true)
{
	
}
