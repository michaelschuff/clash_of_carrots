//
//  RoyalChampionAltar.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/RoyalChampionAltar/RoyalChampionAltar.h"

coc::BUILDING::RoyalChampionAltar::RoyalChampionAltar(const glm::vec2& _position,
													  coc::BUILDING::ROYAL_CHAMPION_ALTAR::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::ROYAL_CHAMPION_ALTAR_ID,
						_position,
						coc::BUILDING::ROYAL_CHAMPION_ALTAR::SIZE,
						false,
						true)
{
	
}
