#ifndef ROSETTABATTLEGROUNDS_GAME_HPP
#define ROSETTABATTLEGROUNDS_GAME_HPP

namespace RosettaBG
{
//!
//! \brief Game class.
//!
//! This class stores Hearthstone game states which consists of information of
//! both players.
//!
class BGGame
{
public:
    //! Constructs game with default values.
    BGGame();

    //! Default destructor.
    ~BGGame() = default;

    //! Deleted copy constructor.
    BGGame(const BGGame &) = delete;

    //! Deleted move constructor.
    BGGame(BGGame &&) noexcept = delete;

    //! Deleted copy assignment operator.
    BGGame &operator=(const BGGame &) = delete;

    //! Deleted move assignment operator.
    BGGame &operator=(BGGame &&) noexcept = delete;

    //! Play battlegrounds game
    //! \return 0 is normal exit, other is error code
    int play();
private:
};

}  // namespace RossettaBG

#endif  // ROSETTABATTLEGROUNDS_GAME_HPP