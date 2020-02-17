#ifndef ROSETTABATTLEGROUNDS_PLAYER_HPP
#define ROSETTABATTLEGROUNDS_PLAYER_HPP

namespace RosettaBG
{
//!
//! \brief Game class.
//!
//! This class stores Hearthstone game states which consists of information of
//! both players.
//!
class BGPlayer
{
public:

    //! Constructs game with default values.
    BGPlayer();

    //! Default destructor.
    ~BGPlayer() = default;

    void SetHP(int number);

    int GetHP() const;

    void SetAlive(bool status);

    bool GetAlive() const;

private:
    bool m_Alive;
    int m_HP;
};

}  // namespace RossettaBG

#endif  // ROSETTABATTLEGROUNDS_PLAYER_HPP