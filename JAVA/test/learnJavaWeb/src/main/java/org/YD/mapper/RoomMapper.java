package org.YD.mapper;

import org.YD.Pojo.roomMate;
import java.util.List;

public interface RoomMapper {
    public List<roomMate> selectRoomMate();
    public List<roomMate> selectByName(String name);
}
