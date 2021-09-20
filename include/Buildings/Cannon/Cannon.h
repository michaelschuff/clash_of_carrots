//
//  Cannon.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Cannon_h
#define Cannon_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "CannonData.h"

namespace coc
{
namespace BUILDING
{

class Cannon: public Building
{
public:
	Cannon(const glm::vec2& _position,
		   CANNON::LEVEL _level = CANNON::LEVEL1);
};

}
}

#endif /* Cannon_h */
