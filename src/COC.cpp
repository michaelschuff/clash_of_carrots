//
//  COC.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/19/21.
//

#include <COC.h>


bool coc::COC::CreateVillage(const std::string& _name, uint64_t _id)
{
	bool b_already_has_village = false;
	for (uint64_t i = 0; i < coc::COC::villages.size(); i++)
	{
		if (coc::COC::villages[i].player_id == _id)
		{
			b_already_has_village = true;
			break;
		}
		
	}
	
	if (!b_already_has_village)
	{
		coc::COC::villages.push_back(Village(_name, _id));
	}
	return !b_already_has_village;
}

std::vector<coc::Village> coc::COC::villages = std::vector<coc::Village>();
