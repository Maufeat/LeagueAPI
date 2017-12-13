#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSuggestedPlayersSuggestedPlayersReason.hpp>
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersSuggestedPlayer { 
    std::string commonFriendName;
    std::string summonerName;
    uint64_t summonerId;
    LolSuggestedPlayersSuggestedPlayersReason reason;
    uint64_t commonFriendId; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
  j["commonFriendName"] = v.commonFriendName; 
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  j["reason"] = v.reason; 
  j["commonFriendId"] = v.commonFriendId; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersSuggestedPlayer& v) {
  v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.reason = j.at("reason").get<LolSuggestedPlayersSuggestedPlayersReason>(); 
  v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
  }
}