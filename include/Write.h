//
// Created by MikuSoft on 2024/5/13.
// Copyright (c) 2024 SiYuanHongRui All rights reserved.
//

#ifndef Thread_Write_H
#define Thread_Write_H

// region Include
// region STL
#include "vector"
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
// endregion

namespace Thread {
    struct Write {
        std::vector<std::string> cache{};

        auto operator()(const std::string &value) -> void {
            cache.emplace_back(value);
        }
    };
}
#undef PRETTY_FILE_NAME
#endif //Thread_Write_H
