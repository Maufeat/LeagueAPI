#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus { 
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds;
    std::vector<uint64_t> invitedSummonerIds; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    j["queueId"] = v.queueId; 
    j["memberSummonerIds"] = v.memberSummonerIds; 
    j["invitedSummonerIds"] = v.invitedSummonerIds; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
    v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
  }
}