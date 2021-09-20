//
//  Village.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/10/21.
//

#ifndef Village_h
#define Village_h

#include <stdio.h>
#include <cstdint>
#include <vector>
#include <string>

#include <glm/vec2.hpp>

#include "Globals.h"
#include "Buildings/Building.h"
#include "Buildings/Buildings.h"

namespace coc
{

class Village
{
public:
	Village(const std::string& m_s_player_name,
			uint64_t& m_s_player_id);
	
	Village(const std::vector<std::vector<BUILDING::Building*>>& _buildings,
			const std::string& m_s_player_name,
			uint64_t m_s_player_id,
			bool _ignore_constraints = false);
public:
	const std::vector<std::vector<BUILDING::Building*>>& buildings;
	const std::string& player_name;
	const uint64_t& player_id;

private:
	std::vector<std::vector<BUILDING::Building*>> m_vvui64_buildings;
	
	std::string m_s_player_name;
	uint64_t m_s_player_id;
	
	bool m_b_ignore_constraints;
	
};

}


#endif /* Village_h */
