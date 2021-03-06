/*
-----------------------------------------------------------------------------
The MIT License (MIT)

Copyright (c) 2013-08-13 Tobias Peters <tobias.peters@kreativeffekt.at>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#include "FFVIICharacter.h"

namespace FFVII
{

    //-------------------------------------------------------------------------
    Character::Character()
    {

    }

    //-------------------------------------------------------------------------
    Character::~Character()
    {

    }

    //-------------------------------------------------------------------------
    Character::ChracterIdLookupMap
    Character::createLookupMap()
    {
        ChracterIdLookupMap lookup;
        lookup["AAAA"]      = CLOUD;
        lookup["n_cloud"]   = CLOUD;
        lookup["AAGB"]      = TIFA;
        lookup["n_tifa"]    = TIFA;
        lookup["AUFF"]      = AERIS;
        lookup["CAHC"]      = AERIS;
        lookup["n_erith"]   = AERIS;
        lookup["earithf"]   = AERIS;
        lookup["ACGD"]      = BARRET;
        lookup["ballet"]    = BARRET;
        lookup["ADDA"]      = RED;
        lookup["red"]       = RED;
        lookup["ABDA"]      = CID;
        lookup["cid"]       = CID;
        lookup["AEHD"]      = VINCENT;
        lookup["vincent"]   = VINCENT;
        lookup["ABJB"]      = YUVI;
        lookup["yufi"]      = YUVI;
        lookup["AEBC"]      = KETCY;
        lookup["ketcy"]     = KETCY;
        return lookup;
    }

    //-------------------------------------------------------------------------
    const Character::ChracterIdLookupMap
    Character::ms_character_id_lookups( Character::createLookupMap() );

    //-------------------------------------------------------------------------
    Character::CharacterId
    Character::getIdByName( const QGears::String& name )
    {
        ChracterIdLookupMap::const_iterator entry;
        entry = ms_character_id_lookups.find( name );
        if( entry != ms_character_id_lookups.end() )
        {
            return entry->second;
        }
        return UNKNOWN;
    }
    //-------------------------------------------------------------------------
}
