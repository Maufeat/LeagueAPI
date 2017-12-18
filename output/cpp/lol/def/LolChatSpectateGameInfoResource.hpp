#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatSpectateGameInfoResource { 
    std::string allowObserveMode;
    std::string dropInSpectateGameId;
    std::string gameQueueType; 
  };
  inline void to_json(json& j, const LolChatSpectateGameInfoResource& v) {
    j["allowObserveMode"] = v.allowObserveMode; 
    j["dropInSpectateGameId"] = v.dropInSpectateGameId; 
    j["gameQueueType"] = v.gameQueueType; 
  }
  inline void from_json(const json& j, LolChatSpectateGameInfoResource& v) {
    v.allowObserveMode = j.at("allowObserveMode").get<std::string>(); 
    v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>(); 
    v.gameQueueType = j.at("gameQueueType").get<std::string>(); 
  }
}