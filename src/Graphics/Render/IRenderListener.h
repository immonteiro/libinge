/*
-----------------------------------------------------------------------------
This source file is part of Indigente Game Engine
Indigente - Interactive Digital Entertainment
For the latest info, see http://twiki.im.ufba.br/bin/view/Indigente

Copyright � 2004 Indigente


This program is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place - Suite 330, Boston, MA 02111-1307, USA, or go to
http://www.gnu.org/copyleft/lesser.txt.
-----------------------------------------------------------------------------
*/

#ifndef IRENDERLISTENER_H
#define IRENDERLISTENER_H
#include "../../Math/Vector3.h"
#include "../../Physics/Geoms/GeomBox.h"
#include "../../Physics/Geoms/GeomSphere.h"
#include <vector>

namespace InGE{
	using std::vector;


	class IRenderListener{
	  public:
		IRenderListener(){};
		virtual ~IRenderListener(){};
		virtual Vector3 getPosition()=0;
		virtual bool getBlend()=0;
		
		virtual PhysicalGeom *pGetPhysicalGeom() = 0;
		
		virtual void draw()=0;
	};

};
#endif // IRENDERLISTENER_H
