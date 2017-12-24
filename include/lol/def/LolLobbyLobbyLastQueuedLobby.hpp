#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyLastQueuedMember.hpp"
namespace lol {
  struct LolLobbyLobbyLastQueuedLobby { 
    bool wasOwner;
    std::vector<LolLobbyLobbyLastQueuedMember> members;
    int32_t queueId;
    bool canPlayAgain; 
  };
  inline void to_json(json& j, const LolLobbyLobbyLastQueuedLobby& v) {
    j["wasOwner"] = v.wasOwner; 
    j["members"] = v.members; 
    j["queueId"] = v.queueId; 
    j["canPlayAgain"] = v.canPlayAgain; 
  }
  inline void from_json(const json& j, LolLobbyLobbyLastQueuedLobby& v) {
    v.wasOwner = j.at("wasOwner").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.canPlayAgain = j.at("canPlayAgain").get<bool>(); 
  }
}