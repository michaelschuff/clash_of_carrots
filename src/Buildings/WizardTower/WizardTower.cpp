//
//  WizardTower.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#include "Buildings/WizardTower/WizardTower.h"

coc::BUILDING::WizardTower::WizardTower(const glm::vec2& _position,
										coc::BUILDING::WIZARD_TOWER::LEVEL _level) :
coc::BUILDING::Building(coc::BUILDING::WIZARD_TOWER_ID,
						_position,
						coc::BUILDING::WIZARD_TOWER::SIZE,
						false,
						true)
{
	
}
