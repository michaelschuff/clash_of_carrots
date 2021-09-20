//
//  TownHall.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/10/21.
//

#ifndef TownHall_h
#define TownHall_h

#include <stdio.h>

#include "Buildings/Building.h"
#include "TownHallData.h"

namespace coc
{
namespace BUILDING
{

class TownHall: public Building
{
public:
	TownHall(const glm::vec2& _position,
			 TOWN_HALL::LEVEL _level = TOWN_HALL::LEVEL1);
};



namespace TOWN_HALL
{

bool isDefense(TOWN_HALL::LEVEL _level);

}
}
}

#endif /* TownHall_h */
