//
//  Barracks.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Barracks_h
#define Barracks_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "BarracksData.h"

namespace coc
{
namespace BUILDING
{

class Barracks: public Building
{
public:
	Barracks(const glm::vec2& _position,
			 BARRACKS::LEVEL _level = BARRACKS::LEVEL1);
};

}
}

#endif /* Barracks_h */
