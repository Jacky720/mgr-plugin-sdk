#include "Pl0000.h"
#include "cGameUIManager.h"
#include "plugin.h"

// i didn't check if it its works, just robbed a quick one :O
void plugin::OnStartup()
{
    UpdateEvent::Add([]
    {
        Pl0000 *player = cGameUIManager::Instance.m_pPlayer;

        if (player)
        {
            if (player->m_nCurrentAction == 69 || player->m_nCurrentAction == 70) // Raiden only
                if (!player->m_nRipperModeEnabled)
                    player->EnableRipperMode();
        }
    });
}