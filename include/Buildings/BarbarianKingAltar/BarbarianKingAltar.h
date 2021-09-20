//
//  BarbarianKingAltar.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef BarbarianKingAltar_h
#define BarbarianKingAltar_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "BarbarianKingAltarData.h"

namespace coc
{
namespace BUILDING
{

class BarbarianKingAltar: public Building
{
public:
	BarbarianKingAltar(const glm::vec2& _position,
					   BARBARIAN_KING_ALTAR::LEVEL _level = BARBARIAN_KING_ALTAR::LEVEL1);
};

}
}

#endif /* BarbarianKingAltar_h */
