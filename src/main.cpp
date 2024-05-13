/*!
 * Created by MikuSoft on 2024/5/13.
 * @details 设计一个多线程程序, 其中: <br/>
 *          multiWriter: 三个线程进行写入(调用write()), 一个线程进行消费(将内容打印到控制台)<br/>
 *          multiReader: 一个线程进行写入(调用write()), 三个线程进行消费(将内容打印到控制台)<br/>
 *          要求: 先入先打印, 程序可持续运行, CPU尽可能只在实际有用时进行消耗
 */

#include "Write.h"

Thread::Write write{};

auto multiWriter() -> void {
}

auto multiReader() -> void {
}

int main(int argc, char **argv) {
    multiWriter();
    multiReader();
    write("1");
    return 0;
}
