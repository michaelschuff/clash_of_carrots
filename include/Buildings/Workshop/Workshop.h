//
//  Workshop.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Workshop_h
#define Workshop_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "WorkshopData.h"

namespace coc
{
namespace BUILDING
{

class Workshop: public Building
{
public:
	Workshop(const glm::vec2& _position,
			 WORKSHOP::LEVEL _level = WORKSHOP::LEVEL1);
};

}
}

#endif /* Workshop_h */
