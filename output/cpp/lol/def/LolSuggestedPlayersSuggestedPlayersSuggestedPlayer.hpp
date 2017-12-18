#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersReason.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer { 
    uint64_t commonFriendId;
    LolSuggestedPlayersSuggestedPlayersReason reason;
    std::string summonerName;
    std::string commonFriendName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    j["commonFriendId"] = v.commonFriendId; 
    j["reason"] = v.reason; 
    j["summonerName"] = v.summonerName; 
    j["commonFriendName"] = v.commonFriendName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
    v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}