//
//  ArcherQueenAltar.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ArcherQueenAltar_h
#define ArcherQueenAltar_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ArcherQueenAltarData.h"

namespace coc
{
namespace BUILDING
{

class ArcherQueenAltar: public Building
{
public:
	ArcherQueenAltar(const glm::vec2& _position,
					 ARCHER_QUEEN_ALTAR::LEVEL _level = ARCHER_QUEEN_ALTAR::LEVEL1);
};

}
}

#endif /* ArcherQueenAltar_h */
