#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChatFriendRequestDirection.hpp>
namespace lol {
  struct LolChatFriendRequestResource { 
    std::string note;
    uint64_t id;
    LolChatFriendRequestDirection direction;
    std::string name; 
  };
  void to_json(json& j, const LolChatFriendRequestResource& v) {
  j["note"] = v.note; 
  j["id"] = v.id; 
  j["direction"] = v.direction; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolChatFriendRequestResource& v) {
  v.note = j.at("note").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.direction = j.at("direction").get<LolChatFriendRequestDirection>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}