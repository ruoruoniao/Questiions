/*!
 * Created by MikuSoft on 2024/5/13.
 * @details 当前有三个函数:<br/>
 *          Template::addInt<br/>
 *          Template::addString<br/>
 *          Template::addBool<br/>
 *          请补全template add函数, 使输入参数为int类型, string类型和bool类型时均能调用到对应的函数
 */

#include "Function.h"

template<class V>
auto add(V value) -> V {
}

int main(int argc, char **argv) {
    auto i = add(1);
    auto s = add("1");
    auto b = add(true);
    return 0;
}
