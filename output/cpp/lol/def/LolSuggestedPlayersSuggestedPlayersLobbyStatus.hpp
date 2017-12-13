#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersLobbyStatus { 
    std::vector<uint64_t> invitedSummonerIds;
    int32_t queueId;
    std::vector<uint64_t> memberSummonerIds; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
  j["invitedSummonerIds"] = v.invitedSummonerIds; 
  j["queueId"] = v.queueId; 
  j["memberSummonerIds"] = v.memberSummonerIds; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersLobbyStatus& v) {
  v.invitedSummonerIds = j.at("invitedSummonerIds").get<std::vector<uint64_t>>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>(); 
  }
}