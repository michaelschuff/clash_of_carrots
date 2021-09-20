//
//  ArcherTower.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ArcherTower_h
#define ArcherTower_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ArcherTowerData.h"

namespace coc
{
namespace BUILDING
{

class ArcherTower: public Building
{
public:
	ArcherTower(const glm::vec2& _position,
				ARCHER_TOWER::LEVEL _level = ARCHER_TOWER::LEVEL1);
};

}
}

#endif /* ArcherTower_h */
