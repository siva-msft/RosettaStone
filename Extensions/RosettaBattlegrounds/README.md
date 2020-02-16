# RossetaBattlegrounds

RosettaBattlegrounds is a subproject of the RosettaStone Project that implements the [Hearthstone Battlegrounds](https://playhearthstone.com/en-us/blog/23156373) with C++17. It's a simulator for reinforcement learning rather than for real people gaming.

### Game Design

A `BGgame` class manages a total of eight players in a game. In real games, play time is limited, but here it waits for all players to complete the action and move on to the next phase.

- Hero Selection Phase
- Recruit Phase
    - Recruit a Minion
    - Refresh the Board
    - Fire a Minion
    - Freeze the Board
    - Improve your Tavern
    - Create a Triple
    - Arrange your Minions
- Combat Phase

### [Heroes Implementation](Documents/HeroList.md)

### [Cards Implementation](Documents/CardList.md)

