#include <BGGames/BGPlayer.hpp>

namespace RosettaBG
{

BGPlayer::BGPlayer() : m_Alive(true), m_HP(40)
{
}

int BGPlayer::GetHP() const
{
    return m_HP;
}

void BGPlayer::SetHP(int number)
{
    m_HP = number;
}

void BGPlayer::SetAlive(bool status)
{
    m_Alive = status;
}

bool BGPlayer::GetAlive() const
{
    return m_Alive;
}

}