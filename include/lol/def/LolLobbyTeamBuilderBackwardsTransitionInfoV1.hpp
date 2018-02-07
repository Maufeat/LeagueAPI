#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1 { 
    std::string backwardsTransitionReason;
    std::vector<uint64_t> initiatorSummonerIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
    j["initiatorSummonerIds"] = v.initiatorSummonerIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>(); 
  }
}