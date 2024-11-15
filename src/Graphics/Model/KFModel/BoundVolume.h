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

#ifndef BOUNDVOLUME_H
#define BOUNDVOLUME_H
#include "../../../Math/Vector3.h"
#include "Md3/md3Format.h"

namespace InGE{

	using namespace InGE;

	class BoundVolume{
	  private:
	  	Vector3 m_minBound;
	  	Vector3 m_maxBound;
	  	Vector3 m_origin;
	  	float m_radius;
	  	
	  public:
	
		BoundVolume();
		BoundVolume(sBoundVolume boundVolume);
		virtual ~BoundVolume();
		
		void setBoundVolume(sBoundVolume boundVolume);
		
		BoundVolume *interpolate(BoundVolume *pBoundVolume, float interpolation);
		
		Vector3 getMinBound();
		Vector3 getMaxBound();
		Vector3 getOrigin();
		float getRadius();
	};
};
#endif // BOUNDVOLUME_H
