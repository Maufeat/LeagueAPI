#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1 { 
    std::vector<uint64_t> initiatorSummonerIds;
    std::string backwardsTransitionReason; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    j["initiatorSummonerIds"] = v.initiatorSummonerIds; 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
}