#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSpectateGameInfoResource { 
    std::string dropInSpectateGameId;
    std::string gameQueueType;
    std::string allowObserveMode; 
  };
  inline void to_json(json& j, const LolChatSpectateGameInfoResource& v) {
    j["dropInSpectateGameId"] = v.dropInSpectateGameId; 
    j["gameQueueType"] = v.gameQueueType; 
    j["allowObserveMode"] = v.allowObserveMode; 
  }
  inline void from_json(const json& j, LolChatSpectateGameInfoResource& v) {
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>(); 
    v.gameQueueType = j.at("gameQueueType").get<std::string>(); 
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>(); 
  }
}