//
//  ElixirCollector.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/ElixirCollector/ElixirCollector.h"

coc::BUILDING::ElixirCollector::ElixirCollector(const glm::vec2& _position,
												coc::BUILDING::ELIXIR_COLLECTOR::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::ELIXIR_COLLECTOR_ID,
						_position,
						coc::BUILDING::ELIXIR_COLLECTOR::SIZE,
						false,
						true)
{
	
}
