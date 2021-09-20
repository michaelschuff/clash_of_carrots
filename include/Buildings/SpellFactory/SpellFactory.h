//
//  SpellFactory.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef SpellFactory_h
#define SpellFactory_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "SpellFactoryData.h"

namespace coc
{
namespace BUILDING
{

class SpellFactory: public Building
{
public:
	SpellFactory(const glm::vec2& _position,
				SPELL_FACTORY::LEVEL _level = SPELL_FACTORY::LEVEL1);
};

}
}

#endif /* SpellFactory_h */
