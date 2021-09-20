//
//  WizardTower.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef WizardTower_h
#define WizardTower_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "WizardTowerData.h"

namespace coc
{
namespace BUILDING
{

class WizardTower: public Building
{
public:
	WizardTower(const glm::vec2& _position,
				WIZARD_TOWER::LEVEL _level = WIZARD_TOWER::LEVEL1);
};

}
}

#endif /* WizardTower_h */
