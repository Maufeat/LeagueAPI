#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubPlayer { 
    uint64_t accountId;
    std::string summonerName;
    uint64_t summonerId;
    int32_t summonerIconId; 
  };
  inline void to_json(json& j, const ClubPlayer& v) {
    j["accountId"] = v.accountId; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
    j["summonerIconId"] = v.summonerIconId; 
  }
  inline void from_json(const json& j, ClubPlayer& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
}