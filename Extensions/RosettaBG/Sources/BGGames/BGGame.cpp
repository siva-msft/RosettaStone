#include <BGGames/BGGame.hpp>

namespace RosettaBG
{

int BGGame::Play()
{
    BGPlayers players;

    HeroSelectionPhase(players);

    while (!IsFinishedGame(players))
    {
        RecruitPhase(players);
        CombatPhase(players);
    }

    return 0; // 0 is normal exit;
}

void BGGame::HeroSelectionPhase(BGGame::BGPlayers &players) 
{
    // Hero List에서 3개씩 8명에게 보여줌
    // 사용자의 응답을 받고 종료
}

void BGGame::RecruitPhase(BGGame::BGPlayers &players) 
{
    // 사용자와 다양한 상호작용
}

void BGGame::CombatPhase(BGGame::BGPlayers &players) 
{
    // 사용자와 상호작용 없이 자동으로 전투 매칭 및 진행
}

bool BGGame::IsFinishedGame(const BGGame::BGPlayers &players) const 
{
    return GetAlivePlayerNum(players) <= 1;
}

int BGGame::GetAlivePlayerNum(const BGGame::BGPlayers &players) const
{
    int cnt = 0;
    for (auto player : players)
    {
        if (player.GetAlive())
            ++cnt;
    }
    return cnt;
}

}
