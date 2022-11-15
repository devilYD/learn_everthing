package org.YD.controller;

import org.YD.exception.BusinessException;
import org.YD.exception.SystemException;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;

@RestControllerAdvice
public class ProjectExceptionAdvice {

    @ExceptionHandler(SystemException.class)
    public Result doSystemException(SystemException systemException) {
        //记录日志
        //发送消息给运维
        //将异常信息发送邮件给开发人员
        return new Result(systemException.getCode(),null,systemException.getMessage());
    }

    @ExceptionHandler(BusinessException.class)
    public Result doBusinessException(BusinessException businessException) {
        return new Result(businessException.getCode(),null,businessException.getMessage());
    }

    @ExceptionHandler(Exception.class)
    public Result doException(Exception exception) {
        //记录日志
        //发送消息给运维
        //将异常信息发送邮件给开发人员
        return new Result(Code.SYSTEM_UNKNOWN_ERR,null,"系统繁忙，请稍后再试！");
    }
}
