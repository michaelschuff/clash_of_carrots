//
//  HiddenTesla.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef HiddenTesla_h
#define HiddenTesla_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "HiddenTeslaData.h"

namespace coc
{
namespace BUILDING
{

class HiddenTesla: public Building
{
public:
	HiddenTesla(const glm::vec2& _position,
				HIDDEN_TESLA::LEVEL _level = HIDDEN_TESLA::LEVEL1);
};

}
}

#endif /* HiddenTesla_h */
