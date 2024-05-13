//
// Created by MikuSoft on 2024/5/13.
//

#ifndef Template_Function_H
#define Template_Function_H

// region Include
// region STL
#include "string"
// endregion
// region ThirdParty
// endregion
// region Self
// endregion
// endregion

// region Using NameSpace
// endregion

// region Define
namespace Template {
    inline auto addInt(const int value) -> int {
        return value + 1;
    }

    inline auto addString(const std::string &value) -> std::string {
        return value + "1";
    }

    inline auto addBool(const bool value) -> bool {
        return !value;
    }
}
#endif //Template_Function_H
