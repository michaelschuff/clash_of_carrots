//
//  ArmyCamp.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ArmyCamp_h
#define ArmyCamp_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ArmyCampData.h"

namespace coc
{
namespace BUILDING
{

class ArmyCamp: public Building
{
public:
	ArmyCamp(const glm::vec2& _position,
			 ARMY_CAMP::LEVEL _level = ARMY_CAMP::LEVEL1);
};

}
}

#endif /* ArmyCamp_h */
