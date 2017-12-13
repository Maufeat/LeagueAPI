#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectChampSelectChatRoomDetails { 
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName; 
  };
  void to_json(json& j, const LolChampSelectChampSelectChatRoomDetails& v) {
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName; 
  }
  void from_json(const json& j, LolChampSelectChampSelectChatRoomDetails& v) {
    if(auto it = j.find("chatRoomPassword"); it != j.end() && !it->is_null())
      v.chatRoomPassword = it->get<std::optional<std::string>>(); 
    v.chatRoomName = j.at("chatRoomName").get<std::string>(); 
  }
}