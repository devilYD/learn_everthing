package org.yd.multithreading;

public class RunnableDemo implements Runnable{
    /**
     * 通过实现Runnable接口的run方法来实现多线程
     * Runnable接口没有start方法，使用时应该调用
     * Thread类的构造方法，把实现Runnable接口的
     * run方法的对象传入，再调用start方法
     */

    private String title;

    public RunnableDemo(String title) {
        this.title = title;
    }

    @Override
    public void run() {
        for (int i = 0;i<10;i++){
            System.out.println(title + "执行：i=" + i);
        }
    }
}
