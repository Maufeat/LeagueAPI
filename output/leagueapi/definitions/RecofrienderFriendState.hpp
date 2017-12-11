#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RecofrienderFriendState { /**/ 
    BLOCKED_e = 2, /**/ 
    FRIEND_e = 1, /**/ 
    NONE_e = 0, /**/ 
  };
  static void to_json(json& j, const RecofrienderFriendState& v) {
    switch(v) { 
    case RecofrienderFriendState::BLOCKED_e:
      j = "BLOCKED";
    break;
    case RecofrienderFriendState::FRIEND_e:
      j = "FRIEND";
    break;
    case RecofrienderFriendState::NONE_e:
      j = "NONE";
    break;
    };
  }
  static void from_json(const json& j, RecofrienderFriendState& v) {
    auto s = j.get<std::string>(); 
    if(s == "BLOCKED") {
      v = RecofrienderFriendState::BLOCKED_e;
      return;
    } 
    if(s == "FRIEND") {
      v = RecofrienderFriendState::FRIEND_e;
      return;
    } 
    if(s == "NONE") {
      v = RecofrienderFriendState::NONE_e;
      return;
    } 
  }
} 