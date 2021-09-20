//
//  DarkElixirStorage.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef DarkElixirStorage_h
#define DarkElixirStorage_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "DarkElixirStorageData.h"

namespace coc
{
namespace BUILDING
{

class DarkElixirStorage: public Building
{
public:
	DarkElixirStorage(const glm::vec2& _position,
					  DARK_ELIXIR_STORAGE::LEVEL _level = DARK_ELIXIR_STORAGE::LEVEL1);
};

}
}

#endif /* DarkElixirStorage_h */
