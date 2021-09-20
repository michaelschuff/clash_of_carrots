//
//  ElixirStorage.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ElixirStorage_h
#define ElixirStorage_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ElixirStorageData.h"

namespace coc
{
namespace BUILDING
{

class ElixirStorage: public Building
{
public:
	ElixirStorage(const glm::vec2& _position,
				  ELIXIR_STORAGE::LEVEL _level = ELIXIR_STORAGE::LEVEL1);
};

}
}


#endif /* ElixirStorage_h */
