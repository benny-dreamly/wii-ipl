#ifndef IPL_SCENE_GC_WINDOW_H
#define IPL_SCENE_GC_WINDOW_H

#include "iplSceneHeader.h"

namespace ipl {
    namespace scene {
        SCENE_CLASS(MemoryBase);
        public:
        MemoryBase();

        SCENE_CLASS(MemoryBaseEvent);
        MemoryBaseEvent(MemoryBase*);
    }
}
