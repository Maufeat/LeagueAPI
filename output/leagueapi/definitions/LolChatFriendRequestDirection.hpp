#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatFriendRequestDirection { /**/ 
    both_e = 2, /**/ 
    in_e = 0, /**/ 
    out_e = 1, /**/ 
  };
  static void to_json(json& j, const LolChatFriendRequestDirection& v) {
    switch(v) { 
    case LolChatFriendRequestDirection::both_e:
      j = "both";
    break;
    case LolChatFriendRequestDirection::in_e:
      j = "in";
    break;
    case LolChatFriendRequestDirection::out_e:
      j = "out";
    break;
    };
  }
  static void from_json(const json& j, LolChatFriendRequestDirection& v) {
    auto s = j.get<std::string>(); 
    if(s == "both") {
      v = LolChatFriendRequestDirection::both_e;
      return;
    } 
    if(s == "in") {
      v = LolChatFriendRequestDirection::in_e;
      return;
    } 
    if(s == "out") {
      v = LolChatFriendRequestDirection::out_e;
      return;
    } 
  }
} 