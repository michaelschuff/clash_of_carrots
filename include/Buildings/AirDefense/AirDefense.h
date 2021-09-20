//
//  AirDefense.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef AirDefense_h
#define AirDefense_h

#include <stdio.h>
#include <Buildings/Building.h>
#include "AirDefenseData.h"

namespace coc
{
namespace BUILDING
{

class AirDefense: public Building
{
public:
	AirDefense(const glm::vec2& _position,
			   AIR_DEFENSE::LEVEL _level = AIR_DEFENSE::LEVEL1);
};

}
}

#endif /* AirDefense_h */
