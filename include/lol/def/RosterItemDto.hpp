#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterItemDto { 
    uint64_t accountId;
    std::string summonerName;
    int32_t summonerIconId;
    std::string clubRole; 
  };
  inline void to_json(json& j, const RosterItemDto& v) {
    j["accountId"] = v.accountId; 
    j["summonerName"] = v.summonerName; 
    j["summonerIconId"] = v.summonerIconId; 
    j["clubRole"] = v.clubRole; 
  }
  inline void from_json(const json& j, RosterItemDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.clubRole = j.at("clubRole").get<std::string>(); 
  }
}