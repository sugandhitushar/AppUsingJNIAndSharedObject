#include"App.h"

JNIEXPORT jint JNICALL Java_App_calcBill(JNIEnv *env, jclass jobj, jintArray arr)
{
	int i, sum=0;
	jsize len = (*env)->GetArrayLength(env, arr);
		
	jint *params = (*env)->GetIntArrayElements(env, arr, 0);
	for(i=0; i<len; i++)
	{
		sum+=params[i];
	}
	
	(*env)->ReleaseIntArrayElements(env, arr, params, 0);
	
	return sum;
}
