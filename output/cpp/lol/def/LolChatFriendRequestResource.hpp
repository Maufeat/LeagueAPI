#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatFriendRequestDirection.hpp>
namespace lol {
  struct LolChatFriendRequestResource { 
    std::string name;
    LolChatFriendRequestDirection direction;
    std::string note;
    uint64_t id; 
  };
  void to_json(json& j, const LolChatFriendRequestResource& v) {
    j["name"] = v.name; 
    j["direction"] = v.direction; 
    j["note"] = v.note; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatFriendRequestResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.direction = j.at("direction").get<LolChatFriendRequestDirection>(); 
    v.note = j.at("note").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}