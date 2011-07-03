/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_liblouis_liblouisutdml */

#ifndef _Included_org_liblouis_liblouisutdml
#define _Included_org_liblouis_liblouisutdml
#ifdef __cplusplus
extern "C" {
#endif
#undef org_liblouis_liblouisutdml_noContractions
#define org_liblouis_liblouisutdml_noContractions 1L
#undef org_liblouis_liblouisutdml_compbrlAtCursor
#define org_liblouis_liblouisutdml_compbrlAtCursor 2L
#undef org_liblouis_liblouisutdml_dotsIO
#define org_liblouis_liblouisutdml_dotsIO 4L
#undef org_liblouis_liblouisutdml_comp8Dots
#define org_liblouis_liblouisutdml_comp8Dots 8L
#undef org_liblouis_liblouisutdml_pass1Only
#define org_liblouis_liblouisutdml_pass1Only 16L
#undef org_liblouis_liblouisutdml_compbrlLeftCursor
#define org_liblouis_liblouisutdml_compbrlLeftCursor 32L
#undef org_liblouis_liblouisutdml_otherTrans
#define org_liblouis_liblouisutdml_otherTrans 64L
#undef org_liblouis_liblouisutdml_ucBrl
#define org_liblouis_liblouisutdml_ucBrl 128L
#undef org_liblouis_liblouisutdml_dontInit
#define org_liblouis_liblouisutdml_dontInit 1073741824L
#undef org_liblouis_liblouisutdml_htmlDoc
#define org_liblouis_liblouisutdml_htmlDoc 536870912L
/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_liblouis_liblouisutdml_version
  (JNIEnv *, jobject);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    translateString
 * Signature: (Ljava/lang/String;[B[B[ILjava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_translateString
  (JNIEnv *, jobject, jstring, jbyteArray, jbyteArray, jintArray, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    backTranslateString
 * Signature: (Ljava/lang/String;[B[B[ILjava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_backTranslateString
  (JNIEnv *, jobject, jstring, jbyteArray, jbyteArray, jintArray, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    translateFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_translateFile
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    translateTextFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_translateTextFile
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    backTranslateFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_backTranslateFile
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    charToDots
 * Signature: (Ljava/lang/String;[B[BLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_charToDots
  (JNIEnv *, jobject, jstring, jbyteArray, jbyteArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    dotsToChar
 * Signature: (Ljava/lang/String;[B[BLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_dotsToChar
  (JNIEnv *, jobject, jstring, jbyteArray, jbyteArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    checkTable
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_checkTable
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    compileString
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_compileString
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    setDataPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_setDataPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    charSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_liblouis_liblouisutdml_charSize
  (JNIEnv *, jobject);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    file2brl
 * Signature: ([Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_file2brl
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    setWriteablePath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_setWriteablePath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_free
  (JNIEnv *, jobject);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    louisTranslateString
 * Signature: (Ljava/lang/String;[B[I[B[I[BLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_louisTranslateString
  (JNIEnv *, jobject, jstring, jbyteArray, jintArray, jbyteArray, jintArray, jbyteArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    louisTranslate
 * Signature: (Ljava/lang/String;[B[I[B[I[B[I[I[ILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_louisTranslate
  (JNIEnv *, jobject, jstring, jbyteArray, jintArray, jbyteArray, jintArray, jbyteArray, jintArray, jintArray, jintArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    hyphenate
 * Signature: (Ljava/lang/String;[BI[BLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_hyphenate
  (JNIEnv *, jobject, jstring, jbyteArray, jint, jbyteArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    louisBackTranslateString
 * Signature: (Ljava/lang/String;[B[I[B[I[BLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_louisBackTranslateString
  (JNIEnv *, jobject, jstring, jbyteArray, jintArray, jbyteArray, jintArray, jbyteArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    louisBackTranslate
 * Signature: (Ljava/lang/String;[B[I[B[I[B[I[I[ILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_liblouis_liblouisutdml_louisBackTranslate
  (JNIEnv *, jobject, jstring, jbyteArray, jintArray, jbyteArray, jintArray, jbyteArray, jintArray, jintArray, jintArray, jstring, jint);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    setLogFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_setLogFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    logMessage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_logMessage
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_liblouis_liblouisutdml
 * Method:    logEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_liblouis_liblouisutdml_logEnd
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
