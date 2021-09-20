//
//  ClanCastle.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/ClanCastle/ClanCastle.h"

coc::BUILDING::ClanCastle::ClanCastle(const glm::vec2& _position,
									  coc::BUILDING::TOWN_HALL::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::CLAN_CASTLE_ID,
						_position,
						coc::BUILDING::CLAN_CASTLE::SIZE,
						false,
						true)
{
	
}
