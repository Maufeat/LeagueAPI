#pragma once
#include "../base_def.hpp" 
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer { 
    std::string summonerName;
    std::string commonFriendName;
    LolSuggestedPlayersSuggestedPlayersReason reason;
    uint64_t summonerId;
    uint64_t commonFriendId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["commonFriendName"] = v.commonFriendName; 
    j["reason"] = v.reason; 
    j["summonerId"] = v.summonerId; 
    j["commonFriendId"] = v.commonFriendId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
  }
}