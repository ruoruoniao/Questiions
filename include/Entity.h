//
// Created by MikuSoft on 2024/5/13.
//

#ifndef SegmentationFault_Entity_H
#define SegmentationFault_Entity_H

// region Include
// region STL
// endregion
// region ThirdParty
// endregion
// region Self
// endregion
// endregion

// region Using NameSpace
// endregion

// region Define
namespace SegmentationFault {
    class Entity {
    public:
        double lon = .0;
        double lat = .0;
        double h   = .0;

    public:
        auto step(const double step) -> void {
            lon += step;
            lat += step;
            h += step;
        }
    };
}
#endif //SegmentationFault_Entity_H
