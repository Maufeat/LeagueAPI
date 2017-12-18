#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampSelectChatRoomDetails { 
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName; 
  };
  inline void to_json(json& j, const LolPerksChampSelectChatRoomDetails& v) {
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName; 
  }
  inline void from_json(const json& j, LolPerksChampSelectChatRoomDetails& v) {
    if(auto it = j.find("chatRoomPassword"); it != j.end() && !it->is_null())
      v.chatRoomPassword = it->get<std::optional<std::string>>(); 
    v.chatRoomName = j.at("chatRoomName").get<std::string>(); 
  }
}