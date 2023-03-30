package org.yd.multithreading;

import org.junit.jupiter.api.Test;

public class RunnableDemoTest {

    /**
     * 调用Thread类的构造方法，把实现Runnable接口的run方法的对象传入，再调用start方法
     */
    @Test
    public void runTest() {
        RunnableDemo runnableDemo0 = new RunnableDemo("A");
        RunnableDemo runnableDemo1 = new RunnableDemo("B");
        RunnableDemo runnableDemo2 = new RunnableDemo("C");

        Thread thread0 = new Thread(runnableDemo0);
        Thread thread1 = new Thread(runnableDemo1);
        Thread thread2 = new Thread(runnableDemo2);

        thread0.start();
        thread1.start();
        thread2.start();
    }

    /**
     * 使用lambda表达式定义run方法
     */
    @Test
    public void lambdaRunTest() {
        for (int x = 0; x < 3;x ++) {
            String title = "线程" + x + "执行:";
            Runnable run = () -> {
                for (int y = 0; y < 10; y++) {
                    System.out.println(title + y);
                }
            };
            new Thread(run).start();
        }
    }

    @Test
    public void lambdaRunTest0() {
        for (int x = 0; x < 3;x ++) {
            String title = "线程" + x + "执行:";
            new Thread(() -> {
                for (int y = 0; y < 10; y++) {
                    System.out.println(title + y);
                }}).start();
        }
    }
}
