#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyLastQueuedMember.hpp>
namespace lol {
  struct LolLobbyLobbyLastQueuedLobby { 
    std::vector<LolLobbyLobbyLastQueuedMember> members;
    bool canPlayAgain;
    int32_t queueId;
    bool wasOwner; 
  };
  void to_json(json& j, const LolLobbyLobbyLastQueuedLobby& v) {
  j["members"] = v.members; 
  j["canPlayAgain"] = v.canPlayAgain; 
  j["queueId"] = v.queueId; 
  j["wasOwner"] = v.wasOwner; 
  }
  void from_json(const json& j, LolLobbyLobbyLastQueuedLobby& v) {
  v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember>>(); 
  v.canPlayAgain = j.at("canPlayAgain").get<bool>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.wasOwner = j.at("wasOwner").get<bool>(); 
  }
}