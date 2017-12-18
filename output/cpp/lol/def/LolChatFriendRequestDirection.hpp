#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatFriendRequestDirection {  
    both_e = 2,
    in_e = 0,
    out_e = 1,
  };
  inline void to_json(json& j, const LolChatFriendRequestDirection& v) {
    if(v == LolChatFriendRequestDirection::both_e) {
      j = "both";
      return;
    }
    if(v == LolChatFriendRequestDirection::in_e) {
      j = "in";
      return;
    }
    if(v == LolChatFriendRequestDirection::out_e) {
      j = "out";
      return;
    }
  }
  inline void from_json(const json& j, LolChatFriendRequestDirection& v) {
    if(j.get<std::string>() == "both") {
      v = LolChatFriendRequestDirection::both_e;
      return;
    } 
    if(j.get<std::string>() == "in") {
      v = LolChatFriendRequestDirection::in_e;
      return;
    } 
    if(j.get<std::string>() == "out") {
      v = LolChatFriendRequestDirection::out_e;
      return;
    } 
  }
}