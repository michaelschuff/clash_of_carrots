//
//  ElixirStorage.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/ElixirStorage/ElixirStorage.h"

coc::BUILDING::ElixirStorage::ElixirStorage(const glm::vec2& _position,
											coc::BUILDING::ELIXIR_STORAGE::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::ELIXIR_STORAGE_ID,
						_position,
						coc::BUILDING::ELIXIR_STORAGE::SIZE,
						false,
						true)
{
	
}
