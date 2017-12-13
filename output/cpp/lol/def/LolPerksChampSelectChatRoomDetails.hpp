#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksChampSelectChatRoomDetails { 
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName; 
  };
  void to_json(json& j, const LolPerksChampSelectChatRoomDetails& v) {
  j["chatRoomPassword"] = v.chatRoomPassword; 
  j["chatRoomName"] = v.chatRoomName; 
  }
  void from_json(const json& j, LolPerksChampSelectChatRoomDetails& v) {
  v.chatRoomPassword = j.at("chatRoomPassword").get<std::optional<std::string>>(); 
  v.chatRoomName = j.at("chatRoomName").get<std::string>(); 
  }
}