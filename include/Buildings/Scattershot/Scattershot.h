//
//  Scattershot.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Scattershot_h
#define Scattershot_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ScattershotData.h"

namespace coc
{
namespace BUILDING
{

class Scattershot: public Building
{
public:
	Scattershot(const glm::vec2& _position,
				SCATTERSHOT::LEVEL _level = SCATTERSHOT::LEVEL1);
};

}
}

#endif /* Scattershot_h */
