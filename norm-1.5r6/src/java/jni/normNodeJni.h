/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mil_navy_nrl_norm_NormNode */

#ifndef _Included_mil_navy_nrl_norm_NormNode
#define _Included_mil_navy_nrl_norm_NormNode
#ifdef __cplusplus
extern "C" {
#endif
#undef mil_navy_nrl_norm_NormNode_NORM_NODE_ANY
#define mil_navy_nrl_norm_NormNode_NORM_NODE_ANY -1LL
/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    setUnicastNack
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_setUnicastNack
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    setNackingMode
 * Signature: (Lmil/navy/nrl/norm/enums/NormNackingMode;)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_setNackingMode
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    setRepairBoundary
 * Signature: (Lmil/navy/nrl/norm/enums/NormRepairBoundary;)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_setRepairBoundary
  (JNIEnv *, jobject, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    setRxRobustFactor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_setRxRobustFactor
  (JNIEnv *, jobject, jint);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    getId
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_mil_navy_nrl_norm_NormNode_getId
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    getAddress
 * Signature: ()Ljava/net/InetSocketAddress;
 */
JNIEXPORT jobject JNICALL Java_mil_navy_nrl_norm_NormNode_getAddress
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    getGrtt
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mil_navy_nrl_norm_NormNode_getGrtt
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    getCommand
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_mil_navy_nrl_norm_NormNode_getCommand
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    freeBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_freeBuffers
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    retain
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_retain
  (JNIEnv *, jobject);

/*
 * Class:     mil_navy_nrl_norm_NormNode
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mil_navy_nrl_norm_NormNode_release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
