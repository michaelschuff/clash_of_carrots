//
//  DarkBarracks.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef DarkBarracks_h
#define DarkBarracks_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "DarkBarracksData.h"

namespace coc
{
namespace BUILDING
{

class DarkBarracks: public Building
{
public:
	DarkBarracks(const glm::vec2& _position,
				 DARK_BARRACKS::LEVEL _level = DARK_BARRACKS::LEVEL1);
};

}
}

#endif /* DarkBarracks_h */
