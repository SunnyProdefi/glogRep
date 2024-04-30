#include <glog/logging.h>

int main(int argc, char* argv[]) {
    // 初始化Glog库
    google::InitGoogleLogging(argv[0]);

    // 设置日志文件的存储路径和前缀
    FLAGS_log_dir = "/var/tmp";
    LOG(INFO) << "This is an info message";
    LOG(WARNING) << "This is a warning message";
    LOG(ERROR) << "This is an error message";

    // 检查条件，如果不满足则记录FATAL级别日志并终止程序
    int x = 9;
    CHECK(x > 10) << "x is less than 10!";

    return 0;
}