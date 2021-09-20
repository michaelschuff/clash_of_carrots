//
//  GoldStorage.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef GoldStorage_h
#define GoldStorage_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "GoldStorageData.h"

namespace coc
{
namespace BUILDING
{

class GoldStorage: public Building
{
public:
	GoldStorage(const glm::vec2& _position,
			 	GOLD_STORAGE::LEVEL _level = GOLD_STORAGE::LEVEL1);
};

}
}

#endif /* GoldStorage_h */
