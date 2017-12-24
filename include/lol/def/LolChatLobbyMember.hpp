#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatLobbyMember { 
    uint64_t id;
    bool isOwner; 
  };
  inline void to_json(json& j, const LolChatLobbyMember& v) {
    j["id"] = v.id; 
    j["isOwner"] = v.isOwner; 
  }
  inline void from_json(const json& j, LolChatLobbyMember& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
  }
}