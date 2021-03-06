// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/Models/Minion.hpp>
#include <Rosetta/Tasks/SimpleTasks/IncludeTask.hpp>
#include <Rosetta/Tasks/SimpleTasks/SilenceTask.hpp>

namespace RosettaStone::SimpleTasks
{
SilenceTask::SilenceTask(EntityType entityType) : ITask(entityType)
{
    // Do nothing
}

TaskStatus SilenceTask::Impl(Player* player)
{
    auto playables =
        IncludeTask::GetEntities(m_entityType, player, m_source, m_target);

    for (auto& playable : playables)
    {
        auto minion = dynamic_cast<Minion*>(playable);
        if (!minion)
        {
            continue;
        }

        minion->Silence();
    }

    return TaskStatus::COMPLETE;
}

std::unique_ptr<ITask> SilenceTask::CloneImpl()
{
    return std::make_unique<SilenceTask>(m_entityType);
}
}  // namespace RosettaStone::SimpleTasks
