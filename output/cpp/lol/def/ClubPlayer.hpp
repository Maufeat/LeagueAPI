#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubPlayer { 
    uint64_t summonerId;
    std::string summonerName;
    int32_t summonerIconId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const ClubPlayer& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["summonerIconId"] = v.summonerIconId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, ClubPlayer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}