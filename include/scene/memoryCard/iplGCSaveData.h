#ifndef IPL_SCENE_GC_SAVE_DATA_H
#define IPL_SCENE_GC_SAVE_DATA_H

#include "iplSceneHeader.h"
#include "iplGCWindow.h"

namespace ipl {
    namespace scene {
        SCENE_CLASS(GCSaveData);
        public:
        GCSaveData(EGG::Heap * heap, nand::LayoutFile * param_3, const char * param_4, const char* param_5, math::VEC3 param_6);

        private:

        layout::Object* mpLayout; // 0x04
        MemoryBaseEvent* mpEvent; // 0x34
        u32 mField_0x38; // 0x38

    }
}

#endif  // IPL_SCENE_GC_SAVE_DATA_H
