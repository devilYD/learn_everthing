package org.YD.aop;

import org.aspectj.lang.annotation.Aspect;
import org.aspectj.lang.annotation.Before;
import org.aspectj.lang.annotation.Pointcut;
import org.springframework.stereotype.Component;

@Component
@Aspect
public class TimerAdvice {

    @Pointcut("execution(void org..User.set*(*))")
    private void cut0(){}

    @Before("cut0()")
    public void method() {
        System.out.println(System.currentTimeMillis());
    }
}
