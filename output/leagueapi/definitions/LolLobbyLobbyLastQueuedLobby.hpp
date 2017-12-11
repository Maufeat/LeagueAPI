#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLobbyLastQueuedMember.hpp>"

namespace leagueapi {
  struct LolLobbyLobbyLastQueuedLobby { /**/ 
    int32_t queueId;/**/
    bool wasOwner;/**/
    bool canPlayAgain;/**/
    std::vector<LolLobbyLobbyLastQueuedMember> members;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyLastQueuedLobby& v) { 
    j["queueId"] = v.queueId;
    j["wasOwner"] = v.wasOwner;
    j["canPlayAgain"] = v.canPlayAgain;
    j["members"] = v.members;
  }
  static void from_json(const json& j, LolLobbyLobbyLastQueuedLobby& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.wasOwner = j.at("wasOwner").get<bool>(); 
    v.canPlayAgain = j.at("canPlayAgain").get<bool>(); 
    v.members = j.at("members").get<std::vector<LolLobbyLobbyLastQueuedMember>>(); 
  }
} 