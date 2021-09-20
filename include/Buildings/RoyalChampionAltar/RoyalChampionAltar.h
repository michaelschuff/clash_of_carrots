//
//  RoyalChampionAltar.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef RoyalChampionAltar_h
#define RoyalChampionAltar_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "RoyalChampionAltarData.h"

namespace coc
{
namespace BUILDING
{

class RoyalChampionAltar: public Building
{
public:
	RoyalChampionAltar(const glm::vec2& _position,
					   ROYAL_CHAMPION_ALTAR::LEVEL _level = ROYAL_CHAMPION_ALTAR::LEVEL1);
};

}
}

#endif /* RoyalChampionAltar_h */
