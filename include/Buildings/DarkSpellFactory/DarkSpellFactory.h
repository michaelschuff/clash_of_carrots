//
//  DarkSpellFactory.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef DarkSpellFactory_h
#define DarkSpellFactory_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "DarkSpellFactoryData.h"

namespace coc
{
namespace BUILDING
{

class DarkSpellFactory: public Building
{
public:
	DarkSpellFactory(const glm::vec2& _position,
					 DARK_SPELL_FACTORY::LEVEL _level = DARK_SPELL_FACTORY::LEVEL1);
};

}
}

#endif /* DarkSpellFactory_h */
