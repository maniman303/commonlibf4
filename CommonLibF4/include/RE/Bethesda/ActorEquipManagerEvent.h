#pragma once

#include "REX/EnumSet.h"

namespace RE
{
    class BGSObjectInstance;
    class Actor;

    namespace ActorEquipManagerEvent
    {
        enum class Type : std::int32_t
        {
            kEquip = 0x0,
            kUnequip = 0x1
        };
                                
        struct Event
        {
            REX::EnumSet<Type, std::uint16_t> changeType;     // 00
            const BGSObjectInstance*          itemAffected;   // 08
            Actor*                            actorAffected;  // 10
        };
    }
}