//
//  Building.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/9/21.
//

#include "Buildings/Building.h"

coc::BUILDING::Building::Building(coc::BUILDING::BUILDING_ID _ID,
						const glm::vec2& _position,
						const glm::vec2& _size,
						bool _is_defense,
						bool _is_resource,
						bool _is_targetable,
						bool _is_rubble) :
m_v2_position(_position),
m_ui64_id(_ID),
m_v2_size(_size),
m_b_is_defense(_is_defense),
m_b_is_resource(_is_resource),
m_b_is_targetable(_is_targetable),
m_b_is_rubble(_is_rubble),

ID(m_ui64_id),
position(m_v2_position),
size(m_v2_size),
is_defense(m_b_is_defense),
is_resource(m_b_is_resource),
is_targetable(m_b_is_targetable),
is_rubble(m_b_is_rubble)
{
	
}
