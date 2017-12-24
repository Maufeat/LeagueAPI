#pragma once
#include "../base_def.hpp" 
#include "LolSuggestedPlayersSuggestedPlayersReason.hpp"
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer { 
    std::string summonerName;
    uint64_t summonerId;
    LolSuggestedPlayersSuggestedPlayersReason reason;
    std::string commonFriendName;
    uint64_t commonFriendId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["reason"] = v.reason; 
    j["commonFriendName"] = v.commonFriendName; 
    j["commonFriendId"] = v.commonFriendId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
  }
}