package org.YD.mapper;

import org.YD.pojo.User;
import org.apache.ibatis.annotations.Mapper;

import java.util.List;

public interface userMapper {

    @Mapper
    public List<User> selectById(int id);

    @Mapper
    public List<User> selectByName(String username);

    @Mapper
    public List<User> login(User user);

    @Mapper
    public void logon(User user);

    @Mapper
    public void logout(User user);
}
