#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyLastQueuedMember { 
    uint64_t id; 
  };
  void to_json(json& j, const LolLobbyLobbyLastQueuedMember& v) {
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyLobbyLastQueuedMember& v) {
    v.id = j.at("id").get<uint64_t>(); 
  }
}