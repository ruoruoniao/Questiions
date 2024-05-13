/*!
 * Created by MikuSoft on 2024/5/13.
 * @details 当前是一个模型移动的代码, 共15个模型, 每一个模型每一次While循环调用一次step, <br/>
 *          每个模型执行到纬度为90°, 当15个模型都到达90°时, 停止计算.<br/>
 *          目前代码不止一处存在问题或不合理导致无法运行, 请修改为能够运行的状态, 返回值应为89.
 */

#include "Entity.h"
#include "unordered_map"

std::unordered_map<uint32_t, SegmentationFault::Entity> ENTITIES{};

int main(int argc, char **argv) {
    for (int index = 0; index < 15; ++index) {
        ENTITIES.emplace(index, SegmentationFault::Entity{});
    }
    int *count_times;
    while (!ENTITIES.empty()) {
        for (auto &[id, entity]: ENTITIES) {
            entity.step(id + 1);
        }
        for (auto &[id, entity]: ENTITIES) {
            if (entity.lat >= 90) {
                ENTITIES.erase(id);
            }
        }
        *count_times++;
    }
    printf("Count: %d", *count_times);
    return 0;
}
