#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyLobbyCustomGameLobby.hpp>"

namespace leagueapi {
  struct LolLobbyLobbyChangeGameDto { /**/ 
    int32_t queueId;/**/
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;/**/
    bool isCustom;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyChangeGameDto& v) { 
    j["queueId"] = v.queueId;
    j["customGameLobby"] = v.customGameLobby;
    j["isCustom"] = v.isCustom;
  }
  static void from_json(const json& j, LolLobbyLobbyChangeGameDto& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.customGameLobby = j.at("customGameLobby").get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
  }
} 