#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubPlayer { 
    uint64_t accountId;
    uint64_t summonerId;
    std::string summonerName;
    int32_t summonerIconId; 
  };
  inline void to_json(json& j, const ClubPlayer& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["summonerIconId"] = v.summonerIconId; 
  }
  inline void from_json(const json& j, ClubPlayer& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
}