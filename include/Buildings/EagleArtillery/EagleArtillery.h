//
//  EagleArtillery.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef EagleArtillery_h
#define EagleArtillery_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "EagleArtilleryData.h"

namespace coc
{
namespace BUILDING
{

class EagleArtillery: public Building
{
public:
	EagleArtillery(const glm::vec2& _position,
				   EAGLE_ARTILLERY::LEVEL _level = EAGLE_ARTILLERY::LEVEL1);
};

}
}

#endif /* EagleArtillery_h */
