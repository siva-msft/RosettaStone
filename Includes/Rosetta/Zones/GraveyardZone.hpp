// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_GRAVEYARD_ZONE_HPP
#define ROSETTASTONE_GRAVEYARD_ZONE_HPP

#include <Rosetta/Models/Entity.hpp>
#include <Rosetta/Zones/Zone.hpp>

namespace RosettaStone
{
//!
//! \brief GraveyardZone class.
//!
//! This class is where the cards that are no longer used in the game.
//! Discarded cards and spell cards, after their activation, go directly to it.
//!
class GraveyardZone : public UnlimitedZone
{
 public:
    //! Constructs graveyard zone with given \p player.
    //! \param player The player.
    explicit GraveyardZone(Player* player);

    //! Copies the contents from reference \p rhs.
    //! \param rhs The source to copy the content.
    void RefCopy(GraveyardZone* rhs);

    //! Adds the specified entity into this zone, at the given position.
    //! \param entity The entity.
    //! \param zonePos The zone position.
    void Add(Playable* entity, int zonePos = -1) override;
};
}  // namespace RosettaStone

#endif  // ROSETTASTONE_GRAVEYARD_ZONE_HPP
