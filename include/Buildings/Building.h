//
//  Building.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/9/21.
//

#ifndef Building_h
#define Building_h

#include <stdio.h>
#include <cstdint>
#include <glm/vec2.hpp>
#include <string>

#include "Globals.h"


namespace coc
{
namespace BUILDING
{

class Building
{
public:
	Building(coc::BUILDING::BUILDING_ID _ID,
			 const glm::vec2& _position,
			 const glm::vec2& _size,
			 bool _is_defense,
			 bool _is_resource,
			 bool _is_targetable = true,
			 bool _is_rubble = false);
	
	
	
	
public:
	const coc::BUILDING::BUILDING_ID& ID;
	const glm::vec2& position;
	const glm::vec2& size;
	const bool& is_defense;
	const bool& is_resource;
	const bool& is_targetable;
	const bool& is_rubble;
	
private:
	const coc::BUILDING::BUILDING_ID m_ui64_id;
	glm::vec2 m_v2_position;
	const glm::vec2 m_v2_size;
	
	bool m_b_is_defense;
	bool m_b_is_resource;
	bool m_b_is_targetable;
	bool m_b_is_rubble;
};

}
}
#endif /* Building_h */
