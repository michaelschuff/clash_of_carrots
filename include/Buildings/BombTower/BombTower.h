//
//  BombTower.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef BombTower_h
#define BombTower_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "BombTowerData.h"

namespace coc
{
namespace BUILDING
{

class BombTower: public Building
{
public:
	BombTower(const glm::vec2& _position,
			  BOMB_TOWER::LEVEL _level = BOMB_TOWER::LEVEL1);
};

}
}

#endif /* BombTower_h */
