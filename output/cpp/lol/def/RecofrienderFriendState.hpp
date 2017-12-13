#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RecofrienderFriendState {  
    BLOCKED_e = 2,
    FRIEND_e = 1,
    NONE_e = 0,
  };
  void to_json(json& j, const RecofrienderFriendState& v) {
    if(v == RecofrienderFriendState::BLOCKED_e) {
      j = "BLOCKED";
      return;
    }
    if(v == RecofrienderFriendState::FRIEND_e) {
      j = "FRIEND";
      return;
    }
    if(v == RecofrienderFriendState::NONE_e) {
      j = "NONE";
      return;
    }
  }
  void from_json(const json& j, RecofrienderFriendState& v) {
    if(j.get<std::string>() == "BLOCKED") {
      v = RecofrienderFriendState::BLOCKED_e;
      return;
    } 
    if(j.get<std::string>() == "FRIEND") {
      v = RecofrienderFriendState::FRIEND_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = RecofrienderFriendState::NONE_e;
      return;
    } 
  }
}