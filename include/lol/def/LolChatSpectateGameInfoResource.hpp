#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatSpectateGameInfoResource { 
    std::string gameQueueType;
    std::string allowObserveMode;
    std::string dropInSpectateGameId; 
  };
  inline void to_json(json& j, const LolChatSpectateGameInfoResource& v) {
    j["gameQueueType"] = v.gameQueueType; 
    j["allowObserveMode"] = v.allowObserveMode; 
    j["dropInSpectateGameId"] = v.dropInSpectateGameId; 
  }
  inline void from_json(const json& j, LolChatSpectateGameInfoResource& v) {
    v.gameQueueType = j.at("gameQueueType").get<std::string>(); 
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>(); 
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>(); 
  }
}