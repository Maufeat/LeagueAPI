#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersFriendOfFriendRecord { 
    uint64_t commonFriendId;
    std::string summonerName;
    std::string commonFriendName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersFriendOfFriendRecord& v) {
    j["commonFriendId"] = v.commonFriendId; 
    j["summonerName"] = v.summonerName; 
    j["commonFriendName"] = v.commonFriendName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersFriendOfFriendRecord& v) {
    v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}