// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_SUMMON_OP_TASK_HPP
#define ROSETTASTONE_SUMMON_OP_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief SummonOpTask class.
//!
//! This class represents the task for summoning minion at
//! opponent's battlefield.
//!
class SummonOpTask : public ITask
{
 public:
    //! Constructs task with given \p card and \p amount.
    //! \param card The card to summon.
    //! \param amount The number of minions to summon.
    explicit SummonOpTask(std::optional<Card*> card = std::nullopt,
                          int amount = 1);

    //! Constructs task with given \p cardID and \p amount.
    //! \param cardID The card ID to summon.
    //! \param amount The number of minions to summon.
    explicit SummonOpTask(const std::string& cardID, int amount = 1);

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player* player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    std::unique_ptr<ITask> CloneImpl() override;

    std::optional<Card*> m_card = std::nullopt;
    int m_amount = 1;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_SUMMON_OP_TASK_HPP
