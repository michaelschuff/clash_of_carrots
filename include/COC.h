//
//  COC.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/19/21.
//

#ifndef COC_h
#define COC_h

#include <stdio.h>
#include <vector>
#include <string>

#include <Buildings/Village.h>

namespace coc
{

class COC
{
public:
	COC() = delete;
	
	static bool CreateVillage(const std::string& _name, uint64_t _id);
	
private:
	
	static std::vector<coc::Village> villages;
	
};

}


#endif /* COC_h */
