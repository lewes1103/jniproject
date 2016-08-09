package com.lwm.jnidemo;

/**
 * Created by wm.liu on 2016/8/6 14:32
 */
public class JniTest {
    static {
        System.loadLibrary("hello");
    }
    public static native String stringFromC();
    public static native int intFromC(int i,int j);
}
