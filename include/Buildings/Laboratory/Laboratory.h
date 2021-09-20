//
//  Laboratory.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Laboratory_h
#define Laboratory_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "LaboratoryData.h"

namespace coc
{
namespace BUILDING
{

class Laboratory: public Building
{
public:
	Laboratory(const glm::vec2& _position,
			   LABORATORY::LEVEL _level = LABORATORY::LEVEL1);
};

}
}

#endif /* Laboratory_h */
