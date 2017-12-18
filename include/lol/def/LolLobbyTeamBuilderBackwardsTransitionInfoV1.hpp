#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1 { 
    std::vector<uint64_t> initiatorSummonerIds;
    std::string backwardsTransitionReason; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    j["initiatorSummonerIds"] = v.initiatorSummonerIds; 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
}