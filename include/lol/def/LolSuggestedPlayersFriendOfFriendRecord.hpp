#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersFriendOfFriendRecord { 
    std::string summonerName;
    uint64_t summonerId;
    std::string commonFriendName;
    uint64_t commonFriendId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersFriendOfFriendRecord& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["commonFriendName"] = v.commonFriendName; 
    j["commonFriendId"] = v.commonFriendId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersFriendOfFriendRecord& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
  }
}