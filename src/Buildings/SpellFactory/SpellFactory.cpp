//
//  SpellFactory.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/SpellFactory/SpellFactory.h"

coc::BUILDING::SpellFactory::SpellFactory(const glm::vec2& _position,
										  coc::BUILDING::SPELL_FACTORY::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::SPELL_FACTORY_ID,
						_position,
						coc::BUILDING::SPELL_FACTORY::SIZE,
						false,
						true)
{
	
}
