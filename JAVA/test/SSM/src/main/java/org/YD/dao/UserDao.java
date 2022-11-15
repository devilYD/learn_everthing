package org.YD.dao;

import org.YD.domain.User;
import org.apache.ibatis.annotations.Delete;
import org.apache.ibatis.annotations.Insert;
import org.apache.ibatis.annotations.Select;
import org.apache.ibatis.annotations.Update;

import java.util.List;

public interface UserDao {

    @Insert("INSERT INTO user VALUES(null,#{username},#{password})")
    public void save(User user);

    @Delete("DELETE FROM user WHERE id = #{id}")
    public void delete(Integer id);

    @Update("UPDATE user set username = ${username}, password = ${password WHERE id = ${id}")
    public void update(User user);


    @Select("SELECT * FROM user WHERE id = ${id}")
    public User getById(Integer id);

    @Select("SELECT * FROM user")
    public List<User> getAll();

}
