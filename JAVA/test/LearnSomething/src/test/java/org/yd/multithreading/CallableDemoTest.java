package org.yd.multithreading;

import org.junit.jupiter.api.Test;

import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

public class CallableDemoTest {
    @Test
    public void callTest() throws ExecutionException, InterruptedException {
        // Callable实体类
        CallableDemo callableDemo0 = new CallableDemo("A");
        CallableDemo callableDemo1 = new CallableDemo("B");
        CallableDemo callableDemo2 = new CallableDemo("C");

        // 初始化FutureTask对象用于接收返回值
        FutureTask<String> futureTask0 = new FutureTask<>(callableDemo0);
        FutureTask<String> futureTask1 = new FutureTask<>(callableDemo1);
        FutureTask<String> futureTask2 = new FutureTask<>(callableDemo2);

        // 使用Thread的start方法运行多线程
        new Thread(futureTask0).start();
        new Thread(futureTask1).start();
        new Thread(futureTask2).start();

        // 使用FutureTask对象的get方法获取返回值
        System.out.println(futureTask0.get());
        System.out.println(futureTask1.get());
        System.out.println(futureTask2.get());
    }
}
