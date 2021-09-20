//
//  Mortar.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef Mortar_h
#define Mortar_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "MortarData.h"

namespace coc
{
namespace BUILDING
{

class Mortar: public Building
{
public:
	Mortar(const glm::vec2& _position,
		   MORTAR::LEVEL _level = MORTAR::LEVEL1);
};

}
}

#endif /* Mortar_h */
