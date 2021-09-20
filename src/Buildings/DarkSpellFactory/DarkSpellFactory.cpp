//
//  DarkSpellFactory.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/DarkSpellFactory/DarkSpellFactory.h"

coc::BUILDING::DarkSpellFactory::DarkSpellFactory(const glm::vec2& _position,
												  coc::BUILDING::DARK_SPELL_FACTORY::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::DARK_SPELL_FACTORY_ID,
						_position,
						coc::BUILDING::DARK_SPELL_FACTORY::SIZE,
						false,
						true)
{
	
}
