//
//  GoldStorage.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/GoldStorage/GoldStorage.h"

coc::BUILDING::GoldStorage::GoldStorage(const glm::vec2& _position,
								  coc::BUILDING::GOLD_STORAGE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::GOLD_STORAGE_ID,
						_position,
						coc::BUILDING::GOLD_STORAGE::SIZE,
						false,
						true)
{
	
}
