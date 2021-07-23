/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_webank_wedpr_ot_kkrt_NativeInterface */

#ifndef _Included_com_webank_wedpr_ot_kkrt_NativeInterface
#define _Included_com_webank_wedpr_ot_kkrt_NativeInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    newSender
 * Signature: (JJ[Ljava/lang/String;[J)J
 */
JNIEXPORT jlong JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_newSender
  (JNIEnv *, jclass, jlong, jlong, jobjectArray, jlongArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    deleteSender
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_deleteSender
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    getSenderEncryptedMessage
 * Signature: (J[[J[[B)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_getSenderEncryptedMessage
  (JNIEnv *, jclass, jlong, jobjectArray, jobjectArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    newReceiver
 * Signature: (JJ[J)J
 */
JNIEXPORT jlong JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_newReceiver
  (JNIEnv *, jclass, jlong, jlong, jlongArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    deleteReceiver
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_deleteReceiver
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step1ReceiverInitBaseOt
 * Signature: (J[B[J)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step1ReceiverInitBaseOt
  (JNIEnv *, jclass, jlong, jbyteArray, jlongArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step2SenderExtendSeedPack
 * Signature: (J[B[J[B)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step2SenderExtendSeedPack
  (JNIEnv *, jclass, jlong, jbyteArray, jlongArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step3ReceiverSetSeedPack
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step3ReceiverSetSeedPack
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step4SenderGenerateSeed
 * Signature: (J[J[B)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step4SenderGenerateSeed
  (JNIEnv *, jclass, jlong, jlongArray, jbyteArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step5ReceiverInitMatrix
 * Signature: (J[J[B[J[J)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step5ReceiverInitMatrix
  (JNIEnv *, jclass, jlong, jlongArray, jbyteArray, jlongArray, jlongArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step6SenderSetMatrix
 * Signature: (J[J[J[J[J)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step6SenderSetMatrix
  (JNIEnv *, jclass, jlong, jlongArray, jlongArray, jlongArray, jlongArray);

/*
 * Class:     com_webank_wedpr_ot_kkrt_NativeInterface
 * Method:    step7ReceiverGetFinalResultWithDecMessage
 * Signature: (J[J[[J[[B[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_webank_wedpr_ot_kkrt_NativeInterface_step7ReceiverGetFinalResultWithDecMessage
  (JNIEnv *, jclass, jlong, jlongArray, jobjectArray, jobjectArray, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif