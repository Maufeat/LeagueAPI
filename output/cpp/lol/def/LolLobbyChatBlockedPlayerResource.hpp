#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyChatBlockedPlayerResource { 
    uint64_t id;
    std::string name; 
  };
  void to_json(json& j, const LolLobbyChatBlockedPlayerResource& v) {
  j["id"] = v.id; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolLobbyChatBlockedPlayerResource& v) {
  v.id = j.at("id").get<uint64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}