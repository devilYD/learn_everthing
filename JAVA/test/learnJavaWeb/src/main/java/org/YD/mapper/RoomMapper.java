package org.YD.mapper;

import org.YD.Pojo.roomMate;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

import java.util.List;

public interface RoomMapper {
    List<roomMate> selectRoomMate();
    List<roomMate> selectByName(@Param("name") String name);

    @Select("select * from room")
    List<roomMate> selectAll();
}
