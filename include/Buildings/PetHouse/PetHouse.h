//
//  PetHouse.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef PetHouse_h
#define PetHouse_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "PetHouseData.h"

namespace coc
{
namespace BUILDING
{

class PetHouse: public Building
{
public:
	PetHouse(const glm::vec2& _position,
			 PET_HOUSE::LEVEL _level = PET_HOUSE::LEVEL1);
};

}
}

#endif /* PetHouse_h */
