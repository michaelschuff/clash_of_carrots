//
//  InfernoTower.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef InfernoTower_h
#define InfernoTower_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "InfernoTowerData.h"

namespace coc
{
namespace BUILDING
{

class InfernoTower: public Building
{
public:
	InfernoTower(const glm::vec2& _position,
				 INFERNO_TOWER::LEVEL _level = INFERNO_TOWER::LEVEL1);
};

}
}

#endif /* InfernoTower_h */
