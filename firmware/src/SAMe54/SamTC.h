/*
This Source Code Form is subject to the terms of the GNU General Public License v3.0.
If a copy of the GPL was not distributed with this
file, You can obtain one at https://www.gnu.org/licenses/gpl-3.0.html
Copyright (c) 2019 Panda Team
*/

#include "SamCLK.h"

enum class typeSamTC : int {Tc0=0, Tc1, Tc2, Tc3, Tc4, Tc5, Tc6, Tc7};

class CSamTC
{
protected:
    typeSamTC m_nTC;

public:
    CSamTC(typeSamTC nTC);

    void EnableIRQ(bool how);

    void EnableAPBbus(bool how);

    void ConnectGCLK(typeSamCLK nCLK);
};

