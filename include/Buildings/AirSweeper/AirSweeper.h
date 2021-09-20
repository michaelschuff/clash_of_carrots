//
//  AirSweeper.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef AirSweeper_h
#define AirSweeper_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "AirSweeperData.h"

namespace coc
{
namespace BUILDING
{

class AirSweeper: public Building
{
public:
	AirSweeper(const glm::vec2& _position,
			   AIR_SWEEPER::LEVEL _level = AIR_SWEEPER::LEVEL1);
};

}
}

#endif /* AirSweeper_h */
