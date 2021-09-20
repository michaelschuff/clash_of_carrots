//
//  DarkElixirDrill.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef DarkElixirDrill_h
#define DarkElixirDrill_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "DarkElixirDrillData.h"

namespace coc
{
namespace BUILDING
{

class DarkElixirDrill: public Building
{
public:
	DarkElixirDrill(const glm::vec2& _position,
					DARK_ELIXIR_DRILL::LEVEL _level = DARK_ELIXIR_DRILL::LEVEL1);
};

}
}

#endif /* DarkElixirDrill_h */
