/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mil_navy_nrl_norm_NormStream */

#ifndef _Included_mil_navy_nrl_norm_NormStream
#define _Included_mil_navy_nrl_norm_NormStream
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    close
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormStream_close
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    write
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_mil_navy_nrl_norm_NormStream_write
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    flush
 * Signature: (ZLmil/navy/nrl/norm/enums/NormFlushMode;)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormStream_flush
  (JNIEnv *, jobject, jboolean, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    setAutoFlush
 * Signature: (Lmil/navy/nrl/norm/enums/NormFlushMode;)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormStream_setAutoFlush
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    setPushEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormStream_setPushEnable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    hasVacancy
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mil_navy_nrl_norm_NormStream_hasVacancy
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    markEom
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormStream_markEom
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    read
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_mil_navy_nrl_norm_NormStream_read
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    seekMsgStart
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mil_navy_nrl_norm_NormStream_seekMsgStart
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormStream
 * Method:    getReadOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_mil_navy_nrl_norm_NormStream_getReadOffset
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif