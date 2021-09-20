//
//  ElixirCollector.hpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef ElixirCollector_h
#define ElixirCollector_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "ElixirCollectorData.h"

namespace coc
{
namespace BUILDING
{

class ElixirCollector: public Building
{
public:
	ElixirCollector(const glm::vec2& _position,
					ELIXIR_COLLECTOR::LEVEL _level = ELIXIR_COLLECTOR::LEVEL1);
};

}
}

#endif /* ElixirCollector_h */
