/*************************************************************************
> File Name: MetaData.h
> Project Name: Hearthstonepp
> Author: Young-Joong Kim
> Purpose: MetaData for TaskMeta
> Created Time: 2018/05/20
> Copyright (c) 2018, Young-Joong Kim
*************************************************************************/
#ifndef HEARTHSTONEPP_METADATA_H
#define HEARTHSTONEPP_METADATA_H

namespace Hearthstonepp
{
using status_t = unsigned int;
enum class MetaData : status_t
{
    INVALID,
    NULLPTR,

    PLAYER_SETTING,
    PLAYER_SETTING_REQUEST,
    PLAYER_SETTING_SUCCESS,

    SWAP,
    SWAP_SUCCESS,

    DRAW,
    DRAW_SUCCESS,
    DRAW_EXHAUST,
    DRAW_OVERDRAW,
    DRAW_EXHAUST_OVERDRAW,

    SHUFFLE,
    SHUFFLE_SUCCESS,

    BRIEF,
    BRIEF_EXPIRED,

    MULLIGAN,
    MULLIGAN_SUCCESS,
    MULLIGAN_FLATBUFFER_NULLPTR,
    MULLIGAN_INDEX_OUT_OF_RANGE,
    MULLIGAN_DUPLICATED_INDEX,

    MODIFY_MANA,
    MODIFY_MANA_SUCCESS,

    SELECT_CARD,
    SELECT_POSITION,
    SELECT_TARGET,

    PLAY_CARD,
    PLAY_CARD_SUCCESS,
    PLAY_CARD_FLATBUFFER_NULLPTR,
    PLAY_CARD_IDX_OUT_OF_RANGE,
    PLAY_CARD_NOT_ENOUGH_MANA,
    PLAY_CARD_INVALID_CARD_TYPE,

    PLAY_MINION,
    PLAY_MINION_SUCCESS,
    PLAY_MINION_FLATBUFFER_NULLPTR,
    PLAY_MINION_CANNOT_CONVERT_ENTITY,
    PLAY_MINION_POSITION_OUT_OF_RANGE,
    PLAY_MINION_MODIFY_MANA_FAIL,

    PLAY_WEAPON,
    PLAY_WEAPON_DYNAMIC_CAST_FAIL,
    PLAY_WEAPON_SUCCESS,

    PLAY_SPELL,
    PLAY_SPELL_SUCCESS,
    PLAY_SPELL_FLATBUFFER_NULLPTR,
    PLAY_SPELL_POSITION_OUT_OF_RANGE,
    PLAY_SPELL_INVALID_TARGET,
    PLAY_SPELL_MODIFY_MANA_FAIL,

    MODIFY_HEALTH,
    MODIFY_HEALTH_SUCCESS,

    COMBAT,
    COMBAT_SUCCESS,
    COMBAT_FLATBUFFER_NULLPTR,
    COMBAT_SRC_IDX_OUT_OF_RANGE,
    COMBAT_DST_IDX_OUT_OF_RANGE,
    COMBAT_ALREADY_ATTACKED,
    COMBAT_FIELD_HAVE_TAUNT,
    COMBAT_TARGET_STEALTH,
    COMBAT_TARGET_IMMUNE,

    ADD_ENCHANTMENT,
    ADD_ENCHANTMENT_SUCCESS,

    DESTROY,
    DESTROY_OPPONENT_WEAPON_SUCCESS,

    DISCARD,
    DISCARD_MY_HAND_SUCCESS,
    DISCARD_IDX_OUT_OF_RANGE,

    HEAL_FULL,
    HEAL_FULL_SUCCESS,

    POISONOUS,
    POISONOUS_SUCCESS,
    POISONOUS_IGNORE,

    FREEZE,
    FREEZE_SUCCESS,

    INIT_ATTACK_COUNT,
    INIT_ATTACK_COUNT_SUCCESS,

    GAME_END
};
}  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_METADATA_H
