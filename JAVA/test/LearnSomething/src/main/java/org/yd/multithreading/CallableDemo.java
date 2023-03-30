package org.yd.multithreading;

import java.util.concurrent.Callable;

public class CallableDemo implements Callable<String> {

    private String title;

    public CallableDemo(String title) {
        this.title = title;
    }

    @Override
    public String call() throws Exception {
        for (int i = 0;i<10;i++){
            System.out.println(title + "执行：i=" + i);
        }
        return title+"执行完了";
    }
}
