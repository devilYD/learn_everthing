package org.yd.multithreading;

import org.junit.jupiter.api.Test;

/**
 * 多线程编程测试
 */
public class ThreadDemoTest {
    @Test
    public void threadTest() {
        ThreadDemo threadDemo0 = new ThreadDemo("A");
        ThreadDemo threadDemo1 = new ThreadDemo("B");
        ThreadDemo threadDemo2 = new ThreadDemo("C");
        ThreadDemo threadDemo3 = new ThreadDemo("D");

        threadDemo0.start();
        threadDemo1.start();
        threadDemo2.start();
        threadDemo3.start();
    }
}
