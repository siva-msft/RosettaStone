#ifndef ROSETTABATTLEGROUNDS_GAME_HPP
#define ROSETTABATTLEGROUNDS_GAME_HPP

#include <BGGames/BGPlayer.hpp>

#include <vector>
namespace RosettaBG
{
//!
//! \brief Game class.
//!
//! This class stores battlegrounds game states which consists of information of
//! all 8 players.
//!
class BGGame
{
public:
    using BGPlayers = std::vector<BGPlayer>;

    //! Constructs game with default values.
    BGGame() = default;

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
    int Play();

 private:
    //! Choose a hero from three candidates
    //! \param players BGPlayers for hero selection.
    void HeroSelectionPhase(BGPlayers& players);

    //! Recruit, sell, arrange minions etc.
    //! \param players BGPlayers for RecruitPhase
    void RecruitPhase(BGPlayers& players);

    //! Match(pair) players and proceed the battle.
    //! \param players BGPlayers for CombatPhase
    void CombatPhase(BGPlayers& players);

    //! Return true when game is finished
    //! \return true when game is finished
    //! \param players BGPlayers for checking alive
    bool IsFinishedGame(const BGPlayers& players) const;

    //! Return Number of Alive player in players vector
    //! \return number of Alive player in players vector
    //! \param players
    int GetAlivePlayerNum(const BGPlayers& players) const;
};

}  // namespace RossettaBG

#endif  // ROSETTABATTLEGROUNDS_GAME_HPP