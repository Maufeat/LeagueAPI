#pragma once
#include "../base_def.hpp" 
#include "LolChatFriendRequestDirection.hpp"
namespace lol {
  struct LolChatFriendRequestResource { 
    uint64_t id;
    std::string note;
    LolChatFriendRequestDirection direction;
    std::string name; 
  };
  inline void to_json(json& j, const LolChatFriendRequestResource& v) {
    j["id"] = v.id; 
    j["note"] = v.note; 
    j["direction"] = v.direction; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolChatFriendRequestResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.note = j.at("note").get<std::string>(); 
    v.direction = j.at("direction").get<LolChatFriendRequestDirection>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}