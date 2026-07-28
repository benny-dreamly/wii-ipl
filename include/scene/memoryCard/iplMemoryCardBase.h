#ifndef IPL_SCENE_MEMORY_CARD_BASE_H
#define IPL_SCENE_MEMORY_CARD_BASE_H

#include "iplSceneHeader.h"

namespace ipl {
    namespace scene {
        SCENE_CLASS(MemoryBase) {
            public:

            struct AnmName {
                const char* animName;
                const char* groupName;
            };

            MemoryBase();
            virtual ~MemoryBase();

            // Must be virtual to match vtable offset 0x30!
            virtual void add_animation(const AnmName* anims, int count);
        };
    }
}

#endif // IPL_SCENE_MEMORY_CARD_BASE_H
