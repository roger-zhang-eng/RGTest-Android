#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_rogerzhang_rgtest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from Roger Zhang Android Test";
    return env->NewStringUTF(hello.c_str());
}
