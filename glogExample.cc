#include <glog/logging.h>

int main(int argc, char* argv[]) {
    FLAGS_logtostderr = true;  // 强制所有日志输出到 stderr
    // 初始化 glog
    google::InitGoogleLogging(argv[0]);

    // 使用不同的日志级别
    LOG(INFO) << "This is an info message";
    LOG(WARNING) << "This is a warning message";
    LOG(ERROR) << "This is an error message";
    for (int i = 0; i < 10; ++i) {
        LOG_FIRST_N(INFO, 3) << "Log this message only the first 3 times";
    }
    return 0;
}