//
//  DarkElixirStorage.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include <stdio.h>

#include "Buildings/DarkElixirStorage/DarkElixirStorage.h"

coc::BUILDING::DarkElixirStorage::DarkElixirStorage(const glm::vec2& _position,
													coc::BUILDING::DARK_ELIXIR_STORAGE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::DARK_ELIXIR_STORAGE_ID,
						_position,
						coc::BUILDING::DARK_ELIXIR_STORAGE::SIZE,
						false,
						true)
{
	
}
