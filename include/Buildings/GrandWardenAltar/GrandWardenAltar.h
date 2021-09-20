//
//  GrandWardenAltar.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef GrandWardenAltar_h
#define GrandWardenAltar_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "GrandWardenAltarData.h"

namespace coc
{
namespace BUILDING
{

class GrandWardenAltar: public Building
{
public:
	GrandWardenAltar(const glm::vec2& _position,
					 GRAND_WARDEN_ALTAR::LEVEL _level = GRAND_WARDEN_ALTAR::LEVEL1);
};

}
}

#endif /* GrandWarden_h */
