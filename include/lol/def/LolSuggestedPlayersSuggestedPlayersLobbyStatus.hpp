#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus { 
    std::vector<uint64_t> memberSummonerIds;
    std::vector<uint64_t> invitedSummonerIds;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["invitedSummonerIds"] = v.invitedSummonerIds; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}