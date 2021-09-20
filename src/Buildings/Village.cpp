//
//  Village.cpp
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/10/21.
//

#include <Buildings/Village.h>

coc::Village::Village(const std::vector<std::vector<BUILDING::Building*>>& _buildings,
					  const std::string& _player_name,
					  uint64_t _player_id,
					  bool _ignore_constraints) :
m_vvui64_buildings(_buildings),
m_s_player_name(_player_name),
m_s_player_id(_player_id),
m_b_ignore_constraints(_ignore_constraints),

player_name(m_s_player_name),
player_id(m_s_player_id),
buildings(m_vvui64_buildings)
{
	
}

coc::Village::Village(const std::string& _player_name,
					  uint64_t& _player_id) :
m_vvui64_buildings(std::vector<std::vector<BUILDING::Building*>>(coc::BUILDING::NUM_BUILDING_TYPES)),
m_s_player_name(_player_name),
m_s_player_id(_player_id),
m_b_ignore_constraints(false),

player_name(m_s_player_name),
player_id(m_s_player_id),
buildings(m_vvui64_buildings)
{
	m_vvui64_buildings[coc::BUILDING::TOWN_HALL_ID].push_back(new coc::BUILDING::TownHall(glm::vec2(20, 20)));
}
