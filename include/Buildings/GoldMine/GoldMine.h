//
//  GoldMine.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef GoldMine_h
#define GoldMine_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "GoldMineData.h"

namespace coc
{
namespace BUILDING
{

class GoldMine: public Building
{
public:
	GoldMine(const glm::vec2& _position,
			   GOLD_MINE::LEVEL _level = GOLD_MINE::LEVEL1);
};

}
}


#endif /* GoldMine_h */
