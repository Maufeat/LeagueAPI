#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksChampSelectChatRoomDetails { /**/ 
    std::optional<std::string> chatRoomPassword;/**/
    std::string chatRoomName;/**/
  };
  static void to_json(json& j, const LolPerksChampSelectChatRoomDetails& v) { 
    j["chatRoomPassword"] = v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName;
  }
  static void from_json(const json& j, LolPerksChampSelectChatRoomDetails& v) { 
    v.chatRoomPassword = j.at("chatRoomPassword").get<std::optional<std::string>>(); 
    v.chatRoomName = j.at("chatRoomName").get<std::string>(); 
  }
} 