//
//  XBow.h
//  clash_of_carrots
//
//  Created by Michael Schuff on 9/12/21.
//

#ifndef XBow_h
#define XBow_h

#include <stdio.h>
#include "Buildings/Building.h"
#include "XBowData.h"

namespace coc
{
namespace BUILDING
{

class XBow: public Building
{
public:
	XBow(const glm::vec2& _position,
		 X_BOW::LEVEL _level = X_BOW::LEVEL1);
};

}
}

#endif /* XBow_h */
