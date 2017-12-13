#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersFriendOfFriendRecord { 
    std::string commonFriendName;
    std::string summonerName;
    uint64_t summonerId;
    uint64_t commonFriendId; 
  };
  void to_json(json& j, const LolSuggestedPlayersFriendOfFriendRecord& v) {
  j["commonFriendName"] = v.commonFriendName; 
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  j["commonFriendId"] = v.commonFriendId; 
  }
  void from_json(const json& j, LolSuggestedPlayersFriendOfFriendRecord& v) {
  v.commonFriendName = j.at("commonFriendName").get<std::string>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.commonFriendId = j.at("commonFriendId").get<uint64_t>(); 
  }
}