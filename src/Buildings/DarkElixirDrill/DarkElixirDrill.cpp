//
//  DarkElixirDrill.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/DarkElixirDrill/DarkElixirDrill.h"

coc::BUILDING::DarkElixirDrill::DarkElixirDrill(const glm::vec2& _position,
												coc::BUILDING::DARK_ELIXIR_DRILL::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::DARK_ELIXIR_DRILL_ID,
						_position,
						coc::BUILDING::DARK_ELIXIR_DRILL::SIZE,
						false,
						true)
{
	
}

