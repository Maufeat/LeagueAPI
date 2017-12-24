#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterItemDto { 
    std::string summonerName;
    std::string clubRole;
    int32_t summonerIconId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const RosterItemDto& v) {
    j["summonerName"] = v.summonerName; 
    j["clubRole"] = v.clubRole; 
    j["summonerIconId"] = v.summonerIconId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, RosterItemDto& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.clubRole = j.at("clubRole").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}