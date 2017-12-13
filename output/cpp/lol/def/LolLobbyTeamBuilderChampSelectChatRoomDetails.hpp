#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderChampSelectChatRoomDetails { 
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectChatRoomDetails& v) {
  j["chatRoomPassword"] = v.chatRoomPassword; 
  j["chatRoomName"] = v.chatRoomName; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectChatRoomDetails& v) {
  v.chatRoomPassword = j.at("chatRoomPassword").get<std::optional<std::string>>(); 
  v.chatRoomName = j.at("chatRoomName").get<std::string>(); 
  }
}