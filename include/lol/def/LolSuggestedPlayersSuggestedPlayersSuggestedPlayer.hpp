#pragma once
#include "../base_def.hpp" 
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer { 
    std::string summonerName;
    uint64_t summonerId;
    std::string commonFriendName;
    uint64_t commonFriendId;
    LolSuggestedPlayersSuggestedPlayersReason reason; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["commonFriendName"] = v.commonFriendName; 
    j["commonFriendId"] = v.commonFriendId; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>(); 
  }
}