//
// Created by 20252375 on 2016/7/23 023.
//

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#endif

/* Header for class lab_sodino_jnitest_MainActivity */

#ifndef _Included_com_jyqqhw_jnidemo_JniUtil_printJni
#define _Included_com_jyqqhw_jnidemo_JniUtil_printJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class: com_jyqqhw_jnidemo_JniUtil_printJni
 * Method: getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jyqqhw_jnidemo_JniUtil_printJni
        (JNIEnv * env, jobject obj, jstring name){
  return (*env)->NewStringUTF(env,"Hello From JNI!");
}

#ifdef __cplusplus
}
#endif
#endif
