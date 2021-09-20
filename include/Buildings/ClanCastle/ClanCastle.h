//
//  ClanCastle.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ClanCastle_h
#define ClanCastle_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ClanCastleData.h"

namespace coc
{
namespace BUILDING
{

class ClanCastle: public Building
{
public:
	ClanCastle(const glm::vec2& _position,
			   CLAN_CASTLE::LEVEL _level = CLAN_CASTLE::LEVEL0);
};

}
}

#endif /* ClanCastle_h */
