#include <jni.h>
/* Header for class com_lwm_jnidemo_JniTest */

#ifndef _Included_com_lwm_jnidemo_JniTest
#define _Included_com_lwm_jnidemo_JniTest

/*
 * Class:     com_lwm_jnidemo_JniTest
 * Method:    stringFromC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lwm_jnidemo_JniTest_stringFromC
  (JNIEnv *env, jclass clazz){
  return (*env)->NewStringUTF(*env,"String来自C！");
  }

/*
 * Class:     com_lwm_jnidemo_JniTest
 * Method:    intFromC
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_lwm_jnidemo_JniTest_intFromC
  (JNIEnv *env, jclass clazz, jint count1, jint count2){
  return count1+count2;
  }
