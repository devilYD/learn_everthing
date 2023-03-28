package org.yd.multithreading;

/**
 * 一个类继承Thread类即为线程主体类
 * 需要覆写run方法作为线程的主方法
 */
public class ThreadDemo extends Thread{

    private String title;

    public ThreadDemo(String title) {
        this.title = title;
    }

    @Override
    public void run() {
        for (int i = 0;i<10;i++){
            System.out.println(title + "执行：i=" + i);
        }
    }
}
