package org.YD.mapper;

import org.YD.pojo.Users;
import org.apache.ibatis.annotations.Mapper;

import java.util.List;

public interface userMapper {

    @Mapper
    public List<Users> selectById(int id);

    @Mapper
    public List<Users> selectByName(String username);

    @Mapper
    public List<Users> getAll();
}
